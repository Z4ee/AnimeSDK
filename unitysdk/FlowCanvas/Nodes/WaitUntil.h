#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITUNTIL_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1CC365B0)
#define FLOWCANVAS_NODES_WAITUNTIL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC365C0)
#define FLOWCANVAS_NODES_WAITUNTIL_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x1CC36610)
#define FLOWCANVAS_NODES_WAITUNTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36670)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitUntil_TypeDefinitionIndex = 30322;

	class WaitUntil : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL_INVOKE_OFFSET))(this);
		}

		::System::Void OnRegisterExtraPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL_ONREGISTEREXTRAPORTS_OFFSET))(this, node);
		}
	};
}
