#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xCC3A5F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_GET_ISCHECKPASS_OFFSET UNITYSDK_OFFSET(0xCC3A700)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SET_ISCHECKPASS_OFFSET UNITYSDK_OFFSET(0xCC3A710)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SYNCCHECKRESULT_OFFSET UNITYSDK_OFFSET(0xCC38800)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC39750)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkCheckState_TypeDefinitionIndex = 61566;

	class ClockParkInstance_ClockParkCheckState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Boolean _IsCheckPass_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE__CTOR_OFFSET))(this);
		}

		::System::Void SyncCheckResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SYNCCHECKRESULT_OFFSET))(this, a1);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean get_IsCheckPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_GET_ISCHECKPASS_OFFSET))(this);
		}

		::System::Void set_IsCheckPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKCHECKSTATE_SET_ISCHECKPASS_OFFSET))(this, a1);
		}
	};
}
