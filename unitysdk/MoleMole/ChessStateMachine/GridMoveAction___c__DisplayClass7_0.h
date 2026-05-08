#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6.h"
#include "unitysdk/System/Object.h"

class Class_5_8A5B236F53009830;
namespace MoleMole::ChessStateMachine { class GridMoveAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS7_0__ANIMATEDCHESSBOARDSWITCH_B__0_OFFSET UNITYSDK_OFFSET(0xF95FEE0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF95FED0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction___c__DisplayClass7_0_TypeDefinitionIndex = 68222;

	class GridMoveAction___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::GridMoveAction* __4__this; // 0x10
		::Class_5_8A5B236F53009830* data; // 0x18
		::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 targetRenderType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _AnimatedChessboardSwitch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___C__DISPLAYCLASS7_0__ANIMATEDCHESSBOARDSWITCH_B__0_OFFSET))(this);
		}
	};
}
