#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19B0C810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE_START_OFFSET UNITYSDK_OFFSET(0x19B0C940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0D270)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDModifyPositionTaskExclude_TypeDefinitionIndex = 68720;

	class LDModifyPositionTaskExclude : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* _inputBoundMarkNames; // 0xA8
		::FlowCanvas::FlowOutput* _flowOutputOut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* _inputtaskHandle; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _inputExclude; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMODIFYPOSITIONTASKEXCLUDE_START_OFFSET))(this, f);
		}
	};
}
