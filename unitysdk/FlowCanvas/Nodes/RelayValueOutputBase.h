#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas::Nodes { class RelayValueInputBase; }

#define FLOWCANVAS_NODES_RELAYVALUEOUTPUTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB941B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueOutputBase_TypeDefinitionIndex = 29926;

	class RelayValueOutputBase : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RELAYVALUEOUTPUTBASE__CTOR_OFFSET))(this);
		}
	};
}
