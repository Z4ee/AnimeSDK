#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int InteractionEndSuddenEventMsg_TypeDefinitionIndex = 63973;

	struct alignas(8) InteractionEndSuddenEventMsg
	{
		::System::Int32 AreaNo; // 0x10
		::System::String* SuddenEventKey; // 0x18
	};
}
