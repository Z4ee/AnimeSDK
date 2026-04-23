#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xA0A34D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_GET_ISCHECKPASS_OFFSET UNITYSDK_OFFSET(0xA0A35E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SET_ISCHECKPASS_OFFSET UNITYSDK_OFFSET(0xA0A35F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SYNCCHECKRESULT_OFFSET UNITYSDK_OFFSET(0xA0A17B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A2550)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE___IFIXBASEPROXY_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xA0A3600)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkCheckState_TypeDefinitionIndex = 56689;

	class ClockParkInstance_ClockParkCheckState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Boolean _IsCheckPass_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE__CTOR_OFFSET))(this);
		}

		::System::Void SyncCheckResult(::System::Boolean isPass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SYNCCHECKRESULT_OFFSET))(this, isPass);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean get_IsCheckPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_GET_ISCHECKPASS_OFFSET))(this);
		}

		::System::Void set_IsCheckPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SET_ISCHECKPASS_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE___IFIXBASEPROXY_FINISHROUND_OFFSET))(this);
		}
	};
}
