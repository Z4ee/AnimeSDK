#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_297;
class Class_0_16E4307DCC419505_863;
class Class_0_16E4307DCC419505_864;
class TutorialNode;
namespace RPG::Client { class MonoPerformanceUITransfer; }
namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::Client { class TutorialMaskFilter; }
namespace RPG::Client { class TutorialNodeCollector; }
namespace RPG::Client { class TutorialRaycaster; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::MVVM::Model { class TutorialGuideGroupData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TutorialDataRow; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace RPG::GameCore { class TutorialJsonConfig; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET UNITYSDK_OFFSET(0xB39FC10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0xB39D710)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xB39BD60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET UNITYSDK_OFFSET(0xB3A0CC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB3A0D60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET UNITYSDK_OFFSET(0xB39EB00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xB39F250)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET UNITYSDK_OFFSET(0xB39FDC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET UNITYSDK_OFFSET(0xB3A0070)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0xB39E4C0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB39E220)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB3A0DC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB3A0E90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xB39D6A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB396B20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB39E800)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNEXTCONFIGINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB39F200)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET UNITYSDK_OFFSET(0xB3A0690)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET UNITYSDK_OFFSET(0xB3A08B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB395920)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET UNITYSDK_OFFSET(0xB39E5A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xB3A0560)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET UNITYSDK_OFFSET(0xB39E510)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLOWSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB3A2BD0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB3A2B30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET UNITYSDK_OFFSET(0xB3A2AB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xB3A2A00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB3A2AD0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB3A2BE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0xB397F50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB3A2A90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0xB3A2C00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0xB397FB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISTUTORIALDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xB3A2C90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0xB3A2950)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDBLOCKFOCUS_OFFSET UNITYSDK_OFFSET(0xB3A2B70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET UNITYSDK_OFFSET(0xB39C2D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALBLOCKMASKTRANS_OFFSET UNITYSDK_OFFSET(0xB3A2DC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xB3A2B50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALMASKFILTER_OFFSET UNITYSDK_OFFSET(0xB399C10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALRAYCASTER_OFFSET UNITYSDK_OFFSET(0xB3A2E90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALUIMASKTRANS_OFFSET UNITYSDK_OFFSET(0xB3A2CF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET UNITYSDK_OFFSET(0xB39FBB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASTUTORIALBLOCKMASK_OFFSET UNITYSDK_OFFSET(0xB39EBC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB39DD30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET UNITYSDK_OFFSET(0xB39D250)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xB39FB50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0xB39E640)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xB39B6D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET UNITYSDK_OFFSET(0xB3A0F60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0xB39D5F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB39CB20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_RELEASEALLLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xB39EC50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET UNITYSDK_OFFSET(0xB39FD30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0xB39D7A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xB39BF40)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xB39B790)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET UNITYSDK_OFFSET(0xB39FF30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET UNITYSDK_OFFSET(0xB39E470)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET UNITYSDK_OFFSET(0xB39E420)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0xB39E0B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB39DF40)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET UNITYSDK_OFFSET(0xB3A07D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET UNITYSDK_OFFSET(0xB39F970)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB3A2B40)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET UNITYSDK_OFFSET(0xB3A2AC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xB3A2A80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB3A2BF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB3A2AA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0xB3A2C10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0xB3A2960)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xB3A2B60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB39DAA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB39DC50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB399410)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB39D810)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xB39F760)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0xB39D640)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB39CF70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A3060)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB3A1C00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xB3A1D10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__INITTUTORIALINPUTTYPE_OFFSET UNITYSDK_OFFSET(0xB3A2280)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xB39E390)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET UNITYSDK_OFFSET(0xB3A2360)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB3A27A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONENDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB39FAB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB39FA60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__REGISTERALLNODE_OFFSET UNITYSDK_OFFSET(0xB3A1E20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET UNITYSDK_OFFSET(0xB3A30D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET UNITYSDK_OFFSET(0xB3A2560)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET UNITYSDK_OFFSET(0xB39F640)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB3A30F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialSupportModule_TypeDefinitionIndex = 62923;

	class TutorialSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _DynamicValue_Prefix; // 0x0
		// static const ::System::String* _DynamicValue_Postfix; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_297*>* _TutorialNodeDict; // 0x10
		::UnityEngine::Transform* _TutorialDialogRoot; // 0x18
		::UnityEngine::Transform* _TutorialBlockMaskTrans; // 0x20
		::RPG::Client::TutorialMaskFilter* _TutorialMaskFilter; // 0x28
		::Il2CppArray<::System::Single>* _CachePoint; // 0x30
		::System::Collections::Generic::IList_1<::RPG::Client::TutorialNodeCollector*>* _AllTutorialNodeCollector; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _PendingTaskUnlockKeys; // 0x40
		::UnityEngine::GameObject* _ForceNavigationTarget; // 0x48
		::UnityEngine::Transform* _TutorialUIMaskTrans; // 0x50
		::System::Collections::Generic::ICollection_1<::TutorialNode*>* _AllTutorialNode_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* _HideNodeIDs; // 0x60
		::RPG::GameCore::TutorialJsonConfig* _TutorialJsonConfigRef_k__BackingField; // 0x68
		::RPG::GameCore::LevelGraphComponent* _AdvLevelGraphCmpt; // 0x70
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_864*>* _TriggerTutorialListenerList; // 0x78
		::System::Collections::Generic::IList_1<::RPG::Client::RuntimeTutorialNode*>* _AllRuntimeTutorialNodeList; // 0x80
		::Class_0_16E4307DCC419505_863* _DynamicValueEvaluator; // 0x88
		::System::Boolean _DataInited_k__BackingField; // 0x90
		::System::Boolean _IsBlockTutorial_k__BackingField; // 0x91
		::Enum_3_0A3761FE34514D6C_80 TutorialStateResponse; // 0x94
		::System::UInt32 _RunningTutorialID; // 0x98
		::System::Boolean IsTutorialLockOperation; // 0x9C
		::System::Boolean _IsLockControllerHotSwitch; // 0x9D
		::System::Boolean _IsInTutorial_k__BackingField; // 0x9E
		::System::UInt32 _CurrentInstanceID; // 0xA0
		::System::UInt32 TutorialBlockMaxWaitTime; // 0xA4
		::System::UInt32 _CacheInputType; // 0xA8
		::RPG::Client::TutorialBlockType _BlockType; // 0xAC
		::System::UInt32 _BlockOperationCount; // 0xB0
		::RPG::GameCore::TutorialPlatformType _DebugPlatformType; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDynamicValueEvaluator(::Class_0_16E4307DCC419505_863* evaluator)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_863*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, evaluator);
		}

		::System::Void UnregisterDynamicValueEvaluator(::Class_0_16E4307DCC419505_863* evaluator)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_863*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, evaluator);
		}

