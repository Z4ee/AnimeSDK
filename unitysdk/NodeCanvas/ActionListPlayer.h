#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NodeCanvas::Framework { class ActionList; }
namespace NodeCanvas::Framework { class Blackboard; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define NODECANVAS_ACTIONLISTPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D537720)
#define NODECANVAS_ACTIONLISTPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D537670)
#define NODECANVAS_ACTIONLISTPLAYER_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1D5378E0)
#define NODECANVAS_ACTIONLISTPLAYER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D5378B0)
#define NODECANVAS_ACTIONLISTPLAYER_GET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D537430)
#define NODECANVAS_ACTIONLISTPLAYER_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1D537480)
#define NODECANVAS_ACTIONLISTPLAYER_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1D537440)
#define NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x1D537470)
#define NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_CONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D537460)
#define NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1D5377E0)
#define NODECANVAS_ACTIONLISTPLAYER_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1D537850)
#define NODECANVAS_ACTIONLISTPLAYER_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1D5377F0)
#define NODECANVAS_ACTIONLISTPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D537780)
#define NODECANVAS_ACTIONLISTPLAYER_SET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1D537490)
#define NODECANVAS_ACTIONLISTPLAYER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D537100)
#define NODECANVAS_ACTIONLISTPLAYER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D536F70)
#define NODECANVAS_ACTIONLISTPLAYER_UPDATETASKSOWNER_OFFSET UNITYSDK_OFFSET(0x1D537540)
#define NODECANVAS_ACTIONLISTPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D537910)

namespace NodeCanvas
{
	inline static constexpr unsigned int ActionListPlayer_TypeDefinitionIndex = 30228;

	class ActionListPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean playOnAwake; // 0x18
		::System::String* _serializedList; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _objectReferences; // 0x28
		::NodeCanvas::Framework::Blackboard* _blackboard; // 0x30
		::NodeCanvas::Framework::ActionList* _actionList; // 0x38
		::System::Single timeStarted; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::NodeCanvas::Framework::ActionList* get_actionList()
		{
			return ((::NodeCanvas::Framework::ActionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_GET_ACTIONLIST_OFFSET))(this);
		}

		::System::Single get_elapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_GET_ELAPSEDTIME_OFFSET))(this);
		}

		::UnityEngine::Object* NodeCanvas_Framework_ITaskSystem_get_contextObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_CONTEXTOBJECT_OFFSET))(this);
		}

		::UnityEngine::Component* NodeCanvas_Framework_ITaskSystem_get_agent()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_AGENT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* get_blackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_GET_BLACKBOARD_OFFSET))(this);
		}

		::System::Void set_blackboard(::NodeCanvas::Framework::IBlackboard* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_SET_BLACKBOARD_OFFSET))(this, value);
		}

		static ::NodeCanvas::ActionListPlayer* Create()
		{
			return ((::NodeCanvas::ActionListPlayer*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_CREATE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateTasksOwner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_UPDATETASKSOWNER_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_ITaskSystem_SendEvent(::System::String* name, ::System::Object* value, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_NODECANVAS_FRAMEWORK_ITASKSYSTEM_SENDEVENT_OFFSET))(this, name, value, sender);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Play_1(::System::Action_1<::NodeCanvas::Framework::Status>* OnFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_PLAY_1_OFFSET))(this, OnFinish);
		}

		::System::Void Play_2(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard, ::System::Action_1<::NodeCanvas::Framework::Status>* OnFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Action_1<::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_PLAY_2_OFFSET))(this, agent, blackboard, OnFinish);
		}

		::NodeCanvas::Framework::Status Execute()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_EXECUTE_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status Execute_1(::UnityEngine::Component* agent)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_ACTIONLISTPLAYER_EXECUTE_1_OFFSET))(this, agent);
		}
	};
}
