#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x129957F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_START_OFFSET UNITYSDK_OFFSET(0x12995920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x12995D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x12995D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__START_B__6_0_OFFSET UNITYSDK_OFFSET(0x12995DB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowBanner_TypeDefinitionIndex = 64555;

	class LDShowBanner : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _title; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _message; // 0xB0
		::FlowCanvas::FlowInput* _start; // 0xB8
		::FlowCanvas::FlowOutput* _output; // 0xC0
		::FlowCanvas::FlowOutput* _onClickOk; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Void _Start_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__START_B__6_0_OFFSET))(this);
		}
	};
}
