#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B87240)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B874E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x16B87490)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x16B87520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x16B879F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_2_OFFSET UNITYSDK_OFFSET(0x16B87A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShowMiddleTip_TypeDefinitionIndex = 54707;

	class LD_ShowMiddleTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* showIcon; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* debugText; // 0xB0
		::FlowCanvas::FlowOutput* ShowOutput; // 0xB8
		::MoleMole::UIMiddleTip* _middleTip; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* updateText; // 0xC8
		::FlowCanvas::FlowInput* Show; // 0xD0
		::FlowCanvas::FlowOutput* HideOutput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* show; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xF0
		::FlowCanvas::FlowInput* Hide; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::UIMiddleTip* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIMiddleTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_2_OFFSET))(this, f);
		}
	};
}
