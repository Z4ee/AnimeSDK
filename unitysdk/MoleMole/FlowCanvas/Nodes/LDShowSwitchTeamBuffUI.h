#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12615110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONRESTART_OFFSET UNITYSDK_OFFSET(0x126151C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONSTART_OFFSET UNITYSDK_OFFSET(0x12614AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12614940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__CTOR_OFFSET UNITYSDK_OFFSET(0x12615220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x12615260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x126152B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_2_OFFSET UNITYSDK_OFFSET(0x126152C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowSwitchTeamBuffUI_TypeDefinitionIndex = 71367;

	class LDShowSwitchTeamBuffUI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* BuffProgressName; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* BuffLevelName; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONSTART_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONCLOSE_OFFSET))(this);
		}

		::System::Void OnRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONRESTART_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_2_OFFSET))(this, f);
		}
	};
}
