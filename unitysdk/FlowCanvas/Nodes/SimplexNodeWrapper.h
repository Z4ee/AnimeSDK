#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define FLOWCANVAS_NODES_SIMPLEXNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51E9E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SimplexNodeWrapper_TypeDefinitionIndex = 30237;

	class SimplexNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODEWRAPPER__CTOR_OFFSET))(this);
		}
	};
}
