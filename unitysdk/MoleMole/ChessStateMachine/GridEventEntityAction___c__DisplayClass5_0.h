#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
class Class_4_DA19DD65175B97CF;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D27560)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x17D27570)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_0_TypeDefinitionIndex = 84580;

	class GridEventEntityAction___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_4_DA19DD65175B97CF* chessPieceProxy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0(::Class_1_5A6771CD0CA2718D* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET))(this, p, m);
		}
	};
}
