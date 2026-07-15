#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG_METHOD_3_909069C9F4498428_OFFSET UNITYSDK_OFFSET(0x1C601650)
#define RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG_METHOD_3_A62DD75CCE8C61F3_OFFSET UNITYSDK_OFFSET(0x1C601550)
#define RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6015E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierValueByBehaviorFlag_TypeDefinitionIndex = 22252;

	class SetModifierValueByBehaviorFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* ModifierBehaviorFlags; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::RPG::GameCore::ModifierValueType ValueType; // 0x2C
		::RPG::GameCore::DynamicFloat* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A62DD75CCE8C61F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierValueByBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierValueByBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG_METHOD_3_A62DD75CCE8C61F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_909069C9F4498428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierValueByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierValueByBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUEBYBEHAVIORFLAG_METHOD_3_909069C9F4498428_OFFSET))(a1, a2);
		}
	};
}
