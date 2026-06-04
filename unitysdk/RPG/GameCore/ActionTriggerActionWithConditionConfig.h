#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_4_55830174BA5E80BC_OFFSET UNITYSDK_OFFSET(0x193CFDE0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_4_B7A5B6BEA7B0CE5C_OFFSET UNITYSDK_OFFSET(0x193CFEC0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193CFE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionConfig_TypeDefinitionIndex = 16184;

	class ActionTriggerActionWithConditionConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55830174BA5E80BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_4_55830174BA5E80BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7A5B6BEA7B0CE5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_4_B7A5B6BEA7B0CE5C_OFFSET))(a1, a2);
		}
	};
}
