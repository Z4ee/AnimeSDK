#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/ChessStateMachine/TvHudAction_AnimType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowConstant_AimHudProperty.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x17D0EB30)
#define MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_RUN_OFFSET UNITYSDK_OFFSET(0x17D0E4D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_STOP_OFFSET UNITYSDK_OFFSET(0x17D0EB80)
#define MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0EBD0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TvHudAction_TypeDefinitionIndex = 55962;

	class TvHudAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::MoleMole::HollowChessboard::RenderDataHandle Handle; // 0x28
		::MoleMole::ChessStateMachine::TvHudAction_AnimType Anim; // 0x38
		::MoleMole::HollowChessboard::HollowConstant_AimHudProperty AimHudProperty; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TVHUDACTION_STOP_OFFSET))(this);
		}
	};
}
