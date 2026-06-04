#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogueMode.h"
#include "unitysdk/RPG/Client/DialoguePhase.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_339DA25E4BE88A4F;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class RogueDialogueEventConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }
namespace RPG::GameCore { class TalkTrigger; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGUEMANAGER_CLEARINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0xB74B030)
#define RPG_CLIENT_DIALOGUEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB74E9D0)
#define RPG_CLIENT_DIALOGUEMANAGER_FORCEFINISHCURDIALOGLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB74E500)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB74B950)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUENPCID_OFFSET UNITYSDK_OFFSET(0xB74B6D0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUEUNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xB74B810)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xB74E290)
#define RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITYENDLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xB74B270)
#define RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0xB74B210)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURROGUELEGACY_OFFSET UNITYSDK_OFFSET(0xB74C1B0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0xB74C140)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0xB74BEB0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0xB74BCB0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_OFFSET UNITYSDK_OFFSET(0xB74BA90)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0xB74BE50)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_OFFSET UNITYSDK_OFFSET(0xB74BD00)
#define RPG_CLIENT_DIALOGUEMANAGER_GETTALKFIRSTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74F760)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDDIALOGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xB74D8F0)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDISSHOWEXITBTN_OFFSET UNITYSDK_OFFSET(0xB74D910)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_DIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xB78C1D0)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_ISINDIALOG_OFFSET UNITYSDK_OFFSET(0xB78E730)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB78F330)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_TRIGGEREDDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xB78F320)
#define RPG_CLIENT_DIALOGUEMANAGER_INITSERIES_OFFSET UNITYSDK_OFFSET(0xB74FA30)
#define RPG_CLIENT_DIALOGUEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB74E580)
#define RPG_CLIENT_DIALOGUEMANAGER_RECORDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xB74E3A0)
#define RPG_CLIENT_DIALOGUEMANAGER_RECORDGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xB74E450)
#define RPG_CLIENT_DIALOGUEMANAGER_REFRESHTALKTRIGGER_OFFSET UNITYSDK_OFFSET(0xB74DD90)
#define RPG_CLIENT_DIALOGUEMANAGER_SETINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0xB74AE20)
#define RPG_CLIENT_DIALOGUEMANAGER_SETRESERVEPARAMFORDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB78C660)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDDIALOGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xB74D900)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDISSHOWEXITBTN_OFFSET UNITYSDK_OFFSET(0xB74D920)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB78F340)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74B430)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUEDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74B3A0)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUELEGACYDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74B4F0)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUERECORDDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74B5E0)
#define RPG_CLIENT_DIALOGUEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB74EE20)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xB74E0E0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xB74DE60)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGERREFRESH_OFFSET UNITYSDK_OFFSET(0xB74F600)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYENTERHEARTDIALDIALOGUEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB78DF00)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYINITSERIES_OFFSET UNITYSDK_OFFSET(0xB74F9E0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xB74F7E0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYUNLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xB74F900)
#define RPG_CLIENT_DIALOGUEMANAGER__CLEARROGUEDIALOGUECACHE_OFFSET UNITYSDK_OFFSET(0xB74C410)
#define RPG_CLIENT_DIALOGUEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB78F350)
#define RPG_CLIENT_DIALOGUEMANAGER__DOCLEAR_OFFSET UNITYSDK_OFFSET(0xB74F000)
#define RPG_CLIENT_DIALOGUEMANAGER__DOONACTGRAPHEND_GRAPH_OFFSET UNITYSDK_OFFSET(0xB78D220)
#define RPG_CLIENT_DIALOGUEMANAGER__DOTICK_OFFSET UNITYSDK_OFFSET(0xB74F1D0)
#define RPG_CLIENT_DIALOGUEMANAGER__FLUSHGROUPEVENTS_OFFSET UNITYSDK_OFFSET(0xB78DB40)
#define RPG_CLIENT_DIALOGUEMANAGER__GETDIALOGUEMAINROLE_OFFSET UNITYSDK_OFFSET(0xB74F4F0)
#define RPG_CLIENT_DIALOGUEMANAGER__GETTALKTRIGGERBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB78C230)
#define RPG_CLIENT_DIALOGUEMANAGER__HANDLEWORLDSHIFT_OFFSET UNITYSDK_OFFSET(0xB78EB50)
#define RPG_CLIENT_DIALOGUEMANAGER__INITGROUPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB78E790)
#define RPG_CLIENT_DIALOGUEMANAGER__LOADROGUENPCCONFIG_OFFSET UNITYSDK_OFFSET(0xB74BBA0)
#define RPG_CLIENT_DIALOGUEMANAGER__LOOKATDIALOGENTITY_OFFSET UNITYSDK_OFFSET(0xB78EA50)
#define RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_DATA_OFFSET UNITYSDK_OFFSET(0xB78CF20)
#define RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_GRAPH_OFFSET UNITYSDK_OFFSET(0xB78D1C0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xB78CAB0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB78CA60)
#define RPG_CLIENT_DIALOGUEMANAGER__ONBEFOREENTERNEXTROGUEROOM_OFFSET UNITYSDK_OFFSET(0xB78F1D0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFINISHDIALOGUEGROUP_OFFSET UNITYSDK_OFFSET(0xB78B620)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFINISHROGUECOMMONDIALOGUESCRSP_OFFSET UNITYSDK_OFFSET(0xB74C200)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFREEDIALOGUEFINISH_OFFSET UNITYSDK_OFFSET(0xB78E110)
#define RPG_CLIENT_DIALOGUEMANAGER__ONPLAYERTELEPORTWITHINMAP_OFFSET UNITYSDK_OFFSET(0xB78CC90)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITADD_OFFSET UNITYSDK_OFFSET(0xB74C470)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITRELEASE_OFFSET UNITYSDK_OFFSET(0xB74C550)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0xB78C480)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSERVERENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xB78E1D0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74D930)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTFIRSTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB74FA80)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTSECONDDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB78B180)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xB78CD30)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSYNCMISSION_OFFSET UNITYSDK_OFFSET(0xB78C3E0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONTEXTJOINQUERYFINISH_OFFSET UNITYSDK_OFFSET(0xB78C430)
#define RPG_CLIENT_DIALOGUEMANAGER__PERFORMANCEUNLOADBEGIN_OFFSET UNITYSDK_OFFSET(0xB78E170)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINDEFAULTMODE_OFFSET UNITYSDK_OFFSET(0xB74C750)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINNONPCMODE_OFFSET UNITYSDK_OFFSET(0xB74CFF0)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROUGEEVENT_OFFSET UNITYSDK_OFFSET(0xB74C670)
#define RPG_CLIENT_DIALOGUEMANAGER__SETVERIFYINTERACTINGENTITY_OFFSET UNITYSDK_OFFSET(0xB78C4D0)
#define RPG_CLIENT_DIALOGUEMANAGER__SHOULDTICKDIALOUG_OFFSET UNITYSDK_OFFSET(0xB74EEA0)
#define RPG_CLIENT_DIALOGUEMANAGER__STARTDIALOGUEFORROGUE_OFFSET UNITYSDK_OFFSET(0xB74D7A0)
#define RPG_CLIENT_DIALOGUEMANAGER__STOPLOOKATDIALOGENTITY_OFFSET UNITYSDK_OFFSET(0xB78C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueManager_TypeDefinitionIndex = 63873;

	class DialogueManager : public ::System::Object
	{
	public:
		// static const ::System::Single _seriesInitTime; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _customStringsToTriggerAfterDialogue; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_339DA25E4BE88A4F*>* _rogueNPCConfigs; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* _talkTriggerBools; // 0x20
		::System::Action* _DialogueEndCallbacks; // 0x28
		::System::String* _InteractEntityStartLevelGraphPath; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredDialogueID_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _GroupEventsToTriggerAfterDialogue; // 0x40
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::RogueDialogueEventConfig*>* _rogueDialogueEventConfigs; // 0x48
		::RPG::GameCore::GameEntity* _InteractEntityCacheCustomData; // 0x50
		::RPG::GameCore::LevelGraphComponent* _ActGraphComponent; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::DialoguePhase>* _talkTriggerPhase; // 0x60
		::RPG::GameCore::TalkTrigger* _curTalkTrigger; // 0x68
		::RPG::GameCore::GameEntity* _InteractEntity; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _InteractEntityLevelGraphPathDict; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::TalkTrigger*>* _talkTriggers; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* _RogueActionResultWaitToEnd; // 0x88
		::RPG::GameCore::RogueDialogueEventConfig* _CurRogueLegacyNoNPCOptionConfig; // 0x90
		::RPG::Client::DialogueMode DialogueMode; // 0x98
		::System::Single _seriesInitTimer; // 0x9C
		::System::UInt32 _battleAreaInstanceID; // 0xA0
		::System::UInt32 _CurNoNPCUniqueDialogueID; // 0xA4
		::RPG::GameCore::RogueSubMode _CurRogueRecordDialogueSubMode_k__BackingField; // 0xA8
		::System::Boolean _CurRogueRecordIsShowExitBtn_k__BackingField; // 0xAC
		::System::Boolean _IsInRoguePendingClose; // 0xAD
		::System::Boolean _IsInPerformance_k__BackingField; // 0xAE
		::System::Boolean _IsInDialogue; // 0xAF
		::System::Boolean _IsWaitingRougeActionResultToEnd; // 0xB0
		::System::Boolean _hasSeriesInited; // 0xB1
		::System::UInt32 _blockID; // 0xB4
		::System::UInt32 LastDialogueID; // 0xB8
		::System::UInt32 _triggerBattleEvnetID; // 0xBC
		::RPG::Client::DialoguePhase DialoguePhase; // 0xC0
		::System::UInt32 _battleAreaGroupID; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SetInteractEntity(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::LevelGraphValueSource* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SETINTERACTENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearInteractEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_CLEARINTERACTENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetInteractEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITY_OFFSET))(this);
		}

		::System::String* GetInteractEntityEndLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITYENDLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Void StartRogueDialogue(::RPG::Client::DialogueMode a1, ::System::UInt32 a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUEDIALOGUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartRogueLegacyDialogue(::RPG::Client::DialogueMode a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUELEGACYDIALOGUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartRogueRecordDialogue(::RPG::GameCore::RogueSubMode a1, ::System::String* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUERECORDDIALOGUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetCurTalkEntityRogueNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUENPCID_OFFSET))(this);
		}

		::System::UInt32 GetCurTalkEntityRogueUniqueDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUEUNIQUEDIALOGUEID_OFFSET))(this);
		}

		::System::UInt32 GetCurTalkEntityProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYPROGRESS_OFFSET))(this);
		}

		::Class_1_339DA25E4BE88A4F* GetRogueNPCConfig(::System::UInt32 a1)
		{
			return ((::Class_1_339DA25E4BE88A4F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_OFFSET))(this, a1);
		}

		::Class_1_339DA25E4BE88A4F* GetRogueNPCConfig_CurTalkEntity()
		{
			return ((::Class_1_339DA25E4BE88A4F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueNPCDialogueConfig* GetRogueNPCDialogueConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RogueNPCDialogueConfig* GetRogueNPCDialogueConfig_CurTalkEntity()
		{
			return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig_CurTalkEntity()
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig_CurRogueLegacy()
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURROGUELEGACY_OFFSET))(this);
		}

		::System::Void _OnFinishRogueCommonDialogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONFINISHROGUECOMMONDIALOGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueDialogueActionWaitAdd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITADD_OFFSET))(this, a1);
		}

		::System::Void _OnRogueDialogueActionWaitRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITRELEASE_OFFSET))(this, a1);
		}

		::System::Boolean _ProcessRougeEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__PROCESSROUGEEVENT_OFFSET))(this);
		}

		::System::Boolean _ProcessRogueEventInDefaultMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINDEFAULTMODE_OFFSET))(this);
		}

		::System::Boolean _ProcessRogueEventInNoNPCMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINNONPCMODE_OFFSET))(this);
		}

		::System::Void _LoadRogueNPCConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__LOADROGUENPCCONFIG_OFFSET))(this, a1);
		}

		::System::Void _StartDialogueForRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__STARTDIALOGUEFORROGUE_OFFSET))(this);
		}

		::System::Void _ClearRogueDialogueCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__CLEARROGUEDIALOGUECACHE_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode get_CurRogueRecordDialogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDDIALOGUESUBMODE_OFFSET))(this);
		}

		::System::Void set_CurRogueRecordDialogueSubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDDIALOGUESUBMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_CurRogueRecordIsShowExitBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDISSHOWEXITBTN_OFFSET))(this);
		}

		::System::Void set_CurRogueRecordIsShowExitBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDISSHOWEXITBTN_OFFSET))(this, a1);
		}

		::System::Void StartDialogue(::RPG::Client::DialogueMode a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTDIALOGUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshTalkTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_REFRESHTALKTRIGGER_OFFSET))(this);
		}

		::System::UInt32 GetCurTalkEntityServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYSERVERENTITYID_OFFSET))(this);
		}

		::System::Void RecordCustomString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_RECORDCUSTOMSTRING_OFFSET))(this, a1);
		}

		::System::Void RecordGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_RECORDGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void ForceFinishCurDialogLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_FORCEFINISHCURDIALOGLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void TriggerEnter(::RPG::GameCore::TalkTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void TriggerExit(::RPG::GameCore::TalkTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void TriggerRefresh(::RPG::GameCore::TalkTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGERREFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 GetTalkFirstDialogue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETTALKFIRSTDIALOGUE_OFFSET))(this);
		}

		::System::Void TryLockInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRYLOCKINPUT_OFFSET))(this);
		}

		::System::Void TryUnlockInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRYUNLOCKINPUT_OFFSET))(this);
		}

		::System::Void TryInitSeries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRYINITSERIES_OFFSET))(this);
		}

		::System::Void InitSeries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_INITSERIES_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetDialogueMainRole()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__GETDIALOGUEMAINROLE_OFFSET))(this);
		}

		::System::Boolean _ShouldTickDialoug(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__SHOULDTICKDIALOUG_OFFSET))(this, a1);
		}

		::System::Void _DoClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__DOCLEAR_OFFSET))(this);
		}

		::System::Void _DoTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__DOTICK_OFFSET))(this);
		}

		::System::Void _OnStartDialogue(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTDIALOGUE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartFirstDialogue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTFIRSTDIALOGUE_OFFSET))(this, a1);
		}

		::System::Void _OnStartSecondDialogue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTSECONDDIALOGUE_OFFSET))(this, a1);
		}

		::System::Void _OnFinishDialogueGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONFINISHDIALOGUEGROUP_OFFSET))(this);
		}

		::System::Void _OnSyncMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSYNCMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnTextJoinQueryFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONTEXTJOINQUERYFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnRogueDialogueBattleEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEBATTLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _SetVerifyInteractingEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__SETVERIFYINTERACTINGENTITY_OFFSET))(this);
		}

		::System::Void SetReserveParamForDialogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SETRESERVEPARAMFORDIALOGUE_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTeleportWithinMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONPLAYERTELEPORTWITHINMAP_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Int32 _GetTalkTriggerByRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__GETTALKTRIGGERBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void _OnActGraphEnd_Data()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_DATA_OFFSET))(this);
		}

		::System::Void _OnActGraphEnd_Graph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_GRAPH_OFFSET))(this);
		}

		::System::Void _DoOnActGraphEnd_Graph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__DOONACTGRAPHEND_GRAPH_OFFSET))(this);
		}

		::System::Void TryEnterHeartDialDialoguePerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRYENTERHEARTDIALDIALOGUEPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnFreeDialogueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONFREEDIALOGUEFINISH_OFFSET))(this);
		}

		::System::Void _PerformanceUnloadBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__PERFORMANCEUNLOADBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnServerEntityRemove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSERVERENTITYREMOVE_OFFSET))(this, a1);
		}

		::System::Void _InitGroupComponent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__INITGROUPCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void _LookAtDialogEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__LOOKATDIALOGENTITY_OFFSET))(this, a1);
		}

		::System::Void _StopLookAtDialogEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__STOPLOOKATDIALOGENTITY_OFFSET))(this, a1);
		}

		::System::Void _FlushGroupEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__FLUSHGROUPEVENTS_OFFSET))(this);
		}

		::System::Void _HandleWorldShift(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__HANDLEWORLDSHIFT_OFFSET))(this, a1);
		}

		::System::Void _OnBeforeEnterNextRogueRoom(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONBEFOREENTERNEXTROGUEROOM_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DialogueEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_DIALOGUEENTITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TriggeredDialogueID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_TRIGGEREDDIALOGUEID_OFFSET))(this);
		}

		::System::Boolean get_IsInDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_ISINDIALOG_OFFSET))(this);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_IsInPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_ISINPERFORMANCE_OFFSET))(this, a1);
		}
	};
}
