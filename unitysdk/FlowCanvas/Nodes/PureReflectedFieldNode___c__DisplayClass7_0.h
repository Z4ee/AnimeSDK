#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class PureReflectedFieldNode; }

#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61FDC0)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1C61FDD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedFieldNode___c__DisplayClass7_0_TypeDefinitionIndex = 29597;

	class PureReflectedFieldNode___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureReflectedFieldNode* __4__this; // 0x10
		::FlowCanvas::FlowOutput* output; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS7_0__REGISTERPORTS_B__2_OFFSET))(this, flow);
		}
	};
}
