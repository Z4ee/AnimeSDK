#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIBubbleTips; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1780A510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1780A340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1780A5B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x1780A560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1780A5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1780AA60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1780AAA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTip_TypeDefinitionIndex = 71909;

	class LDShowTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* tipParam; // 0xB8
		::FlowCanvas::FlowOutput* finish; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* tipParamList; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* show; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::MoleMole::UIBubbleTips* _bubbleTip; // 0xE0
		::System::Int32 defaultV; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::MoleMole::UIBubbleTips* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreate(::NodeCanvas::Framework::Graph* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP___BASE_ONCREATE_OFFSET))(this, P0);
		}
	};
}
