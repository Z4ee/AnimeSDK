#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_01E08232722A1633_OFFSET UNITYSDK_OFFSET(0x185FF6B0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_E75AE553A8852D6E_OFFSET UNITYSDK_OFFSET(0x185FF790)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185FF740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithTimesLimitConfig_TypeDefinitionIndex = 16139;

	class ActionTriggerActionWithTimesLimitConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Times; // 0x20
		::System::String* CounterKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_01E08232722A1633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_01E08232722A1633_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E75AE553A8852D6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_E75AE553A8852D6E_OFFSET))(a1, a2);
		}
	};
}
