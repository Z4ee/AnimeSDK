#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_1.h"

class Class_1_8289F2785D9AA990;
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x18A471B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_GET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x18A47190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A471D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x18A47260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_SET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x18A471C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_SET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x18A471A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A472F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT___BASE_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x18A47310)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Wait_TypeDefinitionIndex = 62655;

	class LD_Wait : public ::FlowCanvas::Nodes::LatentActionNode_1<::System::Single>
	{
	public:
		::Class_1_8289F2785D9AA990* timer; // 0x60
		::FlowCanvas::ValueInput_1<::System::Boolean>* acceptTimeScale; // 0x68
		::System::Single _normalized_k__BackingField; // 0x70
		::System::Single _timeLeft_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__CTOR_OFFSET))(this);
		}

		::System::Single get_timeLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_GET_TIMELEFT_OFFSET))(this);
		}

		::System::Void set_timeLeft(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_SET_TIMELEFT_OFFSET))(this, value);
		}

		::System::Single get_normalized()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Void set_normalized(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_SET_NORMALIZED_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_INVOKE_OFFSET))(this, time);
		}

		::System::Void OnRegisterExtraPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT_ONREGISTEREXTRAPORTS_OFFSET))(this, node);
		}

		::System::Void __base_OnRegisterExtraPorts(::FlowCanvas::FlowNode* P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT___BASE_ONREGISTEREXTRAPORTS_OFFSET))(this, P0);
		}
	};
}
