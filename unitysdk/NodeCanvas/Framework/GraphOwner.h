#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_DisableAction.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_EnableAction.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_FirstActivation.h"
#include "unitysdk/NodeCanvas/Framework/Graph_UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NodeCanvas::Framework { class ExposedParameter; }
namespace NodeCanvas::Framework { class FCStatistic; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework::Internal { class GraphSource; }
namespace ParadoxNotion::Serialization { class SerializationPair; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONMONOBEHAVIOURSTART_OFFSET UNITYSDK_OFFSET(0x1ADB79B0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONOWNERBEHAVIOURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1ADB7850)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ADB8DC0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_BINDEXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ADB94F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GETFCSTATISTC_OFFSET UNITYSDK_OFFSET(0x1ADB7AB0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ADB80D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1ADB7B60)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1ADB7B40)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x1ADB7B20)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_DISABLEACTION_OFFSET UNITYSDK_OFFSET(0x1ADB7C30)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1ADB7F50)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLEACTION_OFFSET UNITYSDK_OFFSET(0x1ADB7C10)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLECALLED_OFFSET UNITYSDK_OFFSET(0x1ADB7AE0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ADB74C0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_FIRSTACTIVATION_OFFSET UNITYSDK_OFFSET(0x1ADB7BF0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_GRAPHISBOUND_OFFSET UNITYSDK_OFFSET(0x1ADB7BA0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1ADB7AC0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1ADB7DE0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1ADB7C70)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1ADB7B80)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_PREINITIALIZESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0x1ADB7BD0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_STARTCALLED_OFFSET UNITYSDK_OFFSET(0x1ADB7B00)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1ADB7C50)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB8DD0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_INVOKESTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1ADB9780)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ADB97F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ADB97B0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ADB96E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_PAUSEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ADB85A0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONMONOBEHAVIOURSTART_OFFSET UNITYSDK_OFFSET(0x1ADB7A30)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONOWNERBEHAVIOURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1ADB7900)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_RESTARTBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ADB8A80)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_1_OFFSET UNITYSDK_OFFSET(0x1ADB8C30)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1ADB8AB0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1ADB7B70)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1ADB7B50)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x1ADB7B30)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_DISABLEACTION_OFFSET UNITYSDK_OFFSET(0x1ADB7C40)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLEACTION_OFFSET UNITYSDK_OFFSET(0x1ADB7C20)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLECALLED_OFFSET UNITYSDK_OFFSET(0x1ADB7AF0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ADB74D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_FIRSTACTIVATION_OFFSET UNITYSDK_OFFSET(0x1ADB7C00)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1ADB7AD0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1ADB7BC0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_PREINITIALIZESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0x1ADB7BE0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_STARTCALLED_OFFSET UNITYSDK_OFFSET(0x1ADB7B10)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1ADB7C60)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_1_OFFSET UNITYSDK_OFFSET(0x1ADB8590)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_2_OFFSET UNITYSDK_OFFSET(0x1ADB8340)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ADB8330)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_START_OFFSET UNITYSDK_OFFSET(0x1ADB9730)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STOPBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ADB8730)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB76E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB74E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UPDATEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ADB88D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB9DC0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER__INITIALIZE_B__97_0_OFFSET UNITYSDK_OFFSET(0x1ADB9F80)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_TypeDefinitionIndex = 27871;

	class GraphOwner : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::NodeCanvas::Framework::GraphOwner*>** StaticGet_onOwnerBehaviourStateChange()
		{
			return (::System::Action_1<::NodeCanvas::Framework::GraphOwner*>**)Il2CppClass::FromTypeDefinitionIndex(GraphOwner_TypeDefinitionIndex)->GetStaticField(0x20CA0);
		}
		::Il2CppArray<::ParadoxNotion::Serialization::SerializationPair*>* _serializedExposedParameters; // 0x18
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::ExposedParameter*>* _exposedParameters_k__BackingField; // 0x20
		::System::Action* onMonoBehaviourStart; // 0x28
		::System::String* _boundGraphSerialization; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _boundGraphObjectReferences; // 0x38
		::NodeCanvas::Framework::Internal::GraphSource* _boundGraphSource; // 0x40
		::NodeCanvas::Framework::GraphOwner_FirstActivation _firstActivation; // 0x48
		::NodeCanvas::Framework::GraphOwner_EnableAction _enableAction; // 0x4C
		::NodeCanvas::Framework::GraphOwner_DisableAction _disableAction; // 0x50
		::System::Boolean _lockBoundGraphPrefabOverrides; // 0x54
		::System::Boolean _preInitializeSubGraphs; // 0x55
		::NodeCanvas::Framework::Graph_UpdateMode _updateMode; // 0x58
		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* instances; // 0x60
		::NodeCanvas::Framework::FCStatistic* _fcStatistic; // 0x68
		::System::Boolean _initialized_k__BackingField; // 0x70
		::System::Boolean _enableCalled_k__BackingField; // 0x71
		::System::Boolean _startCalled_k__BackingField; // 0x72

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::ExposedParameter*>* get_exposedParameters()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::ExposedParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_EXPOSEDPARAMETERS_OFFSET))(this);
		}

		::System::Void set_exposedParameters(::System::Collections::Generic::List_1<::NodeCanvas::Framework::ExposedParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::ExposedParameter*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_EXPOSEDPARAMETERS_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::System::Void add_onOwnerBehaviourStateChange(::System::Action_1<::NodeCanvas::Framework::GraphOwner*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::GraphOwner*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONOWNERBEHAVIOURSTATECHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onOwnerBehaviourStateChange(::System::Action_1<::NodeCanvas::Framework::GraphOwner*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::GraphOwner*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONOWNERBEHAVIOURSTATECHANGE_OFFSET))(value);
		}

		::System::Void add_onMonoBehaviourStart(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONMONOBEHAVIOURSTART_OFFSET))(this, value);
		}

		::System::Void remove_onMonoBehaviourStart(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONMONOBEHAVIOURSTART_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::FCStatistic* GetFCStatistc()
		{
			return ((::NodeCanvas::Framework::FCStatistic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GETFCSTATISTC_OFFSET))(this);
		}

		::System::Boolean get_initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Void set_initialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_INITIALIZED_OFFSET))(this, value);
		}

		::System::Boolean get_enableCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLECALLED_OFFSET))(this);
		}

		::System::Void set_enableCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLECALLED_OFFSET))(this, value);
		}

		::System::Boolean get_startCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_STARTCALLED_OFFSET))(this);
		}

		::System::Void set_startCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_STARTCALLED_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Internal::GraphSource* get_boundGraphSource()
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSOURCE_OFFSET))(this);
		}

		::System::Void set_boundGraphSource(::NodeCanvas::Framework::Internal::GraphSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSOURCE_OFFSET))(this, value);
		}

		::System::String* get_boundGraphSerialization()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSERIALIZATION_OFFSET))(this);
		}

		::System::Void set_boundGraphSerialization(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSERIALIZATION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Object*>* get_boundGraphObjectReferences()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHOBJECTREFERENCES_OFFSET))(this);
		}

		::System::Void set_boundGraphObjectReferences(::System::Collections::Generic::List_1<::UnityEngine::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHOBJECTREFERENCES_OFFSET))(this, value);
		}

		::System::Boolean get_lockBoundGraphPrefabOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET))(this);
		}

		::System::Void set_lockBoundGraphPrefabOverrides(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET))(this, value);
		}

		::System::Boolean get_preInitializeSubGraphs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_PREINITIALIZESUBGRAPHS_OFFSET))(this);
		}

		::System::Void set_preInitializeSubGraphs(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_PREINITIALIZESUBGRAPHS_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::GraphOwner_FirstActivation get_firstActivation()
		{
			return ((::NodeCanvas::Framework::GraphOwner_FirstActivation(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_FIRSTACTIVATION_OFFSET))(this);
		}

		::System::Void set_firstActivation(::NodeCanvas::Framework::GraphOwner_FirstActivation value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner_FirstActivation))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_FIRSTACTIVATION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::GraphOwner_EnableAction get_enableAction()
		{
			return ((::NodeCanvas::Framework::GraphOwner_EnableAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLEACTION_OFFSET))(this);
		}

		::System::Void set_enableAction(::NodeCanvas::Framework::GraphOwner_EnableAction value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner_EnableAction))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLEACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::GraphOwner_DisableAction get_disableAction()
		{
			return ((::NodeCanvas::Framework::GraphOwner_DisableAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_DISABLEACTION_OFFSET))(this);
		}

		::System::Void set_disableAction(::NodeCanvas::Framework::GraphOwner_DisableAction value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner_DisableAction))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_DISABLEACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph_UpdateMode get_updateMode()
		{
			return ((::NodeCanvas::Framework::Graph_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::NodeCanvas::Framework::Graph_UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph_UpdateMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_graphIsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_GRAPHISBOUND_OFFSET))(this);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Single get_elapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ELAPSEDTIME_OFFSET))(this);
		}

		::NodeCanvas::Framework::Graph* GetInstance(::NodeCanvas::Framework::Graph* originalGraph)
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_GETINSTANCE_OFFSET))(this, originalGraph);
		}

		::System::Void StartBehaviour()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_OFFSET))(this);
		}

		::System::Void StartBehaviour_1(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_1_OFFSET))(this, callback);
		}

		::System::Void StartBehaviour_2(::NodeCanvas::Framework::Graph_UpdateMode updateMode, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph_UpdateMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_2_OFFSET))(this, updateMode, callback);
		}

		::System::Void PauseBehaviour()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_PAUSEBEHAVIOUR_OFFSET))(this);
		}

		::System::Void StopBehaviour(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_STOPBEHAVIOUR_OFFSET))(this, success);
		}

		::System::Void UpdateBehaviour()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_UPDATEBEHAVIOUR_OFFSET))(this);
		}

		::System::Void RestartBehaviour()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_RESTARTBEHAVIOUR_OFFSET))(this);
		}

		::System::Void SendEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_OFFSET))(this, eventName);
		}

		::System::Void SendEvent_1(::System::String* eventName, ::System::Object* value, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_1_OFFSET))(this, eventName, value, sender);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_INITIALIZE_OFFSET))(this);
		}

		::System::Void BindExposedParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_BINDEXPOSEDPARAMETERS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_START_OFFSET))(this);
		}

		::System::Void InvokeStartEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_INVOKESTARTEVENT_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Initialize_b__97_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHOWNER__INITIALIZE_B__97_0_OFFSET))(this);
		}
	};
}
