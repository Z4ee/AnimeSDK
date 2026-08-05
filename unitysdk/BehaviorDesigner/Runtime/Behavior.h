#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorMode.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorAsyncLoadItem; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class Behavior_BehaviorHandler; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskCoroutine; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Action; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class AutoResetEvent; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIOREND_OFFSET UNITYSDK_OFFSET(0x1F210DA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORPARAMBIND_OFFSET UNITYSDK_OFFSET(0x1F210AA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORRESTART_OFFSET UNITYSDK_OFFSET(0x1F210CA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORSTART_OFFSET UNITYSDK_OFFSET(0x1F210BA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ATTACHLOADINGFINISHCB_OFFSET UNITYSDK_OFFSET(0x1F210240)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORDESIGNER_RUNTIME_IBEHAVIOR_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1F2171B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CHECKFORSERIALIZATION_1_OFFSET UNITYSDK_OFFSET(0x1F212690)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CHECKFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1F2120C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CREATEBEHAVIORMANAGER_OFFSET UNITYSDK_OFFSET(0x1F211490)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DISABLEBEHAVIOR_1_OFFSET UNITYSDK_OFFSET(0x1F2119B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DISABLEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F211780)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DOMAINRESET_OFFSET UNITYSDK_OFFSET(0x1F216E20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ENABLEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F211240)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKSWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x1F2142A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKSWITHNAME_OFFSET UNITYSDK_OFFSET(0x1F214160)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x1F213FE0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKWITHNAME_OFFSET UNITYSDK_OFFSET(0x1F213F40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1F214440)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F212590)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETBEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1F210900)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1F215D80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1F210990)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETOWNERNAME_OFFSET UNITYSDK_OFFSET(0x1F2109D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETTOPPARENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F216FA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F212020)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ASYNCHRONOUSLOAD_OFFSET UNITYSDK_OFFSET(0x1F2100C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ASYNCLOADREQUEST_OFFSET UNITYSDK_OFFSET(0x1F210320)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F210880)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORMODE_OFFSET UNITYSDK_OFFSET(0x1F216F00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORNAME_OFFSET UNITYSDK_OFFSET(0x1F210800)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORPROXYGETTER_OFFSET UNITYSDK_OFFSET(0x1F210340)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXECUTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1F210A70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXTERNALBEHAVIORVERSION_OFFSET UNITYSDK_OFFSET(0x1F210420)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXTERNALBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F210440)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1F2103E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_HASEVENT_OFFSET UNITYSDK_OFFSET(0x1F210A90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_HASINHERITEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F2107E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ISASYNCLOADED_OFFSET UNITYSDK_OFFSET(0x1F2101C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ISRUNTIMEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F2100E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LASTASYNCLOADUSERDATA_OFFSET UNITYSDK_OFFSET(0x1F210100)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOADINGREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1F210120)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOADTHREADEVENT_OFFSET UNITYSDK_OFFSET(0x1F210360)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOGTASKCHANGES_OFFSET UNITYSDK_OFFSET(0x1F2103C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_PARENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F216F20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_PAUSEWHENDISABLED_OFFSET UNITYSDK_OFFSET(0x1F210380)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_RESETVALUESONRESTART_OFFSET UNITYSDK_OFFSET(0x1F210400)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_RESTARTWHENCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F2103A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_STARTWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1F2100A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x1F210220)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET__ASYNCLOADEDTAG_OFFSET UNITYSDK_OFFSET(0x1F210140)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_INITHASEVENT_OFFSET UNITYSDK_OFFSET(0x1F215610)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1F213D30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORENDED_OFFSET UNITYSDK_OFFSET(0x1F215910)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORPARAMBINDED_OFFSET UNITYSDK_OFFSET(0x1F2157F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORRESTARTED_OFFSET UNITYSDK_OFFSET(0x1F2158B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORSTARTED_OFFSET UNITYSDK_OFFSET(0x1F215850)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1F213290)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1F212A10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1F2134B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1F212C30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1F213B10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F211E00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F211DB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F211BD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONSUBBEHAVIORPARAMBINDED_OFFSET UNITYSDK_OFFSET(0x1F217130)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1F2136D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F212E50)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1F2138F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1F213070)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REGISTEREVENT_1_OFFSET UNITYSDK_OFFSET(0x1F215D20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1F215970)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIOREND_OFFSET UNITYSDK_OFFSET(0x1F210E20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORPARAMBIND_OFFSET UNITYSDK_OFFSET(0x1F210B20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORRESTART_OFFSET UNITYSDK_OFFSET(0x1F210D20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORSTART_OFFSET UNITYSDK_OFFSET(0x1F210C20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REPLACEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F212110)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_RESETVALUES_OFFSET UNITYSDK_OFFSET(0x1F2165A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1F216AD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVERESETVALUES_OFFSET UNITYSDK_OFFSET(0x1F216230)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVEVALUES_OFFSET UNITYSDK_OFFSET(0x1F2163E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVEVALUE_OFFSET UNITYSDK_OFFSET(0x1F216730)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1F215F10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETBEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1F210940)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETPARENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F216F40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETVARIABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1F2122D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F2121F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ASYNCHRONOUSLOAD_OFFSET UNITYSDK_OFFSET(0x1F2100D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ASYNCLOADREQUEST_OFFSET UNITYSDK_OFFSET(0x1F210330)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F2108A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORMODE_OFFSET UNITYSDK_OFFSET(0x1F216F10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORNAME_OFFSET UNITYSDK_OFFSET(0x1F210820)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORPROXYGETTER_OFFSET UNITYSDK_OFFSET(0x1F210350)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXECUTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1F210A80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXTERNALBEHAVIORVERSION_OFFSET UNITYSDK_OFFSET(0x1F210430)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXTERNALBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F210450)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1F2103F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_HASINHERITEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F2107F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ISRUNTIMEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F2100F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LASTASYNCLOADUSERDATA_OFFSET UNITYSDK_OFFSET(0x1F210110)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOADINGREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1F210130)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOADTHREADEVENT_OFFSET UNITYSDK_OFFSET(0x1F210370)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOGTASKCHANGES_OFFSET UNITYSDK_OFFSET(0x1F2103D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_PARENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1F216F30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_PAUSEWHENDISABLED_OFFSET UNITYSDK_OFFSET(0x1F210390)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_RESETVALUESONRESTART_OFFSET UNITYSDK_OFFSET(0x1F210410)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_RESTARTWHENCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F2103B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_STARTWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1F2100B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_TAGID_OFFSET UNITYSDK_OFFSET(0x1F210230)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET__ASYNCLOADEDTAG_OFFSET UNITYSDK_OFFSET(0x1F210150)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STARTTASKCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1F214B20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STARTTASKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F214620)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0x1F210FC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STOPALLTASKCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1F215230)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STOPTASKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F2150B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TASKCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F211000)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TASKCOROUTINEENDED_OFFSET UNITYSDK_OFFSET(0x1F215450)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F216DD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TRYSETLOADEDTAG_OFFSET UNITYSDK_OFFSET(0x1F210160)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_UNREGISTEREVENT_1_OFFSET UNITYSDK_OFFSET(0x1F2161D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1F215FD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F217190)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F210EA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIOR___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F217200)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int Behavior_TypeDefinitionIndex = 33848;

	class Behavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__behaviorManagerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Behavior_TypeDefinitionIndex)->GetStaticField(0x8200);
		}
		static ::System::Boolean* StaticGet_UseGenEvt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Behavior_TypeDefinitionIndex)->GetStaticField(0x8204);
		}
		::System::Boolean startWhenEnabled; // 0x18
		::System::Boolean asynchronousLoad; // 0x19
		::System::Boolean _IsRuntimeBehavior_k__BackingField; // 0x1A
		::System::Object* _LastAsyncLoadUserData_k__BackingField; // 0x20
		::System::Int32 _LoadingRefCount_k__BackingField; // 0x28
		::System::Boolean __asyncLoadedTag_k__BackingField; // 0x2C
		::System::Int32 _TagID_k__BackingField; // 0x30
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* _asyncLoadRequest_k__BackingField; // 0x38
		::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* _behaviorProxyGetter_k__BackingField; // 0x40
		::System::Threading::AutoResetEvent* loadThreadEvent; // 0x48
		::System::Boolean pauseWhenDisabled; // 0x50
		::System::Boolean restartWhenComplete; // 0x51
		::System::Boolean logTaskChanges; // 0x52
		::System::Int32 group; // 0x54
		::System::Boolean resetValuesOnRestart; // 0x58
		::BehaviorDesigner::Runtime::ExternalBehavior* _externalBehavior; // 0x60
		::System::Int32 _ExternalBehaviorVersion_k__BackingField; // 0x68
		::System::Boolean hasInheritedVariables; // 0x6C
		::BehaviorDesigner::Runtime::BehaviorSource* mBehaviorSource; // 0x70
		::System::Boolean isPaused; // 0x78
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x7C
		::System::Boolean initialized; // 0x80
		::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* defaultValues; // 0x88
		::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::SharedVariable*, ::System::Object*>* defaultVariableValues; // 0x90
		::Il2CppArray<::System::Boolean>* hasEvent; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskCoroutine*>*>* activeTaskCoroutines; // 0xA0
		::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* OnBehaviorParamBind; // 0xA8
		::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* OnBehaviorStart; // 0xB0
		::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* OnBehaviorRestart; // 0xB8
		::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* OnBehaviorEnd; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Delegate*>*>* eventTable; // 0xC8
		::BehaviorDesigner::Runtime::BehaviorMode _behaviorMode_k__BackingField; // 0xD0
		::BehaviorDesigner::Runtime::Behavior* _parentBehavior_k__BackingField; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Boolean get_StartWhenEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_STARTWHENENABLED_OFFSET))(this);
		}

		::System::Void set_StartWhenEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_STARTWHENENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_AsynchronousLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ASYNCHRONOUSLOAD_OFFSET))(this);
		}

		::System::Void set_AsynchronousLoad(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ASYNCHRONOUSLOAD_OFFSET))(this, value);
		}

		::System::Boolean get_IsRuntimeBehavior()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ISRUNTIMEBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_IsRuntimeBehavior(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ISRUNTIMEBEHAVIOR_OFFSET))(this, value);
		}

		::System::Object* get_LastAsyncLoadUserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LASTASYNCLOADUSERDATA_OFFSET))(this);
		}

		::System::Void set_LastAsyncLoadUserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LASTASYNCLOADUSERDATA_OFFSET))(this, value);
		}

		::System::Int32 get_LoadingRefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOADINGREFCOUNT_OFFSET))(this);
		}

		::System::Void set_LoadingRefCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOADINGREFCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get__asyncLoadedTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET__ASYNCLOADEDTAG_OFFSET))(this);
		}

		::System::Void set__asyncLoadedTag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET__ASYNCLOADEDTAG_OFFSET))(this, value);
		}

		::System::Void TrySetLoadedTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TRYSETLOADEDTAG_OFFSET))(this);
		}

		::System::Boolean get_IsAsyncLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ISASYNCLOADED_OFFSET))(this);
		}

		::System::Int32 get_TagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_TAGID_OFFSET))(this);
		}

		::System::Void set_TagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_TAGID_OFFSET))(this, value);
		}

		::System::Boolean AttachLoadingFinishCb(::System::Action* cb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ATTACHLOADINGFINISHCB_OFFSET))(this, cb);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* get_asyncLoadRequest()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_ASYNCLOADREQUEST_OFFSET))(this);
		}

		::System::Void set_asyncLoadRequest(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_ASYNCLOADREQUEST_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* get_behaviorProxyGetter()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORPROXYGETTER_OFFSET))(this);
		}

		::System::Void set_behaviorProxyGetter(::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORPROXYGETTER_OFFSET))(this, value);
		}

		::System::Threading::AutoResetEvent* get_LoadThreadEvent()
		{
			return ((::System::Threading::AutoResetEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOADTHREADEVENT_OFFSET))(this);
		}

		::System::Void set_LoadThreadEvent(::System::Threading::AutoResetEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::AutoResetEvent*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOADTHREADEVENT_OFFSET))(this, value);
		}

		::System::Boolean get_PauseWhenDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_PAUSEWHENDISABLED_OFFSET))(this);
		}

		::System::Void set_PauseWhenDisabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_PAUSEWHENDISABLED_OFFSET))(this, value);
		}

		::System::Boolean get_RestartWhenComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_RESTARTWHENCOMPLETE_OFFSET))(this);
		}

		::System::Void set_RestartWhenComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_RESTARTWHENCOMPLETE_OFFSET))(this, value);
		}

		::System::Boolean get_LogTaskChanges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_LOGTASKCHANGES_OFFSET))(this);
		}

		::System::Void set_LogTaskChanges(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_LOGTASKCHANGES_OFFSET))(this, value);
		}

		::System::Int32 get_Group()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_GROUP_OFFSET))(this, value);
		}

		::System::Boolean get_ResetValuesOnRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_RESETVALUESONRESTART_OFFSET))(this);
		}

		::System::Void set_ResetValuesOnRestart(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_RESETVALUESONRESTART_OFFSET))(this, value);
		}

		::System::Int32 get_ExternalBehaviorVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXTERNALBEHAVIORVERSION_OFFSET))(this);
		}

		::System::Void set_ExternalBehaviorVersion(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXTERNALBEHAVIORVERSION_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::ExternalBehavior* get_ExternalBehavior()
		{
			return ((::BehaviorDesigner::Runtime::ExternalBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXTERNALBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_ExternalBehavior(::BehaviorDesigner::Runtime::ExternalBehavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXTERNALBEHAVIOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasInheritedVariables()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_HASINHERITEDVARIABLES_OFFSET))(this);
		}

		::System::Void set_HasInheritedVariables(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_HASINHERITEDVARIABLES_OFFSET))(this, value);
		}

		::System::String* get_BehaviorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORNAME_OFFSET))(this);
		}

		::System::Void set_BehaviorName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORNAME_OFFSET))(this, value);
		}

		::System::String* get_BehaviorDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_BehaviorDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORDESCRIPTION_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorSource* GetBehaviorSource()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETBEHAVIORSOURCE_OFFSET))(this);
		}

		::System::Void SetBehaviorSource(::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETBEHAVIORSOURCE_OFFSET))(this, behaviorSource);
		}

		::UnityEngine::Object* GetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETOBJECT_OFFSET))(this);
		}

		::System::String* GetOwnerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETOWNERNAME_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus get_ExecutionStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_EXECUTIONSTATUS_OFFSET))(this);
		}

		::System::Void set_ExecutionStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_EXECUTIONSTATUS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Boolean>* get_HasEvent()
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_HASEVENT_OFFSET))(this);
		}

		::System::Void add_OnBehaviorParamBind(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORPARAMBIND_OFFSET))(this, value);
		}

		::System::Void remove_OnBehaviorParamBind(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORPARAMBIND_OFFSET))(this, value);
		}

		::System::Void add_OnBehaviorStart(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORSTART_OFFSET))(this, value);
		}

		::System::Void remove_OnBehaviorStart(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORSTART_OFFSET))(this, value);
		}

		::System::Void add_OnBehaviorRestart(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIORRESTART_OFFSET))(this, value);
		}

		::System::Void remove_OnBehaviorRestart(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIORRESTART_OFFSET))(this, value);
		}

		::System::Void add_OnBehaviorEnd(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ADD_ONBEHAVIOREND_OFFSET))(this, value);
		}

		::System::Void remove_OnBehaviorEnd(::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_BehaviorHandler*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REMOVE_ONBEHAVIOREND_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_START_OFFSET))(this);
		}

		::System::Boolean TaskContainsMethod(::System::String* methodName, ::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TASKCONTAINSMETHOD_OFFSET))(this, methodName, task);
		}

		::System::Void EnableBehavior(::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ENABLEBEHAVIOR_OFFSET))(this, finished);
		}

		::System::Void DisableBehavior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DISABLEBEHAVIOR_OFFSET))(this);
		}

		::System::Void DisableBehavior_1(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DISABLEBEHAVIOR_1_OFFSET))(this, pause);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::SharedVariable* GetVariable(::System::String* name)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETVARIABLE_OFFSET))(this, name);
		}

		::System::Void ReplaceVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REPLACEVARIABLE_OFFSET))(this, name, item);
		}

		::System::Void SetVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETVARIABLE_OFFSET))(this, name, item);
		}

		::System::Void SetVariableValue(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETVARIABLEVALUE_OFFSET))(this, name, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* GetAllVariables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETALLVARIABLES_OFFSET))(this);
		}

		::System::Void CheckForSerialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CHECKFORSERIALIZATION_OFFSET))(this);
		}

		::System::Void CheckForSerialization_1(::System::Boolean forceSerialization)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CHECKFORSERIALIZATION_1_OFFSET))(this, forceSerialization);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONEXIT_OFFSET))(this, collision);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONENTER2D_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCOLLISIONEXIT2D_OFFSET))(this, collision);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* hit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, hit);
		}

		::System::Void OnAnimatorIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONANIMATORIK_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* FindTaskWithName(::System::String* taskName)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKWITHNAME_OFFSET))(this, taskName);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* FindTaskWithName_1(::System::String* taskName, ::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKWITHNAME_1_OFFSET))(this, taskName, task);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* FindTasksWithName(::System::String* taskName)
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKSWITHNAME_OFFSET))(this, taskName);
		}

		::System::Void FindTasksWithName_1(::System::String* taskName, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& taskList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_FINDTASKSWITHNAME_1_OFFSET))(this, taskName, task, taskList);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* GetActiveTasks()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETACTIVETASKS_OFFSET))(this);
		}

		::UnityEngine::Coroutine* StartTaskCoroutine(::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::String* methodName)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STARTTASKCOROUTINE_OFFSET))(this, task, methodName);
		}

		::UnityEngine::Coroutine* StartTaskCoroutine_1(::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STARTTASKCOROUTINE_1_OFFSET))(this, task, methodName, value);
		}

		::System::Void StopTaskCoroutine(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STOPTASKCOROUTINE_OFFSET))(this, methodName);
		}

		::System::Void StopAllTaskCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_STOPALLTASKCOROUTINES_OFFSET))(this);
		}

		::System::Void TaskCoroutineEnded(::BehaviorDesigner::Runtime::TaskCoroutine* taskCoroutine, ::System::String* coroutineName)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::TaskCoroutine*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TASKCOROUTINEENDED_OFFSET))(this, taskCoroutine, coroutineName);
		}

		::System::Void InitHasEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_INITHASEVENT_OFFSET))(this);
		}

		::System::Void OnBehaviorParamBinded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORPARAMBINDED_OFFSET))(this);
		}

		::System::Void OnBehaviorStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORSTARTED_OFFSET))(this);
		}

		::System::Void OnBehaviorRestarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORRESTARTED_OFFSET))(this);
		}

		::System::Void OnBehaviorEnded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONBEHAVIORENDED_OFFSET))(this);
		}

		::System::Void RegisterEvent(::System::String* name, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Delegate*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REGISTEREVENT_OFFSET))(this, name, handler);
		}

		::System::Void RegisterEvent_1(::System::String* name, ::System::Action* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_REGISTEREVENT_1_OFFSET))(this, name, handler);
		}

		::System::Delegate* GetDelegate(::System::String* name, ::System::Type* type)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETDELEGATE_OFFSET))(this, name, type);
		}

		::System::Void SendEvent(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SENDEVENT_OFFSET))(this, name);
		}

		::System::Void UnregisterEvent(::System::String* name, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Delegate*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_UNREGISTEREVENT_OFFSET))(this, name, handler);
		}

		::System::Void UnregisterEvent_1(::System::String* name, ::System::Action* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_UNREGISTEREVENT_1_OFFSET))(this, name, handler);
		}

		::System::Void SaveResetValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVERESETVALUES_OFFSET))(this);
		}

		::System::Void SaveValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVEVALUES_OFFSET))(this);
		}

		::System::Void SaveValue(::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SAVEVALUE_OFFSET))(this, task);
		}

		::System::Void ResetValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_RESETVALUES_OFFSET))(this);
		}

		::System::Void ResetValue(::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_RESETVALUE_OFFSET))(this, task);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_TOSTRING_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::BehaviorManager* CreateBehaviorManager()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_CREATEBEHAVIORMANAGER_OFFSET))();
		}

		static ::System::Void DomainReset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_DOMAINRESET_OFFSET))();
		}

		::BehaviorDesigner::Runtime::BehaviorMode get_behaviorMode()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_BEHAVIORMODE_OFFSET))(this);
		}

		::System::Void set_behaviorMode(::BehaviorDesigner::Runtime::BehaviorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorMode))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_BEHAVIORMODE_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Behavior* get_parentBehavior()
		{
			return ((::BehaviorDesigner::Runtime::Behavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GET_PARENTBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_parentBehavior(::BehaviorDesigner::Runtime::Behavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SET_PARENTBEHAVIOR_OFFSET))(this, value);
		}

		::System::Void SetParentBehavior(::BehaviorDesigner::Runtime::Behavior* parentBehavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_SETPARENTBEHAVIOR_OFFSET))(this, parentBehavior);
		}

		::BehaviorDesigner::Runtime::Behavior* GetTopParentBehavior()
		{
			return ((::BehaviorDesigner::Runtime::Behavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_GETTOPPARENTBEHAVIOR_OFFSET))(this);
		}

		::System::Void OnSubBehaviorParamBinded(::BehaviorDesigner::Runtime::Behavior* inBehavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_ONSUBBEHAVIORPARAMBINDED_OFFSET))(this, inBehavior);
		}

		::System::Int32 BehaviorDesigner_Runtime_IBehavior_GetInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR_BEHAVIORDESIGNER_RUNTIME_IBEHAVIOR_GETINSTANCEID_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIOR___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
