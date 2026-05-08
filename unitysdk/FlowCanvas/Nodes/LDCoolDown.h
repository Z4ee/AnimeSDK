#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_LDCOOLDOWN_BEGIN_OFFSET UNITYSDK_OFFSET(0x13636690)
#define FLOWCANVAS_NODES_LDCOOLDOWN_CANCEL_OFFSET UNITYSDK_OFFSET(0x136368B0)
#define FLOWCANVAS_NODES_LDCOOLDOWN_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x13636800)
#define FLOWCANVAS_NODES_LDCOOLDOWN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x136362C0)
#define FLOWCANVAS_NODES_LDCOOLDOWN_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x136363B0)
#define FLOWCANVAS_NODES_LDCOOLDOWN_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13636400)
#define FLOWCANVAS_NODES_LDCOOLDOWN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13636460)
#define FLOWCANVAS_NODES_LDCOOLDOWN_RESTART_OFFSET UNITYSDK_OFFSET(0x13636930)
#define FLOWCANVAS_NODES_LDCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x13636AB0)
#define FLOWCANVAS_NODES_LDCOOLDOWN__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x13636AF0)
#define FLOWCANVAS_NODES_LDCOOLDOWN__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x13636B00)
#define FLOWCANVAS_NODES_LDCOOLDOWN___BASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13636B20)
#define FLOWCANVAS_NODES_LDCOOLDOWN___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x13636B30)
#define FLOWCANVAS_NODES_LDCOOLDOWN___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13636B40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoolDown_TypeDefinitionIndex = 55378;

	class LDCoolDown : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* finish; // 0xA8
		::FlowCanvas::FlowOutput* start; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* time; // 0xB8
		::FlowCanvas::FlowOutput* update; // 0xC0
		::UnityEngine::Coroutine* coroutine; // 0xC8
		::System::Single remainingNormalized; // 0xD0
		::System::Single remaining; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_BEGIN_OFFSET))(this, f);
		}

		::System::Void Cancel(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_CANCEL_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_RESTART_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* CountDown(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN_COUNTDOWN_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__11_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN__REGISTERPORTS_B__11_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__11_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::String* __base_get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN___BASE_GET_NAME_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDCOOLDOWN___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
