#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_2328CECC73CBC2FD_OFFSET UNITYSDK_OFFSET(0x1C9EAC70)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_913599D7196E7C77_OFFSET UNITYSDK_OFFSET(0x1C9EACD0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9EACC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithTimesLimitConfig_TypeDefinitionIndex = 16860;

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

		static ::System::Void Method_4_2328CECC73CBC2FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_2328CECC73CBC2FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_913599D7196E7C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_METHOD_4_913599D7196E7C77_OFFSET))(a1, a2);
		}
	};
}
