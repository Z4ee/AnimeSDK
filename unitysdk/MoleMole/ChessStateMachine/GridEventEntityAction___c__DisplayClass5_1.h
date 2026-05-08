#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
namespace MoleMole::ChessStateMachine { class GridEventEntityAction___c__DisplayClass5_0; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1751E890)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__RUN_B__4_OFFSET UNITYSDK_OFFSET(0x1751E8A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_1_TypeDefinitionIndex = 40559;

	class GridEventEntityAction___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::GridEventEntityAction___c__DisplayClass5_0* CS___8__locals1; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__4(::Class_1_5A6771CD0CA2718D* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__RUN_B__4_OFFSET))(this, player);
		}
	};
}
