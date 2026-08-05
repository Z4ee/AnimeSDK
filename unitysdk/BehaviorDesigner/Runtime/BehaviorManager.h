#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_ExecutionsPerTickType.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_ThirdPartyObjectType.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/UpdateIntervalType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorAsyncLoadItem; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorAsyncLoadManager; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_TaskAddData; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_ThirdPartyTask; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace BehaviorDesigner::Runtime::Tasks { class SubTreeBehaviorReference; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Reflection { class MethodInfo; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForSeconds; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ADDTOTASKLIST_OFFSET UNITYSDK_OFFSET(0x1E45A410)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ATTACHLOADINGFINISHCB_OFFSET UNITYSDK_OFFSET(0x1E454CD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E457F00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1E465C10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1E464F90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1E4645A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1E465210)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E464820)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1E465990)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1E465490)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1E464AA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1E465710)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1E464D10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_COROUTINEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E460570)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYBEHAVIOR_1_OFFSET UNITYSDK_OFFSET(0x1E45E870)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E45ECA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYMANAGER_OFFSET UNITYSDK_OFFSET(0x1E466290)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_1_OFFSET UNITYSDK_OFFSET(0x1E45E4E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_2_OFFSET UNITYSDK_OFFSET(0x1E45E550)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E458330)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DOMAINRESET_OFFSET UNITYSDK_OFFSET(0x1E466210)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ENABLEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E458770)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FINDLCA_OFFSET UNITYSDK_OFFSET(0x1E462C80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDTICK_1_OFFSET UNITYSDK_OFFSET(0x1E461030)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDTICK_OFFSET UNITYSDK_OFFSET(0x1E4603C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E4602C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GETACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1E4641B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_BEHAVIORTREES_OFFSET UNITYSDK_OFFSET(0x1E456DF0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_CONDITIONALPARENTINDEXESTLS_OFFSET UNITYSDK_OFFSET(0x1E456E00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_DEBUG_BEHAVIORASYNCLOADMANAGER_OFFSET UNITYSDK_OFFSET(0x1E4562E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_DIALOGUESYSTEMSTOPMETHOD_OFFSET UNITYSDK_OFFSET(0x1E457AC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_EXECUTIONSPERTICK_OFFSET UNITYSDK_OFFSET(0x1E456CF0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1E456D30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_MAXTASKEXECUTIONSPERTICK_OFFSET UNITYSDK_OFFSET(0x1E456D10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_PLAYMAKERSTOPMETHOD_OFFSET UNITYSDK_OFFSET(0x1E456F90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_REALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1E456990)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_UPDATEINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x1E456C80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1E456B30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_USCRIPTSTOPMETHOD_OFFSET UNITYSDK_OFFSET(0x1E4578A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_USEQUENCERSTOPMETHOD_OFFSET UNITYSDK_OFFSET(0x1E457CE0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_INTERRUPT_1_OFFSET UNITYSDK_OFFSET(0x1E463D70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E462FD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISBEHAVIORENABLED_OFFSET UNITYSDK_OFFSET(0x1E458BB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISCHILD_OFFSET UNITYSDK_OFFSET(0x1E462E80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1E462F30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E460050)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LOADBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E455CC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LOADBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E459390)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_MAPOBJECTTOTASK_OFFSET UNITYSDK_OFFSET(0x1E465E70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1E458580)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E458000)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONMGRLATETICK_OFFSET UNITYSDK_OFFSET(0x1E4604F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_OVERRIDEFIELDS_OFFSET UNITYSDK_OFFSET(0x1E45CA40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_OVERRIDESHAREDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E45DB10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_POPTASK_1_OFFSET UNITYSDK_OFFSET(0x1E45ED00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_POPTASK_OFFSET UNITYSDK_OFFSET(0x1E4621B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_PUSHTASK_OFFSET UNITYSDK_OFFSET(0x1E45C7D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATECONDITIONALTASKSMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1E462C30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATECONDITIONALTASKS_OFFSET UNITYSDK_OFFSET(0x1E4614C0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATEPARENTTASKS_OFFSET UNITYSDK_OFFSET(0x1E461250)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVEACTIVETHIRDPARTYTASK_OFFSET UNITYSDK_OFFSET(0x1E464020)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVECHILDCONDITIONALREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1E45F9E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVESTACK_OFFSET UNITYSDK_OFFSET(0x1E463680)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RESTARTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E45FC00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RESTART_OFFSET UNITYSDK_OFFSET(0x1E45FDD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ROUNDEDTIME_OFFSET UNITYSDK_OFFSET(0x1E4634D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RUNPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1E463040)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RUNTASK_OFFSET UNITYSDK_OFFSET(0x1E462250)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_EXECUTIONSPERTICK_OFFSET UNITYSDK_OFFSET(0x1E456D00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1E456D90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_MAXTASKEXECUTIONSPERTICK_OFFSET UNITYSDK_OFFSET(0x1E456D20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_UPDATEINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x1E456C90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1E456B40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_STOPTHIRDPARTYTASK_OFFSET UNITYSDK_OFFSET(0x1E4638F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKFOROBJECT_OFFSET UNITYSDK_OFFSET(0x1E466110)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_1_OFFSET UNITYSDK_OFFSET(0x1E460E20)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_2_OFFSET UNITYSDK_OFFSET(0x1E4605F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1E45FFA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYGETBEHAVIORINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E458650)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYGETBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x1E4643B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYLOADBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E454DC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYPUSHLOADSUBTREEREQUEST_OFFSET UNITYSDK_OFFSET(0x1E4558B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_UPDATEINTERVALCHANGED_OFFSET UNITYSDK_OFFSET(0x1E456B90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E45FF50)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__BEFORELOADHANDLE_OFFSET UNITYSDK_OFFSET(0x1E4562F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4668A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4665D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__FILLREFUNITYOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x1E455570)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__GREEN_OFFSET UNITYSDK_OFFSET(0x1E45A2B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__ISBEHAVIORLOADVERSIONEQUAL_OFFSET UNITYSDK_OFFSET(0x1E455390)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__ISINTERRUPTIONINCURSTACK_OFFSET UNITYSDK_OFFSET(0x1E4611E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LATETICKASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1E456280)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOADFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E455B40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOGERR_OFFSET UNITYSDK_OFFSET(0x1E45A330)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E45A380)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOG_LOAD_OFFSET UNITYSDK_OFFSET(0x1E45A220)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__RED_OFFSET UNITYSDK_OFFSET(0x1E45A270)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__TRYSTARTBEHAVIORLOADTICK_OFFSET UNITYSDK_OFFSET(0x1E455530)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__YELLOW_OFFSET UNITYSDK_OFFSET(0x1E45A2F0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_TypeDefinitionIndex = 33853;

	class BehaviorManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__sharedCacheBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28C80);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_invokeParameters()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28C88);
		}
		static ::BehaviorDesigner::Runtime::BehaviorManager** StaticGet_instance()
		{
			return (::BehaviorDesigner::Runtime::BehaviorManager**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28C90);
		}
		static ::System::Reflection::MethodInfo** StaticGet_uScriptStopMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28C98);
		}
		static ::System::Reflection::MethodInfo** StaticGet_dialogueSystemStopMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28CA0);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__realtimeSW()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28CA8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_playMakerStopMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28CB0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_uSequencerStopMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x28CB8);
		}
		static ::System::Boolean* StaticGet_UsingMultiThreadLoading()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x81F0);
		}
		static ::System::Boolean* StaticGet_isPlaying()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x81F1);
		}
		static ::System::Single* StaticGet__realtimeOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x81F4);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_conditionalParentIndexes()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsJobTick()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean _isStartForegroundTick; // 0x18
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadManager* _asyncBehaviorLoadManager; // 0x20
		::BehaviorDesigner::Runtime::UpdateIntervalType updateInterval; // 0x28
		::System::Single updateIntervalSeconds; // 0x2C
		::BehaviorDesigner::Runtime::BehaviorManager_ExecutionsPerTickType executionsPerTick; // 0x30
		::System::Int32 maxTaskExecutionsPerTick; // 0x34
		::UnityEngine::WaitForSeconds* updateWait; // 0x38
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* behaviorTrees; // 0x40
		::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* pausedBehaviorTrees; // 0x48
		::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* behaviorTreeMap; // 0x50
		::System::Collections::IEnumerator* threadLoaderCoroutine; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask*>* objectTaskMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask*, ::System::Object*>* taskObjectMap; // 0x68
		::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask* thirdPartyTaskCompare; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean AttachLoadingFinishCb(::System::Object* requestItem, ::System::Action* cb)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ATTACHLOADINGFINISHCB_OFFSET))(requestItem, cb);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle TryLoadBehavior(::System::UInt32 entityID, ::BehaviorDesigner::Runtime::Behavior* behavior, ::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* outerTreeReadyCallback)
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle(*)(::PVOID, ::System::UInt32, ::BehaviorDesigner::Runtime::Behavior*, ::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYLOADBEHAVIOR_OFFSET))(this, entityID, behavior, outerTreeReadyCallback);
		}

		static ::System::String* _FillRefUnityObjectPath(::BehaviorDesigner::Runtime::ExternalBehavior* behaviorAsset)
		{
			return ((::System::String*(*)(::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__FILLREFUNITYOBJECTPATH_OFFSET))(behaviorAsset);
		}

		::System::Void TryPushLoadSubTreeRequest(::BehaviorDesigner::Runtime::Tasks::SubTreeBehaviorReference* subTreeNode, ::UnityEngine::GameObject* parentBehaviorGameObject, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* parentBehaviorGetter, ::BehaviorDesigner::Runtime::Behavior* parentBehavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::SubTreeBehaviorReference*, ::UnityEngine::GameObject*, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYPUSHLOADSUBTREEREQUEST_OFFSET))(this, subTreeNode, parentBehaviorGameObject, parentBehaviorGetter, parentBehavior);
		}

		::System::Void _LoadFinishedCallback(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* request)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOADFINISHEDCALLBACK_OFFSET))(this, request);
		}

		::System::Void _TryStartBehaviorLoadTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__TRYSTARTBEHAVIORLOADTICK_OFFSET))(this);
		}

		::System::Void _LateTickAsyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LATETICKASYNCLOAD_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadManager* get_Debug_BehaviorAsyncLoadManager()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_DEBUG_BEHAVIORASYNCLOADMANAGER_OFFSET))(this);
		}

		static ::System::Void _BeforeLoadHandle(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* loadItem)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__BEFORELOADHANDLE_OFFSET))(loadItem);
		}

		static ::System::Single get_RealtimeSinceStartup()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_REALTIMESINCESTARTUP_OFFSET))();
		}

		::BehaviorDesigner::Runtime::UpdateIntervalType get_UpdateInterval()
		{
			return ((::BehaviorDesigner::Runtime::UpdateIntervalType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_UPDATEINTERVAL_OFFSET))(this);
		}

		::System::Void set_UpdateInterval(::BehaviorDesigner::Runtime::UpdateIntervalType value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::UpdateIntervalType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_UPDATEINTERVAL_OFFSET))(this, value);
		}

		::System::Single get_UpdateIntervalSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_UPDATEINTERVALSECONDS_OFFSET))(this);
		}

		::System::Void set_UpdateIntervalSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_UPDATEINTERVALSECONDS_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_ExecutionsPerTickType get_ExecutionsPerTick()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_ExecutionsPerTickType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_EXECUTIONSPERTICK_OFFSET))(this);
		}

		::System::Void set_ExecutionsPerTick(::BehaviorDesigner::Runtime::BehaviorManager_ExecutionsPerTickType value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_ExecutionsPerTickType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_EXECUTIONSPERTICK_OFFSET))(this, value);
		}

		::System::Int32 get_MaxTaskExecutionsPerTick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_MAXTASKEXECUTIONSPERTICK_OFFSET))(this);
		}

		::System::Void set_MaxTaskExecutionsPerTick(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_MAXTASKEXECUTIONSPERTICK_OFFSET))(this, value);
		}

		static ::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_ISPLAYING_OFFSET))();
		}

		static ::System::Void set_IsPlaying(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_SET_ISPLAYING_OFFSET))(value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* get_BehaviorTrees()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_BEHAVIORTREES_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* get_conditionalParentIndexesTLS()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_CONDITIONALPARENTINDEXESTLS_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_PlayMakerStopMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_PLAYMAKERSTOPMETHOD_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_UScriptStopMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_USCRIPTSTOPMETHOD_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DialogueSystemStopMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_DIALOGUESYSTEMSTOPMETHOD_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_USequencerStopMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GET_USEQUENCERSTOPMETHOD_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateIntervalChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_UPDATEINTERVALCHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Boolean _IsBehaviorLoadVersionEqual(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__ISBEHAVIORLOADVERSIONEQUAL_OFFSET))(this, behavior);
		}

		::System::Boolean TryGetBehaviorInstance(::BehaviorDesigner::Runtime::Behavior* behaviorKey, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*& behaviorTreeInstance)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYGETBEHAVIORINSTANCE_OFFSET))(this, behaviorKey, behaviorTreeInstance);
		}

		::System::Void EnableBehavior(::BehaviorDesigner::Runtime::Behavior* behavior, ::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* finished)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ENABLEBEHAVIOR_OFFSET))(this, behavior, finished);
		}

		static ::System::Void _Log_Load(::System::String* content, ::UnityEngine::GameObject* logObj)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOG_LOAD_OFFSET))(content, logObj);
		}

		static ::System::String* _Red(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__RED_OFFSET))(input);
		}

		static ::System::String* _Green(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__GREEN_OFFSET))(input);
		}

		static ::System::String* _Yellow(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__YELLOW_OFFSET))(input);
		}

		static ::System::Void _LogErr(::System::String* content, ::UnityEngine::GameObject* logGameObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOGERR_OFFSET))(content, logGameObject);
		}

		static ::System::Void _LogException(::System::Exception* e, ::UnityEngine::GameObject* logGameObject)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__LOGEXCEPTION_OFFSET))(e, logGameObject);
		}

		static ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* LoadBehavior(::BehaviorDesigner::Runtime::Behavior* behavior, ::UnityEngine::GameObject* behaviorGameObject, ::System::String* gameObjectName, ::UnityEngine::Transform* behaviorTransform, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* getter)
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*(*)(::BehaviorDesigner::Runtime::Behavior*, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LOADBEHAVIOR_OFFSET))(behavior, behaviorGameObject, gameObjectName, behaviorTransform, getter);
		}

		::System::Void LoadBehaviorComplete(::BehaviorDesigner::Runtime::Behavior* behavior, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LOADBEHAVIORCOMPLETE_OFFSET))(this, behavior, behaviorTree);
		}

		static ::System::Int32 AddToTaskList(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::UnityEngine::GameObject* behaviorGameObject, ::UnityEngine::Transform* behaviorTransform, ::System::Boolean& hasExternalBehavior, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData* data, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* getter)
		{
			return ((::System::Int32(*)(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean&, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData*, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ADDTOTASKLIST_OFFSET))(behaviorTree, task, behaviorGameObject, behaviorTransform, hasExternalBehavior, data, getter);
		}

		static ::System::Void OverrideFields(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData* data, ::System::Object* obj)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_OVERRIDEFIELDS_OFFSET))(behaviorTree, data, obj);
		}

		static ::BehaviorDesigner::Runtime::SharedVariable* OverrideSharedVariable(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData* data, ::System::Type* fieldType, ::BehaviorDesigner::Runtime::SharedVariable* sharedVariable)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData*, ::System::Type*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_OVERRIDESHAREDVARIABLE_OFFSET))(behaviorTree, data, fieldType, sharedVariable);
		}

		::System::Void DisableBehavior(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_OFFSET))(this, behavior);
		}

		::System::Void DisableBehavior_1(::BehaviorDesigner::Runtime::Behavior* behavior, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_1_OFFSET))(this, behavior, paused);
		}

		::System::Void DisableBehavior_2(::BehaviorDesigner::Runtime::Behavior* behavior, ::System::Boolean paused, ::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::Boolean, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DISABLEBEHAVIOR_2_OFFSET))(this, behavior, paused, executionStatus);
		}

		::System::Void DestroyBehavior(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYBEHAVIOR_OFFSET))(this, behavior);
		}

		::System::Void DestroyBehavior_1(::BehaviorDesigner::Runtime::Behavior* behavior, ::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYBEHAVIOR_1_OFFSET))(this, behavior, executionStatus);
		}

		::System::Void RestartBehavior(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RESTARTBEHAVIOR_OFFSET))(this, behavior);
		}

		::System::Boolean IsBehaviorEnabled(::BehaviorDesigner::Runtime::Behavior* behavior, ::System::Boolean isOmitLoadedCheck, ::System::Boolean isLog)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISBEHAVIORENABLED_OFFSET))(this, behavior, isOmitLoadedCheck, isLog);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void FixedTick(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDTICK_OFFSET))(this, behaviorTree);
		}

		::System::Void OnMgrLateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ONMGRLATETICK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CoroutineUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_COROUTINEUPDATE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_OFFSET))(this);
		}

		::System::Void Tick_1(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_1_OFFSET))(this, behavior);
		}

		::System::Void FixedTick_1(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FIXEDTICK_1_OFFSET))(this, behavior);
		}

		::System::Boolean _IsInterruptionInCurStack(::System::Collections::Generic::Stack_1<::System::Int32>* curStack, ::System::Int32 interruptedTask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Stack_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER__ISINTERRUPTIONINCURSTACK_OFFSET))(this, curStack, interruptedTask);
		}

		::System::Void Tick_2(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TICK_2_OFFSET))(this, behaviorTree);
		}

		::System::Void ReevaluateConditionalTasksMainThread(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATECONDITIONALTASKSMAINTHREAD_OFFSET))(this, behaviorTree);
		}

		::System::Void ReevaluateConditionalTasks(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATECONDITIONALTASKS_OFFSET))(this, behaviorTree);
		}

		::System::Void ReevaluateParentTasks(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REEVALUATEPARENTTASKS_OFFSET))(this, behaviorTree);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus RunTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex, ::System::Int32 stackIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus previousStatus)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RUNTASK_OFFSET))(this, behaviorTree, taskIndex, stackIndex, previousStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus RunParentTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex, ::System::Int32& stackIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32&, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RUNPARENTTASK_OFFSET))(this, behaviorTree, taskIndex, stackIndex, status);
		}

		::System::Void PushTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex, ::System::Int32 stackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_PUSHTASK_OFFSET))(this, behaviorTree, taskIndex, stackIndex);
		}

		::System::Void PopTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex, ::System::Int32 stackIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus& status, ::System::Boolean popChildren)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus&, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_POPTASK_OFFSET))(this, behaviorTree, taskIndex, stackIndex, status, popChildren);
		}

		::System::Void PopTask_1(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex, ::System::Int32 stackIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus& status, ::System::Boolean popChildren, ::System::Boolean notifyOnEmptyStack)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_POPTASK_1_OFFSET))(this, behaviorTree, taskIndex, stackIndex, status, popChildren, notifyOnEmptyStack);
		}

		::System::Void RemoveChildConditionalReevaluate(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 compositeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVECHILDCONDITIONALREEVALUATE_OFFSET))(this, behaviorTree, compositeIndex);
		}

		::System::Void Restart(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_RESTART_OFFSET))(this, behaviorTree);
		}

		::System::Boolean IsParentTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 possibleParent, ::System::Int32 possibleChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISPARENTTASK_OFFSET))(this, behaviorTree, possibleParent, possibleChild);
		}

		::System::Void Interrupt(::BehaviorDesigner::Runtime::Behavior* behavior, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::BehaviorDesigner::Runtime::Tasks::TaskStatus interruptTaskStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_INTERRUPT_OFFSET))(this, behavior, task, interruptTaskStatus);
		}

		::System::Void Interrupt_1(::BehaviorDesigner::Runtime::Behavior* behavior, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::BehaviorDesigner::Runtime::Tasks::Task* interruptionTask, ::BehaviorDesigner::Runtime::Tasks::TaskStatus interruptTaskStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_INTERRUPT_1_OFFSET))(this, behavior, task, interruptionTask, interruptTaskStatus);
		}

		::System::Void StopThirdPartyTask(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_STOPTHIRDPARTYTASK_OFFSET))(this, behaviorTree, taskIndex);
		}

		::System::Void RemoveActiveThirdPartyTask(::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVEACTIVETHIRDPARTYTASK_OFFSET))(this, task);
		}

		::System::Void RemoveStack(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 stackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_REMOVESTACK_OFFSET))(this, behaviorTree, stackIndex);
		}

		::System::Int32 FindLCA(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex1, ::System::Int32 taskIndex2)
		{
			return ((::System::Int32(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_FINDLCA_OFFSET))(this, behaviorTree, taskIndex1, taskIndex2);
		}

		::System::Boolean IsChild(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree, ::System::Int32 taskIndex1, ::System::Int32 taskIndex2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ISCHILD_OFFSET))(this, behaviorTree, taskIndex1, taskIndex2);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* GetActiveTasks(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_GETACTIVETASKS_OFFSET))(this, behavior);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* TryGetBehaviorTree(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TRYGETBEHAVIORTREE_OFFSET))(this, behavior);
		}

		::System::Void BehaviorOnCollisionEnter(::UnityEngine::Collision* collision, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONENTER_OFFSET))(this, collision, behavior);
		}

		::System::Void BehaviorOnCollisionExit(::UnityEngine::Collision* collision, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONEXIT_OFFSET))(this, collision, behavior);
		}

		::System::Void BehaviorOnTriggerEnter(::UnityEngine::Collider* other, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGERENTER_OFFSET))(this, other, behavior);
		}

		::System::Void BehaviorOnTriggerExit(::UnityEngine::Collider* other, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGEREXIT_OFFSET))(this, other, behavior);
		}

		::System::Void BehaviorOnCollisionEnter2D(::UnityEngine::Collision2D* collision, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONENTER2D_OFFSET))(this, collision, behavior);
		}

		::System::Void BehaviorOnCollisionExit2D(::UnityEngine::Collision2D* collision, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCOLLISIONEXIT2D_OFFSET))(this, collision, behavior);
		}

		::System::Void BehaviorOnTriggerEnter2D(::UnityEngine::Collider2D* other, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGERENTER2D_OFFSET))(this, other, behavior);
		}

		::System::Void BehaviorOnTriggerExit2D(::UnityEngine::Collider2D* other, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONTRIGGEREXIT2D_OFFSET))(this, other, behavior);
		}

		::System::Void BehaviorOnControllerColliderHit(::UnityEngine::ControllerColliderHit* hit, ::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONCONTROLLERCOLLIDERHIT_OFFSET))(this, hit, behavior);
		}

		::System::Void BehaviorOnAnimatorIK(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORONANIMATORIK_OFFSET))(this, behavior);
		}

		::System::Boolean MapObjectToTask(::System::Object* objectKey, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyObjectType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_MAPOBJECTTOTASK_OFFSET))(this, objectKey, task, objectType);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* TaskForObject(::System::Object* objectKey)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKFOROBJECT_OFFSET))(this, objectKey);
		}

		::System::Decimal RoundedTime()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_ROUNDEDTIME_OFFSET))(this);
		}

		static ::System::Void DomainReset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DOMAINRESET_OFFSET))();
		}

		static ::System::Void DestroyManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_DESTROYMANAGER_OFFSET))();
		}
	};
}
