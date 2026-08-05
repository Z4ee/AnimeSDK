#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_1_F762CCF3DE84394E;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11456810)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__1_OFFSET UNITYSDK_OFFSET(0x11456A60)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__2_OFFSET UNITYSDK_OFFSET(0x11456A90)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__3_OFFSET UNITYSDK_OFFSET(0x11456A40)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_2_TypeDefinitionIndex = 68859;

	class GridEventEntityAction___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::Class_1_F762CCF3DE84394E* pieceMultiPlayerHelper; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__3_OFFSET))(this);
		}

		::System::Void _Run_b__1(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__1_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__2(::Class_1_5A6771CD0CA2718D* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__2_OFFSET))(this, p, c, i);
		}
	};
}
