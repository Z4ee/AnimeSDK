#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/MultiTaskNodeHandle.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"

class Class_2_D6F9B792012303A1;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_DELAYDURATION_OFFSET UNITYSDK_OFFSET(0x161E1460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161E0F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_START_OFFSET UNITYSDK_OFFSET(0x161E1060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x161E14F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x161E1530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x161E1540)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRegisterTask_TypeDefinitionIndex = 51966;

	class LDRegisterTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* delayHandle; // 0xA8
		::Class_2_D6F9B792012303A1* taskNode; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* taskName; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::MultiTaskNodeHandle>* multiTaskNodeInput; // 0xC0
		::FlowCanvas::FlowOutput* _output; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_START_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* DelayDuration(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK_DELAYDURATION_OFFSET))(this, time);
		}

		::MoleMole::TaskCompletionSourceNodeHandle _RegisterPorts_b__5_0()
		{
			return ((::MoleMole::TaskCompletionSourceNodeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERTASK__REGISTERPORTS_B__5_1_OFFSET))(this, f);
		}
	};
}
