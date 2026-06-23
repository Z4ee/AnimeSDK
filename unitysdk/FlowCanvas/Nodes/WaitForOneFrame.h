#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITFORONEFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1D51F860)
#define FLOWCANVAS_NODES_WAITFORONEFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D51F870)
#define FLOWCANVAS_NODES_WAITFORONEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F8B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForOneFrame_TypeDefinitionIndex = 29756;

	class WaitForOneFrame : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORONEFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORONEFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORONEFRAME_INVOKE_OFFSET))(this);
		}
	};
}
