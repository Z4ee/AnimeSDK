#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_4_AC6D98911872E0CE;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1B53A940)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1B53A5C0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x1B53A800)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1B53A5D0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_STOP_OFFSET UNITYSDK_OFFSET(0x1B53A980)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53A9C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlaySubFadeInOutAudioAction_TypeDefinitionIndex = 42997;

	class PlaySubFadeInOutAudioAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Int32 Audio_Id; // 0x28
		::System::Boolean PlayDefaultIn; // 0x2C
		::System::Boolean PlayDefaulOut; // 0x2D
		::System::Boolean NeedCustom; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET))(this, context);
		}

		::System::Void RunInner(::Class_4_AC6D98911872E0CE* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET))(this, proxy);
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
