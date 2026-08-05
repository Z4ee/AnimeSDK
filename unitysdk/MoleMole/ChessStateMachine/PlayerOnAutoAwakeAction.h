#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_31;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x14359140)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x14358E80)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14359220)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET UNITYSDK_OFFSET(0x14359230)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x14359260)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x143592F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoAwakeAction_TypeDefinitionIndex = 41108;

	class PlayerOnAutoAwakeAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void _Run_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
