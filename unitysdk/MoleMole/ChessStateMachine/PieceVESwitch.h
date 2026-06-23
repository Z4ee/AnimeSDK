#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_24;

#define MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1A053B40)
#define MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1A053BC0)
#define MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_RUN_OFFSET UNITYSDK_OFFSET(0x1A0536B0)
#define MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_STOP_OFFSET UNITYSDK_OFFSET(0x1A053B80)
#define MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A053BD0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PieceVESwitch_TypeDefinitionIndex = 57226;

	class PieceVESwitch : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean NoNeedSetMultiDisplay; // 0x28
		::System::Boolean NeedStopEffect; // 0x29
		::System::Boolean CloseAll; // 0x2A
		::System::Boolean NeedClearColorCorrection; // 0x2B
		::System::Boolean NeedStopSubState; // 0x2C
		::System::Boolean NotNeedClearSound; // 0x2D
		::System::Boolean EnableMultiDisplay; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PIECEVESWITCH_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
