#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_5D9A33471C5FF063_OFFSET UNITYSDK_OFFSET(0x185FF420)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_79D3DFB91243BE5E_OFFSET UNITYSDK_OFFSET(0x185FF500)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185FF4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionWithFailConfig_TypeDefinitionIndex = 16136;

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

		static ::System::Void Method_4_5D9A33471C5FF063(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_5D9A33471C5FF063_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79D3DFB91243BE5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_4_79D3DFB91243BE5E_OFFSET))(a1, a2);
		}
	};
}
