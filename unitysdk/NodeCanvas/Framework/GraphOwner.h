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

#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONMONOBEHAVIOURSTART_OFFSET UNITYSDK_OFFSET(0x1D1E42D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ADD_ONOWNERBEHAVIOURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1D1E4170)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D1E56E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_BINDEXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D1E5DF0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GETFCSTATISTC_OFFSET UNITYSDK_OFFSET(0x1D1E43D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1E49F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1D1E4480)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D1E4460)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_BOUNDGRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x1D1E4440)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_DISABLEACTION_OFFSET UNITYSDK_OFFSET(0x1D1E4550)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1D1E4870)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLEACTION_OFFSET UNITYSDK_OFFSET(0x1D1E4530)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ENABLECALLED_OFFSET UNITYSDK_OFFSET(0x1D1E4400)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D1E3DE0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_FIRSTACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D1E4510)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_GRAPHISBOUND_OFFSET UNITYSDK_OFFSET(0x1D1E44C0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1E43E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1D1E4700)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1D1E4590)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1D1E44A0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_PREINITIALIZESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0x1D1E44F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_STARTCALLED_OFFSET UNITYSDK_OFFSET(0x1D1E4420)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D1E4570)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E56F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_INVOKESTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1D1E6080)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D1E60F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D1E60B0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D1E5FE0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_PAUSEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1D1E4EC0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONMONOBEHAVIOURSTART_OFFSET UNITYSDK_OFFSET(0x1D1E4350)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_REMOVE_ONOWNERBEHAVIOURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1D1E4220)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_RESTARTBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1D1E53A0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D1E5550)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1D1E53D0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1D1E4490)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D1E4470)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_BOUNDGRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x1D1E4450)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_DISABLEACTION_OFFSET UNITYSDK_OFFSET(0x1D1E4560)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLEACTION_OFFSET UNITYSDK_OFFSET(0x1D1E4540)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_ENABLECALLED_OFFSET UNITYSDK_OFFSET(0x1D1E4410)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D1E3DF0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_FIRSTACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D1E4520)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D1E43F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_LOCKBOUNDGRAPHPREFABOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1D1E44E0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_PREINITIALIZESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0x1D1E4500)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_STARTCALLED_OFFSET UNITYSDK_OFFSET(0x1D1E4430)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D1E4580)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_1_OFFSET UNITYSDK_OFFSET(0x1D1E4EB0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_2_OFFSET UNITYSDK_OFFSET(0x1D1E4C60)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STARTBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1D1E4C50)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_START_OFFSET UNITYSDK_OFFSET(0x1D1E6030)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_STOPBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1D1E5050)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E4000)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E3E00)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER_UPDATEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1D1E51F0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E66C0)
#define NODECANVAS_FRAMEWORK_GRAPHOWNER__INITIALIZE_B__97_0_OFFSET UNITYSDK_OFFSET(0x1D1E6880)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_TypeDefinitionIndex = 30869;

	class GraphOwner : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::NodeCanvas::Framework::GraphOwner*>** StaticGet_onOwnerBehaviourStateChange()
		{
			return (::System::Action_1<::NodeCanvas::Framework::GraphOwner*>**)Il2CppClass::FromTypeDefinitionIndex(GraphOwner_TypeDefinitionIndex)->GetStaticField(0x249E0);
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
