#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace UnityEngine { class Object; }

#define FLOWCANVAS_NODES_CUSTOMOBJECTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8980)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomObjectWrapper_TypeDefinitionIndex = 30742;

	class CustomObjectWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMOBJECTWRAPPER__CTOR_OFFSET))(this);
		}
	};
}
