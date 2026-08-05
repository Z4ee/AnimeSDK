#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_1.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAIT_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EBB5F30)
#define FLOWCANVAS_NODES_WAIT_GET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x1EBB5F10)
#define FLOWCANVAS_NODES_WAIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB5F50)
#define FLOWCANVAS_NODES_WAIT_SET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EBB5F40)
#define FLOWCANVAS_NODES_WAIT_SET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x1EBB5F20)
#define FLOWCANVAS_NODES_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB5FB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 30444;

	class Wait : public ::FlowCanvas::Nodes::LatentActionNode_1<::System::Single>
	{
	public:
		::System::Single _normalized_k__BackingField; // 0x60
		::System::Single _timeLeft_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT__CTOR_OFFSET))(this);
		}

		::System::Single get_timeLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_GET_TIMELEFT_OFFSET))(this);
		}

		::System::Void set_timeLeft(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_SET_TIMELEFT_OFFSET))(this, value);
		}

		::System::Single get_normalized()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Void set_normalized(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_SET_NORMALIZED_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_INVOKE_OFFSET))(this, time);
		}
	};
}
