#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITWHILE_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1EF8BE90)
#define FLOWCANVAS_NODES_WAITWHILE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8BEA0)
#define FLOWCANVAS_NODES_WAITWHILE_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x1EF8BEF0)
#define FLOWCANVAS_NODES_WAITWHILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8BF50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitWhile_TypeDefinitionIndex = 30410;

	class WaitWhile : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITWHILE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITWHILE_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITWHILE_INVOKE_OFFSET))(this);
		}

		::System::Void OnRegisterExtraPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITWHILE_ONREGISTEREXTRAPORTS_OFFSET))(this, node);
		}
	};
}
