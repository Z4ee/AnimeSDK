#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class StateMachineEntityAction; }
namespace System { class Action; }

#define MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEENTITYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1398E590)
#define MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEENTITYACTION___C__DISPLAYCLASS4_0__WARPINGVERSIONACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1398E5A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineEntityAction___c__DisplayClass4_0_TypeDefinitionIndex = 55525;

	class StateMachineEntityAction___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::MoleMole::ChessStateMachine::StateMachineEntityAction* __4__this; // 0x18
		::System::Int32 CacheinstanceId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEENTITYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _WarpingVersionAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATEMACHINEENTITYACTION___C__DISPLAYCLASS4_0__WARPINGVERSIONACTION_B__0_OFFSET))(this);
		}
	};
}
