#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_4_DA19DD65175B97CF;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x141DC700)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x141DC360)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x141DC5C0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET UNITYSDK_OFFSET(0x141DC370)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_STOP_OFFSET UNITYSDK_OFFSET(0x141DC740)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x141DC780)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlaySubFadeInOutAudioAction_TypeDefinitionIndex = 64286;

	class PlaySubFadeInOutAudioAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean PlayDefaulOut; // 0x28
		::System::Boolean PlayDefaultIn; // 0x29
		::System::Boolean NeedCustom; // 0x2A
		::System::Int32 Audio_Id; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET))(this, context);
		}

		::System::Void RunInner(::Class_4_DA19DD65175B97CF* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET))(this, proxy);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_STOP_OFFSET))(this);
		}
	};
}
