#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_LDWHILENEXT_DOWHILE_OFFSET UNITYSDK_OFFSET(0x1586CB90)
#define FLOWCANVAS_NODES_LDWHILENEXT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1586C970)
#define FLOWCANVAS_NODES_LDWHILENEXT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1586C9C0)
#define FLOWCANVAS_NODES_LDWHILENEXT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1586CA20)
#define FLOWCANVAS_NODES_LDWHILENEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1586CC80)
#define FLOWCANVAS_NODES_LDWHILENEXT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1586CCC0)
#define FLOWCANVAS_NODES_LDWHILENEXT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1586CCD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWhileNext_TypeDefinitionIndex = 77399;

	class LDWhileNext : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::FlowCanvas::FlowOutput* fUpdate; // 0xB0
		::FlowCanvas::FlowInput* fNext; // 0xB8
		::FlowCanvas::FlowOutput* fFinish; // 0xC0
		::System::Boolean suspend; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DoWhile(::FlowCanvas::FlowOutput* fUpdate, ::FlowCanvas::FlowOutput* fFinish, ::FlowCanvas::Flow f, ::FlowCanvas::ValueInput_1<::System::Boolean>* condition)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowOutput*, ::FlowCanvas::Flow, ::FlowCanvas::ValueInput_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT_DOWHILE_OFFSET))(this, fUpdate, fFinish, f, condition);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
