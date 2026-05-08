#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_20;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12D14240)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12D14100)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12D14320)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__RUN_G____SENDTIMEROUTEVENT_2_0_OFFSET UNITYSDK_OFFSET(0x12D141F0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12D14330)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x12D143C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoSleepAction_TypeDefinitionIndex = 54866;

	class PlayerOnAutoSleepAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Single sleepDelay; // 0x28
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _Run_g____sendTimerOutEvent_2_0()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__RUN_G____SENDTIMEROUTEVENT_2_0_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
