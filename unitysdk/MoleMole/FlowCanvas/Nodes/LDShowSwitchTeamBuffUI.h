#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x149E1C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONRESTART_OFFSET UNITYSDK_OFFSET(0x149E1CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_ONSTART_OFFSET UNITYSDK_OFFSET(0x149E15E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149E1450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__CTOR_OFFSET UNITYSDK_OFFSET(0x149E1D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x149E1D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x149E1DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSWITCHTEAMBUFFUI__REGISTERPORTS_B__3_2_OFFSET UNITYSDK_OFFSET(0x149E1DD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowSwitchTeamBuffUI_TypeDefinitionIndex = 44461;

	class LDShowSwitchTeamBuffUI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* BuffProgressName; // 0xB0
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
