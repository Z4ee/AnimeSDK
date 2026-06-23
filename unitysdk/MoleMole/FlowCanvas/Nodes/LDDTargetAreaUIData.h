#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorWithStyle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDTargetAreaUIData_TypeDefinitionIndex = 56208;

	struct alignas(8) LDDTargetAreaUIData
	{
		::MoleMole::FlowCanvas::Nodes::AnchorWithStyle Anchor; // 0x10
		::System::Single Radius; // 0x20
		::System::Single CreateInterval; // 0x24
	};
}
