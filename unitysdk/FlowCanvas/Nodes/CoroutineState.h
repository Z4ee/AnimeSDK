#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_COROUTINESTATE_DOREPEAT_OFFSET UNITYSDK_OFFSET(0x1E535BD0)
#define FLOWCANVAS_NODES_COROUTINESTATE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x1E535BC0)
#define FLOWCANVAS_NODES_COROUTINESTATE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1E535A50)
#define FLOWCANVAS_NODES_COROUTINESTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E535A80)
#define FLOWCANVAS_NODES_COROUTINESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E535C50)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E535C90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CoroutineState_TypeDefinitionIndex = 31420;

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
