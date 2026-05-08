#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class SignalDefinition; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_SIGNALCALLBACK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4180E0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_GET_SIGNALDEFINITION_OFFSET UNITYSDK_OFFSET(0x1B418020)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B418A60)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B4187E0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_ONINVOKED_OFFSET UNITYSDK_OFFSET(0x1B4190B0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B418450)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B418CE0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1B418370)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_SET_SIGNALDEFINITION_OFFSET UNITYSDK_OFFSET(0x1B418080)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B418430)
#define FLOWCANVAS_NODES_SIGNALCALLBACK_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B418440)
#define FLOWCANVAS_NODES_SIGNALCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4194A0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK__REGISTERPORTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1B4194F0)
#define FLOWCANVAS_NODES_SIGNALCALLBACK__REGISTERPORTS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1B419500)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SignalCallback_TypeDefinitionIndex = 26475;

	class SignalCallback : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::UnityEngine::Transform* receiver; // 0xC0
		::UnityEngine::Transform* sender; // 0xC8
		::FlowCanvas::FlowOutput* onReceived; // 0xD0
		::Il2CppArray<::System::Object*>* args; // 0xD8
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::Framework::SignalDefinition*>* _signalDefinition; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::SignalDefinition* get_signalDefinition()
		{
			return ((::NodeCanvas::Framework::SignalDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_GET_SIGNALDEFINITION_OFFSET))(this);
		}

		::System::Void set_signalDefinition(::NodeCanvas::Framework::SignalDefinition* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::SignalDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_SET_SIGNALDEFINITION_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_GET_NAME_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_SETTARGET_OFFSET))(this, target);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnInvoked(::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK_ONINVOKED_OFFSET))(this, sender, receiver, isGlobal, args);
		}

		::UnityEngine::Transform* _RegisterPorts_b__16_0()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK__REGISTERPORTS_B__16_0_OFFSET))(this);
		}

		::UnityEngine::Transform* _RegisterPorts_b__16_1()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIGNALCALLBACK__REGISTERPORTS_B__16_1_OFFSET))(this);
		}
	};
}
