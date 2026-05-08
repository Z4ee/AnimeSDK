#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace System { class Type; }

#define FLOWCANVAS_NODES_RELAYVALUEINPUTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8471F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueInputBase_TypeDefinitionIndex = 26490;

	class RelayValueInputBase : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RELAYVALUEINPUTBASE__CTOR_OFFSET))(this);
		}
	};
}
