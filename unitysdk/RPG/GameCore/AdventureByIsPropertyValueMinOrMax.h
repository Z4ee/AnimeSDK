#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/MinMaxType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_METHOD_4_6A331EDF297F9DDE_OFFSET UNITYSDK_OFFSET(0x18670100)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_METHOD_4_7C225C23CDB335F8_OFFSET UNITYSDK_OFFSET(0x18670220)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x186701A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsPropertyValueMinOrMax_TypeDefinitionIndex = 19184;

	class AdventureByIsPropertyValueMinOrMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::System::Boolean AliveOnly; // 0x30
		::RPG::GameCore::MinMaxType MinOrMax; // 0x34
		::RPG::GameCore::AdventureAbilityProperty PropertyType; // 0x38
		::RPG::GameCore::AdventureAbilityPropertyRatio PropertyRatioType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A331EDF297F9DDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_METHOD_4_6A331EDF297F9DDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C225C23CDB335F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_METHOD_4_7C225C23CDB335F8_OFFSET))(a1, a2);
		}
	};
}
