#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_24;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12B97DC0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12B97B70)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B97EA0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET UNITYSDK_OFFSET(0x12B97EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12B97EE0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x12B97F70)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoAwakeAction_TypeDefinitionIndex = 52946;

	class PlayerOnAutoAwakeAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET))(this, context);
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

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_24* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
