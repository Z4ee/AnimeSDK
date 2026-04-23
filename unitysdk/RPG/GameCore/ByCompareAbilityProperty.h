#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_METHOD_4_935D059FB7CE59F7_OFFSET UNITYSDK_OFFSET(0x18726210)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_METHOD_4_D8F8A703CD0E5B2B_OFFSET UNITYSDK_OFFSET(0x18726140)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x187261C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAbilityProperty_TypeDefinitionIndex = 22514;

	class ByCompareAbilityProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AbilityProperty Property; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D8F8A703CD0E5B2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAbilityProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAbilityProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_METHOD_4_D8F8A703CD0E5B2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_935D059FB7CE59F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_METHOD_4_935D059FB7CE59F7_OFFSET))(a1, a2);
		}
	};
}
