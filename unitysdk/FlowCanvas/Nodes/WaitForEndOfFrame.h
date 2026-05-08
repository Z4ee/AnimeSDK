#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1B49D4A0)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B49D4B0)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49D4F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForEndOfFrame_TypeDefinitionIndex = 27454;

	class WaitForEndOfFrame : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME_INVOKE_OFFSET))(this);
		}
	};
}
