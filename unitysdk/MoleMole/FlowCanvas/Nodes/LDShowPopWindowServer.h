#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B82680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B82790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x16B827D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindowServer_TypeDefinitionIndex = 40476;

	class LDShowPopWindowServer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* popID; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* popNewIcon; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
