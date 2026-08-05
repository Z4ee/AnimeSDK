#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_FilterParams_TypeDefinitionIndex = 46382;

	struct alignas(8) ChessBoardSearchMap_FilterParams
	{
		::Il2CppArray<::System::String*>* tags; // 0x10
		::System::Int32 number; // 0x18
		::System::Int32 minDisatance; // 0x1C
	};
}
