#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_WHILE_DOWHILE_OFFSET UNITYSDK_OFFSET(0x1E8B9B60)
#define FLOWCANVAS_NODES_WHILE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E8B9A20)
#define FLOWCANVAS_NODES_WHILE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1E8B9A30)
#define FLOWCANVAS_NODES_WHILE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E8B9A60)
#define FLOWCANVAS_NODES_WHILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9BE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int While_TypeDefinitionIndex = 30292;

	class While : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DoWhile(::FlowCanvas::FlowOutput* fUpdate, ::FlowCanvas::FlowOutput* fFinish, ::FlowCanvas::Flow f, ::FlowCanvas::ValueInput_1<::System::Boolean>* condition)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowOutput*, ::FlowCanvas::Flow, ::FlowCanvas::ValueInput_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE_DOWHILE_OFFSET))(this, fUpdate, fFinish, f, condition);
		}
	};
}
