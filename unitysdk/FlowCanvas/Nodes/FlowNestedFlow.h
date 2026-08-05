#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowNestedBase_1.h"

namespace FlowCanvas { class FlowScript; }

#define FLOWCANVAS_NODES_FLOWNESTEDFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24AD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedFlow_TypeDefinitionIndex = 30944;

	class FlowNestedFlow : public ::FlowCanvas::Nodes::FlowNestedBase_1<::FlowCanvas::FlowScript*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDFLOW__CTOR_OFFSET))(this);
		}
	};
}
