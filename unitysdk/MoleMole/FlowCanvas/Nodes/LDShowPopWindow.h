#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UITutorialDialog; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x161E22B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161E2150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x161E24E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x161E2520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x161E2AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_2_OFFSET UNITYSDK_OFFSET(0x161E2AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x161E2B30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindow_TypeDefinitionIndex = 60432;

	class LDShowPopWindow : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::UITutorialDialog* preloadDialog; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* popID; // 0xB0
		::FlowCanvas::FlowOutput* notOpen; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isServerOnce; // 0xC0
		::FlowCanvas::FlowOutput* onClosed; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_DOPRELOAD_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_1_OFFSET))(this);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___BASE_DOPRELOAD_OFFSET))(this);
		}
	};
}
