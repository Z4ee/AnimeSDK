#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_COOLDOWN_BEGIN_OFFSET UNITYSDK_OFFSET(0x1BC41170)
#define FLOWCANVAS_NODES_COOLDOWN_CANCEL_OFFSET UNITYSDK_OFFSET(0x1BC41280)
#define FLOWCANVAS_NODES_COOLDOWN_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BC41220)
#define FLOWCANVAS_NODES_COOLDOWN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BC40E80)
#define FLOWCANVAS_NODES_COOLDOWN_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1BC40F30)
#define FLOWCANVAS_NODES_COOLDOWN_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1BC40F50)
#define FLOWCANVAS_NODES_COOLDOWN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BC40F90)
#define FLOWCANVAS_NODES_COOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC412C0)
#define FLOWCANVAS_NODES_COOLDOWN__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1BC41300)
#define FLOWCANVAS_NODES_COOLDOWN__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1BC41310)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Cooldown_TypeDefinitionIndex = 30034;

	class Cooldown : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* finish; // 0xA8
		::UnityEngine::Coroutine* coroutine; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* time; // 0xB8
		::FlowCanvas::FlowOutput* update; // 0xC0
		::FlowCanvas::FlowOutput* start; // 0xC8
		::System::Single remainingNormalized; // 0xD0
		::System::Single remaining; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_BEGIN_OFFSET))(this, f);
		}

		::System::Void Cancel(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_CANCEL_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* CountDown(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN_COUNTDOWN_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__11_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__REGISTERPORTS_B__11_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__11_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__REGISTERPORTS_B__11_1_OFFSET))(this);
		}
	};
}
