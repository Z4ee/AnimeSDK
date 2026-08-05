#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13694A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13694BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x13694C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x13695500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x13695390)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x136954C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowOptionPopWindow_TypeDefinitionIndex = 60694;

	class LDShowOptionPopWindow : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::FlowOutput* notOpen; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* specialPopID; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isServerOnce; // 0xC0
		::FlowCanvas::FlowOutput* onClosed; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
