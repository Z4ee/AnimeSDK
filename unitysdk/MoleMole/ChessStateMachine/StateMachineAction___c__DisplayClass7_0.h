#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class StateMachineAction; }
namespace System { class Action; }

#define MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xECF8FE0)
#define MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEACTION___C__DISPLAYCLASS7_0__WARPINGVERSIONACTION_B__0_OFFSET UNITYSDK_OFFSET(0xECF8FF0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineAction___c__DisplayClass7_0_TypeDefinitionIndex = 38654;

	class StateMachineAction___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::StateMachineAction* __4__this; // 0x10
		::System::Action* action; // 0x18
		::System::Int32 CacheinstanceId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _WarpingVersionAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEACTION___C__DISPLAYCLASS7_0__WARPINGVERSIONACTION_B__0_OFFSET))(this);
		}
	};
}
