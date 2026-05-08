#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITFORPHYSICSFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1ADAFFE0)
#define FLOWCANVAS_NODES_WAITFORPHYSICSFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADAFFF0)
#define FLOWCANVAS_NODES_WAITFORPHYSICSFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0030)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForPhysicsFrame_TypeDefinitionIndex = 27553;

	class WaitForPhysicsFrame : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORPHYSICSFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORPHYSICSFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORPHYSICSFRAME_INVOKE_OFFSET))(this);
		}
	};
}
