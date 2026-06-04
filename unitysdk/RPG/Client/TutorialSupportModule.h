#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_310;
class Class_0_16E4307DCC419505_914;
class Class_0_16E4307DCC419505_915;
class TutorialNode;
namespace RPG::Client { class MonoPerformanceUITransfer; }
namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::Client { class TutorialMaskFilter; }
namespace RPG::Client { class TutorialNodeCollector; }
namespace RPG::Client { class TutorialRaycaster; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
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

#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET UNITYSDK_OFFSET(0xCAFFFD0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0xCAFDA90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xCAFBF90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET UNITYSDK_OFFSET(0xCB00B80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xCB00C20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET UNITYSDK_OFFSET(0xCAFEFE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xCAFF710)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET UNITYSDK_OFFSET(0xCB00220)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET UNITYSDK_OFFSET(0xCB004A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0xCAFE8F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xCAFE620)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCB00C80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xCB00D50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xCAFDA30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCAF6BF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAFECD0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNEXTCONFIGINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCAF31A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET UNITYSDK_OFFSET(0xCB009A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET UNITYSDK_OFFSET(0xCAF43F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAF4020)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET UNITYSDK_OFFSET(0xCAFE9D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xCAF0FB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET UNITYSDK_OFFSET(0xCAFE940)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLOWSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCB02A00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCB02960)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET UNITYSDK_OFFSET(0xCB02940)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xCB02880)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCAF0F50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCB02A10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0xCAF7FB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCB02920)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0xCB02A30)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0xCAF8010)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISTUTORIALDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xCB02AC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0xCB027D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDBLOCKFOCUS_OFFSET UNITYSDK_OFFSET(0xCB029A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET UNITYSDK_OFFSET(0xCAFC520)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALBLOCKMASKTRANS_OFFSET UNITYSDK_OFFSET(0xCB02BF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCB02980)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALMASKFILTER_OFFSET UNITYSDK_OFFSET(0xCAF99E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALRAYCASTER_OFFSET UNITYSDK_OFFSET(0xCB02CC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALUIMASKTRANS_OFFSET UNITYSDK_OFFSET(0xCB02B20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET UNITYSDK_OFFSET(0xCAFFF70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASTUTORIALBLOCKMASK_OFFSET UNITYSDK_OFFSET(0xCAFF0D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCAFE140)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET UNITYSDK_OFFSET(0xCAFD580)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xCAFFF10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0xCAFEA70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xCAFB8E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET UNITYSDK_OFFSET(0xCB00E20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0xCAFD980)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAFCDE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_RELEASEALLLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xCAFF160)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET UNITYSDK_OFFSET(0xCB00190)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0xCAFDB80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0xCAFC170)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xCAFB9A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET UNITYSDK_OFFSET(0xCB00380)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET UNITYSDK_OFFSET(0xCAFE8A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET UNITYSDK_OFFSET(0xCAFE850)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0xCAFE4B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xCAFE350)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET UNITYSDK_OFFSET(0xCB00AA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET UNITYSDK_OFFSET(0xCAFFD20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCB02970)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET UNITYSDK_OFFSET(0xCB02950)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xCB02910)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCB02A20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCB02930)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0xCB02A40)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0xCB027E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCB02990)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCAFDE80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCAFE060)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAF37E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCAFDBF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0xCAFFB10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0xCAFD9D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAFD270)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB02E80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xCB01A80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCB01BB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__INITTUTORIALINPUTTYPE_OFFSET UNITYSDK_OFFSET(0xCB02160)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xCAFE780)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET UNITYSDK_OFFSET(0xCB02240)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET UNITYSDK_OFFSET(0xCB02680)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONENDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCAFFE60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCAFFE10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__REGISTERALLNODE_OFFSET UNITYSDK_OFFSET(0xCB01CE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET UNITYSDK_OFFSET(0xCB02EF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET UNITYSDK_OFFSET(0xCB02440)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET UNITYSDK_OFFSET(0xCAFF9F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCB02F10)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialSupportModule_TypeDefinitionIndex = 63858;

