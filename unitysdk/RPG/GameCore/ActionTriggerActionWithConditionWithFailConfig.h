#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_4F5D85748873EE67_OFFSET UNITYSDK_OFFSET(0x1CD74E50)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_E4DD046EF164152D_OFFSET UNITYSDK_OFFSET(0x1CD74DF0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD74E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionWithFailConfig_TypeDefinitionIndex = 16857;

	class ActionTriggerActionWithConditionWithFailConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* SuccAction; // 0x18
		::RPG::GameCore::MiActionConfigBase* FailAction; // 0x20
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4DD046EF164152D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_E4DD046EF164152D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F5D85748873EE67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_4F5D85748873EE67_OFFSET))(a1, a2);
		}
	};
}
