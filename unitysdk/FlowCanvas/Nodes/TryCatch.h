#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_TRYCATCH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B49CD90)
#define FLOWCANVAS_NODES_TRYCATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49CE70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TryCatch_TypeDefinitionIndex = 27895;

	class TryCatch : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH_REGISTERPORTS_OFFSET))(this);
		}
	};
}