	class TutorialSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _DynamicValue_Prefix; // 0x0
		// static const ::System::String* _DynamicValue_Postfix; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_915*>* _TriggerTutorialListenerList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _PendingTaskUnlockKeys; // 0x18
		::UnityEngine::Transform* _TutorialDialogRoot; // 0x20
		::Class_0_16E4307DCC419505_914* _DynamicValueEvaluator; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _HideNodeIDs; // 0x30
		::Il2CppArray<::System::Single>* _CachePoint; // 0x38
		::RPG::GameCore::LevelGraphComponent* _AdvLevelGraphCmpt; // 0x40
		::RPG::Client::TutorialMaskFilter* _TutorialMaskFilter; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_310*>* _TutorialNodeDict; // 0x50
		::RPG::GameCore::TutorialJsonConfig* _TutorialJsonConfigRef_k__BackingField; // 0x58
		::System::Collections::Generic::IList_1<::RPG::Client::RuntimeTutorialNode*>* _AllRuntimeTutorialNodeList; // 0x60
		::System::Collections::Generic::ICollection_1<::TutorialNode*>* _AllTutorialNode_k__BackingField; // 0x68
		::UnityEngine::Transform* _TutorialBlockMaskTrans; // 0x70
		::UnityEngine::Transform* _TutorialUIMaskTrans; // 0x78
		::System::Collections::Generic::IList_1<::RPG::Client::TutorialNodeCollector*>* _AllTutorialNodeCollector; // 0x80
		::UnityEngine::GameObject* _ForceNavigationTarget; // 0x88
		::Enum_3_0A3761FE34514D6C_80 TutorialStateResponse; // 0x90
		::System::Boolean _IsBlockTutorial_k__BackingField; // 0x94
		::System::Boolean _DataInited_k__BackingField; // 0x95
		::System::Boolean IsTutorialLockOperation; // 0x96
		::System::Boolean _IsLockControllerHotSwitch; // 0x97
		::System::Boolean _IsInTutorial_k__BackingField; // 0x98
		::RPG::GameCore::TutorialPlatformType _DebugPlatformType; // 0x9C
		::System::UInt32 TutorialBlockMaxWaitTime; // 0xA0
		::System::UInt32 _CacheInputType; // 0xA4
		::RPG::Client::TutorialBlockType _BlockType; // 0xA8
		::System::UInt32 _RunningTutorialID; // 0xAC
		::System::UInt32 _CurrentInstanceID; // 0xB0
		::System::UInt32 _BlockOperationCount; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDynamicValueEvaluator(::Class_0_16E4307DCC419505_914* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_914*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, a1);
		}

		::System::Void UnregisterDynamicValueEvaluator(::Class_0_16E4307DCC419505_914* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_914*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, a1);
		}

		::System::String* EvaluateDynamicValue(::RPG::GameCore::TutorialDynamicParamBase* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET))(this, a1);
		}

		::System::String* ParseDynamicValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET))(this, a1);
		}

		::System::String* ReplaceDynamicValue(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddTriggerTutorialListener(::Class_0_16E4307DCC419505_915* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_915*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveTriggerTutorialListener(::Class_0_16E4307DCC419505_915* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_915*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET))(this, a1);
		}

		::System::Void TryTriggerTutorial(::System::String* a1, ::System::Action* a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::LevelGraphComponent* StartAdvLevelGraph(::System::String* a1, ::RPG::GameCore::GameWorld* a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET))(this, a1, a2);
		}

		::System::Void StopAdvLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void ForceFinishCurrentTutorial(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeDynamicKey(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeDynamicKey_1(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Void ClearNodeDynamicKey(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET))(this, a1);
		}

		::System::Void AddTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void RemoveTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTutorialNode(::System::String* a1, ::Class_0_16E4307DCC419505_310* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_310*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDebugPlatform(::RPG::GameCore::TutorialPlatformType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET))(this, a1);
		}

		::System::Void SetDebugInputType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearDebugFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET))(this);
		}

		::System::Boolean IsPointAllowRaycast(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_80 GetTutorialStatusByID(::System::UInt32 a1)
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_80 GetTutorialGuideStatusByID(::System::UInt32 a1, ::Enum_3_ED790DAC948A65A9_29 a2)
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTaskUnlockKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET))(this, a1);
		}

		::System::Void ForceRegisterAllTutorialNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void BindTick(::RPG::Client::MonoPerformanceUITransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoPerformanceUITransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET))(this, a1);
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

		::System::Void BlockOperation(::RPG::Client::TutorialBlockType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET))(this, a1);
		}

		::System::Void UnblockOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET))(this);
		}

		::System::Void SetTutorialDialogRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET))(this, a1);
		}

		::System::Boolean IsTutorialBlockOperation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET))(this);
		}

		::System::Boolean HasBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET))(this);
		}

		::System::Boolean UnregisterTutorialNode(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* TryGetTutorialNode(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET))(this, a1, a2);
		}

		::System::Void AddHideNode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET))(this, a1);
		}

		::System::Void RemoveHideNode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET))(this, a1);
		}

		::System::Void ClearAllHideNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET))(this);
		}

		::System::Void SetDataInited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET))(this, a1);
		}

		::System::Void ClearAllRegisterNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET))(this);
		}

		::RPG::GameCore::TutorialPlatformType GetTutorialPlatformType()
		{
			return ((::RPG::GameCore::TutorialPlatformType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetNodeScreenPoint(::UnityEngine::Transform* a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET))(this, a1);
		}

		::System::Void SetNodeSize(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode(::System::String* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode_1(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET))(this, a1);
		}

		::System::Boolean AllowGetFocus(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET))(this, a1);
		}

		::System::Boolean AllowLostFocus(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* CreateTutorialDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* CreateTutorialGuideDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareNeededMissionDataPromise(::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET))(this, a1, a2);
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

		::System::Boolean _IsNodeValid(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET))(this, a1);
		}

		::System::Void _Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET))(this, a1);
		}

		::System::Boolean _UseBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET))(this);
		}

		::System::Void _FillNeededMainMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Void _FillNeededSubMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsNodeShouldHide(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET))(this, a1);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RunningTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET))(this);
		}

		::System::Void set_RunningTutorialID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ForceNavigationTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void set_ForceNavigationTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsInTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_DataInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET))(this);
		}

		::System::Void set_DataInited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialSupportModule* get_Instance()
		{
			return ((::RPG::Client::TutorialSupportModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::ICollection_1<::TutorialNode*>* get_AllTutorialNode()
		{
			return ((::System::Collections::Generic::ICollection_1<::TutorialNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void set_AllTutorialNode(::System::Collections::Generic::ICollection_1<::TutorialNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::TutorialNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldRegister()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET))(this);
		}

		::RPG::GameCore::TutorialJsonConfig* get_TutorialJsonConfigRef()
		{
			return ((::RPG::GameCore::TutorialJsonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_TutorialJsonConfigRef(::RPG::GameCore::TutorialJsonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialJsonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET))(this, a1);
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

		::System::Void set_IsBlockTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLockControllerHotSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this);
		}

		::System::Void set_IsLockControllerHotSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this, a1);
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

		::System::Void _StartAdvLevelGraph_b__11_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