		::System::String* EvaluateDynamicValue(::RPG::GameCore::TutorialDynamicParamBase* param)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET))(this, param);
		}

		::System::String* ParseDynamicValue(::System::String* origin)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET))(this, origin);
		}

		::System::String* ReplaceDynamicValue(::System::String* origin, ::System::String* dynamicKey, ::System::String* replaceValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET))(this, origin, dynamicKey, replaceValue);
		}

		::System::Void AddTriggerTutorialListener(::Class_0_16E4307DCC419505_864* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_864*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET))(this, listener);
		}

		::System::Void RemoveTriggerTutorialListener(::Class_0_16E4307DCC419505_864* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_864*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET))(this, listener);
		}

		::System::Void TryTriggerTutorial(::System::String* key, ::System::Action* onTutorialStart, ::System::Action_1<::System::Boolean>* ontutorialFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET))(this, key, onTutorialStart, ontutorialFinish);
		}

		::RPG::GameCore::LevelGraphComponent* StartAdvLevelGraph(::System::String* strConfigPath, ::RPG::GameCore::GameWorld* gameWorld)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET))(this, strConfigPath, gameWorld);
		}

		::System::Void StopAdvLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void ForceFinishCurrentTutorial(::System::String* reason, ::System::Boolean logError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET))(this, reason, logError);
		}

		::System::Void SetNodeDynamicKey(::UnityEngine::GameObject* node, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET))(this, node, key);
		}

		::System::Void SetNodeDynamicKey_1(::UnityEngine::GameObject* node, ::System::UInt32 key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET))(this, node, key);
		}

		::System::Void ClearNodeDynamicKey(::UnityEngine::GameObject* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET))(this, node);
		}

		::System::Void AddTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* collector)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void RemoveTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* collector)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET))(this, collector);
		}

		::System::Boolean RegisterTutorialNode(::System::String* id, ::Class_0_16E4307DCC419505_297* node, ::System::Boolean useNodeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_297*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET))(this, id, node, useNodeName);
		}

		::System::Void SetDebugPlatform(::RPG::GameCore::TutorialPlatformType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET))(this, type);
		}

		::System::Void SetDebugInputType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET))(this, value);
		}

		::System::Void ClearDebugFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET))(this);
		}

		::System::Boolean IsPointAllowRaycast(::UnityEngine::Vector2 sp)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET))(this, sp);
		}

		::Enum_3_0A3761FE34514D6C_80 GetTutorialStatusByID(::System::UInt32 id)
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET))(this, id);
		}

		::Enum_3_0A3761FE34514D6C_80 GetTutorialGuideStatusByID(::System::UInt32 id, ::Enum_3_ED790DAC948A65A9_29 type)
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET))(this, id, type);
		}

		::System::Void NotifyTaskUnlockKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET))(this, key);
		}

		::System::Void ForceRegisterAllTutorialNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void BindTick(::RPG::Client::MonoPerformanceUITransfer* caller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoPerformanceUITransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET))(this, caller);
		}

		::System::Boolean HasTutorialBlockMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_HASTUTORIALBLOCKMASK_OFFSET))(this);
		}

		::System::Void ReleaseAllLockOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_RELEASEALLLOCKOPERATION_OFFSET))(this);
		}

		::System::UInt32 GetNextConfigInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNEXTCONFIGINSTANCEID_OFFSET))(this);
		}

		::System::Void BlockOperation(::RPG::Client::TutorialBlockType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET))(this, type);
		}

		::System::Void UnblockOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET))(this);
		}

		::System::Void SetTutorialDialogRoot(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET))(this, root);
		}

		::System::Boolean IsTutorialBlockOperation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET))(this);
		}

		::System::Boolean HasBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET))(this);
		}

		::System::Boolean UnregisterTutorialNode(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET))(this, id);
		}

		::UnityEngine::Transform* TryGetTutorialNode(::System::String* id, ::System::String* path)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET))(this, id, path);
		}

		::System::Void AddHideNode(::System::String* nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET))(this, nodeID);
		}

		::System::Void RemoveHideNode(::System::String* nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET))(this, nodeID);
		}

		::System::Void ClearAllHideNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET))(this);
		}

		::System::Void SetDataInited(::System::Boolean inited)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET))(this, inited);
		}

		::System::Void ClearAllRegisterNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET))(this);
		}

		::RPG::GameCore::TutorialPlatformType GetTutorialPlatformType()
		{
			return ((::RPG::GameCore::TutorialPlatformType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetNodeScreenPoint(::UnityEngine::Transform* transform)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET))(this, transform);
		}

		::System::Void SetNodeSize(::UnityEngine::RectTransform* rect, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET))(this, rect, width, height);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode(::System::String* nodeID)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET))(this, nodeID);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode_1(::RPG::GameCore::TutorialGuideUIContextConfig* Config)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET))(this, Config);
		}

		::System::Boolean AllowGetFocus(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET))(this, controller);
		}

		::System::Boolean AllowLostFocus(::RPG::Client::UIController* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET))(this, controller);
		}

		::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* CreateTutorialDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* CreateTutorialGuideDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareNeededMissionDataPromise(::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* unFinishTutorialDataRowCollection, ::System::Collections::Generic::ICollection_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* unFinishGuideDataRowCollection)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET))(this, unFinishTutorialDataRowCollection, unFinishGuideDataRowCollection);
		}

		::System::Void _RegisterAllNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__REGISTERALLNODE_OFFSET))(this);
		}

		::System::Void _InitTutorialInputType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__INITTUTORIALINPUTTYPE_OFFSET))(this);
		}

		::System::Void _OnStartTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ONSTARTTUTORIAL_OFFSET))(this);
		}

		::System::Void _OnEndTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ONENDTUTORIAL_OFFSET))(this);
		}

		::System::Boolean _IsNodeValid(::UnityEngine::Transform* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET))(this, node);
		}

		::System::Void _Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET))(this, deltaTime);
		}

		::System::Boolean _UseBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET))(this);
		}

		::System::Void _FillNeededMainMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* triggerParams, ::System::Collections::Generic::List_1<::System::UInt32>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET))(this, triggerParams, targetList);
		}

		::System::Void _FillNeededSubMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* triggerParams, ::System::Collections::Generic::List_1<::System::UInt32>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET))(this, triggerParams, targetList);
		}

		::System::Boolean _IsNodeShouldHide(::System::String* nodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET))(this, nodeID);
		}

		::System::Void _LogError(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET))(this, reason);
		}

		::System::UInt32 get_RunningTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET))(this);
		}

		::System::Void set_RunningTutorialID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_ForceNavigationTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void set_ForceNavigationTarget(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsInTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsInTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET))(this, value);
		}

		::System::Boolean get_DataInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET))(this);
		}

		::System::Void set_DataInited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET))(this, value);
		}

		static ::RPG::Client::TutorialSupportModule* get_Instance()
		{
			return ((::RPG::Client::TutorialSupportModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::ICollection_1<::TutorialNode*>* get_AllTutorialNode()
		{
			return ((::System::Collections::Generic::ICollection_1<::TutorialNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void set_AllTutorialNode(::System::Collections::Generic::ICollection_1<::TutorialNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::TutorialNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldRegister()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET))(this);
		}

		::RPG::GameCore::TutorialJsonConfig* get_TutorialJsonConfigRef()
		{
			return ((::RPG::GameCore::TutorialJsonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_TutorialJsonConfigRef(::RPG::GameCore::TutorialJsonConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialJsonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldBlockFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDBLOCKFOCUS_OFFSET))(this);
		}

		::System::Boolean get_AllowStartTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLOWSTARTTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_IsControllerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISCONTROLLERINPUT_OFFSET))(this);
		}

		::System::Boolean get_IsMobileInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISMOBILEINPUT_OFFSET))(this);
		}

		::System::Boolean get_IsBlockTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISBLOCKTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsBlockTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsLockControllerHotSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this);
		}

		::System::Void set_IsLockControllerHotSwitch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this, value);
		}

		::System::Boolean get_IsTutorialDialogOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISTUTORIALDIALOGOPEN_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TutorialUIMaskTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALUIMASKTRANS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TutorialBlockMaskTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALBLOCKMASKTRANS_OFFSET))(this);
		}

		::RPG::Client::TutorialMaskFilter* get_TutorialMaskFilter()
		{
			return ((::RPG::Client::TutorialMaskFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALMASKFILTER_OFFSET))(this);
		}

		::RPG::Client::TutorialRaycaster* get_TutorialRaycaster()
		{
			return ((::RPG::Client::TutorialRaycaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALRAYCASTER_OFFSET))(this);
		}

		::System::Void _StartAdvLevelGraph_b__11_0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET))(this, entity);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
