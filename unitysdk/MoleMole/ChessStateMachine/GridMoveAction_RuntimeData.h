#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_5_A6F8D19602712D95;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x8B64E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_RuntimeData_TypeDefinitionIndex = 68209;

	struct alignas(8) GridMoveAction_RuntimeData
	{
		::Class_5_A6F8D19602712D95* BindPiece; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
