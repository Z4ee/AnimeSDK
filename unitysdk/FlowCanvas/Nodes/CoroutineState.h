#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_COROUTINESTATE_DOREPEAT_OFFSET UNITYSDK_OFFSET(0x1D1D9D60)
#define FLOWCANVAS_NODES_COROUTINESTATE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x1D1D9D50)
#define FLOWCANVAS_NODES_COROUTINESTATE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D1D9BE0)
#define FLOWCANVAS_NODES_COROUTINESTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D1D9C10)
#define FLOWCANVAS_NODES_COROUTINESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D9DE0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D1D9E20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CoroutineState_TypeDefinitionIndex = 30554;

	class CoroutineState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::System::Boolean active; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE_ISSERVERCARE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DoRepeat(::FlowCanvas::FlowOutput* fStart, ::FlowCanvas::FlowOutput* fUpdate, ::FlowCanvas::FlowOutput* fFinish, ::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowOutput*, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE_DOREPEAT_OFFSET))(this, fStart, fUpdate, fFinish, f);
		}

		::System::Void _DoRepeat_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_B__5_0_OFFSET))(this);
		}
	};
}
