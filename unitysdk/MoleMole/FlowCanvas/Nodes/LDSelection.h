#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B8391D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION_START_OFFSET UNITYSDK_OFFSET(0x1B839780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B839930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSelection_TypeDefinitionIndex = 54701;

	class LDSelection : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::Int32 MaxSection = 0x8; // 0x0
		::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* _flowOutputs; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* inIndexPort; // 0xB0
		::FlowCanvas::FlowOutput* _finishOutput; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0
		::System::Int32 showCount; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSELECTION_START_OFFSET))(this, f);
		}
	};
}
