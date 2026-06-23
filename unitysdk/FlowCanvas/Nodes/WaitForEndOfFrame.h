#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1D83D710)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D83D720)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83D760)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForEndOfFrame_TypeDefinitionIndex = 29508;

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
