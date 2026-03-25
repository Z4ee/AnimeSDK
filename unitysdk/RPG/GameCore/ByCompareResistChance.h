#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_10362B32B0B241C8_OFFSET UNITYSDK_OFFSET(0x170149E0)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_8A8EA314FF4CDD93_OFFSET UNITYSDK_OFFSET(0x17014910)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17014990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareResistChance_TypeDefinitionIndex = 21722;

	class ByCompareResistChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagList; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A8EA314FF4CDD93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_8A8EA314FF4CDD93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10362B32B0B241C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_10362B32B0B241C8_OFFSET))(a1, a2);
		}
	};
}
