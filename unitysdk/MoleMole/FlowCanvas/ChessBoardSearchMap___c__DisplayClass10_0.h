#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas { class ChessBoardSearchMap; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap___c__DisplayClass10_0_TypeDefinitionIndex = 85063;

	struct alignas(8) ChessBoardSearchMap___c__DisplayClass10_0
	{
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* grid; // 0x10
		::MoleMole::FlowCanvas::ChessBoardSearchMap* __4__this; // 0x18
		::System::Int32 gridWidth; // 0x20
		::System::Int32 col; // 0x24
		::System::Int32 minManhattanDistance; // 0x28
		::System::Int32 gridCol; // 0x2C
		::System::Int32 gridRow; // 0x30
		::System::Int32 row; // 0x34
	};
}
