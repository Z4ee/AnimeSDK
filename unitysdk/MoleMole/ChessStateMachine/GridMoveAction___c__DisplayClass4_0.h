#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_8A5B236F53009830;
namespace MoleMole::ChessStateMachine { class GridMoveAction; }
namespace System { class Action; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE5480)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x12EE5490)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction___c__DisplayClass4_0_TypeDefinitionIndex = 68207;

	class GridMoveAction___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_5_8A5B236F53009830* data; // 0x10
		::System::Action* __9__0; // 0x18
		::MoleMole::ChessStateMachine::GridMoveAction* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET))(this);
		}
	};
}
