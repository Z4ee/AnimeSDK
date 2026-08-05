#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

#define FLOWCANVAS_NODES_CALLABLEACTIONNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB23F80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableActionNodeBase_TypeDefinitionIndex = 30791;

	class CallableActionNodeBase : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEACTIONNODEBASE__CTOR_OFFSET))(this);
		}
	};
}
