#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

#define FLOWCANVAS_NODES_PUREFUNCTIONNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7850)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureFunctionNodeBase_TypeDefinitionIndex = 30061;

	class PureFunctionNodeBase : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREFUNCTIONNODEBASE__CTOR_OFFSET))(this);
		}
	};
}
