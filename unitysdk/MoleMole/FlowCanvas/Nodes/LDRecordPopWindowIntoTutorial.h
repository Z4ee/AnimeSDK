#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149DFB50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL_START_OFFSET UNITYSDK_OFFSET(0x149DFC40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x149DFEB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRecordPopWindowIntoTutorial_TypeDefinitionIndex = 82492;

	class LDRecordPopWindowIntoTutorial : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Int32>*>* _popIDs; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDPOPWINDOWINTOTUTORIAL_START_OFFSET))(this, flow);
		}
	};
}
