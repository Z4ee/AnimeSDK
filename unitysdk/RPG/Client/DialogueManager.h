#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogueMode.h"
#include "unitysdk/RPG/Client/DialoguePhase.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_580C8814FDE85009;
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

#define RPG_CLIENT_DIALOGUEMANAGER_CLEARINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0x945AD50)
#define RPG_CLIENT_DIALOGUEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x945EDF0)
#define RPG_CLIENT_DIALOGUEMANAGER_FORCEFINISHCURDIALOGLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x945EA00)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYPROGRESS_OFFSET UNITYSDK_OFFSET(0x945B6D0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUENPCID_OFFSET UNITYSDK_OFFSET(0x945B3F0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYROGUEUNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x945B590)
#define RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x945E810)
#define RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITYENDLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x945AF90)
#define RPG_CLIENT_DIALOGUEMANAGER_GETINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0x945AF30)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURROGUELEGACY_OFFSET UNITYSDK_OFFSET(0x945BE50)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0x945BDE0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x945BBA0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0x945B9E0)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_OFFSET UNITYSDK_OFFSET(0x945B810)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_CURTALKENTITY_OFFSET UNITYSDK_OFFSET(0x945BB40)
#define RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_OFFSET UNITYSDK_OFFSET(0x945BA30)
#define RPG_CLIENT_DIALOGUEMANAGER_GETTALKFIRSTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945FA40)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDDIALOGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x945DE90)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDISSHOWEXITBTN_OFFSET UNITYSDK_OFFSET(0x945DEB0)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_DIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0x945B530)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_ISINDIALOG_OFFSET UNITYSDK_OFFSET(0x945FD50)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9464320)
#define RPG_CLIENT_DIALOGUEMANAGER_GET_TRIGGEREDDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x9464310)
#define RPG_CLIENT_DIALOGUEMANAGER_INITSERIES_OFFSET UNITYSDK_OFFSET(0x945FD00)
#define RPG_CLIENT_DIALOGUEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x945EA80)
#define RPG_CLIENT_DIALOGUEMANAGER_RECORDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x945E920)
#define RPG_CLIENT_DIALOGUEMANAGER_RECORDGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x945E990)
#define RPG_CLIENT_DIALOGUEMANAGER_REFRESHTALKTRIGGER_OFFSET UNITYSDK_OFFSET(0x945E320)
#define RPG_CLIENT_DIALOGUEMANAGER_SETINTERACTENTITY_OFFSET UNITYSDK_OFFSET(0x945AB40)
#define RPG_CLIENT_DIALOGUEMANAGER_SETRESERVEPARAMFORDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945FDB0)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDDIALOGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x945DEA0)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDISSHOWEXITBTN_OFFSET UNITYSDK_OFFSET(0x945DEC0)
#define RPG_CLIENT_DIALOGUEMANAGER_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9464330)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945B160)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUEDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945B0D0)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUELEGACYDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945B220)
#define RPG_CLIENT_DIALOGUEMANAGER_STARTROGUERECORDDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945B300)
#define RPG_CLIENT_DIALOGUEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x945F160)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x945E740)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x945E470)
#define RPG_CLIENT_DIALOGUEMANAGER_TRIGGERREFRESH_OFFSET UNITYSDK_OFFSET(0x945F8F0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYENTERHEARTDIALDIALOGUEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x94632E0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYINITSERIES_OFFSET UNITYSDK_OFFSET(0x945FCB0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x945FAB0)
#define RPG_CLIENT_DIALOGUEMANAGER_TRYUNLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x945FBD0)
#define RPG_CLIENT_DIALOGUEMANAGER__CLEARROGUEDIALOGUECACHE_OFFSET UNITYSDK_OFFSET(0x945CA00)
#define RPG_CLIENT_DIALOGUEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9464340)
#define RPG_CLIENT_DIALOGUEMANAGER__DOCLEAR_OFFSET UNITYSDK_OFFSET(0x945F340)
#define RPG_CLIENT_DIALOGUEMANAGER__DOONACTGRAPHEND_GRAPH_OFFSET UNITYSDK_OFFSET(0x945C090)
#define RPG_CLIENT_DIALOGUEMANAGER__DOTICK_OFFSET UNITYSDK_OFFSET(0x945F560)
#define RPG_CLIENT_DIALOGUEMANAGER__FLUSHGROUPEVENTS_OFFSET UNITYSDK_OFFSET(0x9462ED0)
#define RPG_CLIENT_DIALOGUEMANAGER__GETDIALOGUEMAINROLE_OFFSET UNITYSDK_OFFSET(0x945F7F0)
#define RPG_CLIENT_DIALOGUEMANAGER__GETTALKTRIGGERBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x9460EF0)
#define RPG_CLIENT_DIALOGUEMANAGER__HANDLEWORLDSHIFT_OFFSET UNITYSDK_OFFSET(0x9463B00)
#define RPG_CLIENT_DIALOGUEMANAGER__INITGROUPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x94611A0)
#define RPG_CLIENT_DIALOGUEMANAGER__LOADROGUENPCCONFIG_OFFSET UNITYSDK_OFFSET(0x945B8D0)
#define RPG_CLIENT_DIALOGUEMANAGER__LOOKATDIALOGENTITY_OFFSET UNITYSDK_OFFSET(0x94613F0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_DATA_OFFSET UNITYSDK_OFFSET(0x9462BC0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONACTGRAPHEND_GRAPH_OFFSET UNITYSDK_OFFSET(0x9462E70)
#define RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x9462720)
#define RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x94626D0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONBEFOREENTERNEXTROGUEROOM_OFFSET UNITYSDK_OFFSET(0x94641A0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFINISHDIALOGUEGROUP_OFFSET UNITYSDK_OFFSET(0x9461950)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFINISHROGUECOMMONDIALOGUESCRSP_OFFSET UNITYSDK_OFFSET(0x945BE90)
#define RPG_CLIENT_DIALOGUEMANAGER__ONFREEDIALOGUEFINISH_OFFSET UNITYSDK_OFFSET(0x94634F0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONPLAYERTELEPORTWITHINMAP_OFFSET UNITYSDK_OFFSET(0x9462930)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITADD_OFFSET UNITYSDK_OFFSET(0x945CA60)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITRELEASE_OFFSET UNITYSDK_OFFSET(0x945CAF0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x9462680)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSERVERENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x94635B0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x945DED0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTFIRSTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x94601C0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTARTSECONDDIALOGUE_OFFSET UNITYSDK_OFFSET(0x94614F0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0x94629D0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONSYNCMISSION_OFFSET UNITYSDK_OFFSET(0x94625E0)
#define RPG_CLIENT_DIALOGUEMANAGER__ONTEXTJOINQUERYFINISH_OFFSET UNITYSDK_OFFSET(0x9462630)
#define RPG_CLIENT_DIALOGUEMANAGER__PERFORMANCEUNLOADBEGIN_OFFSET UNITYSDK_OFFSET(0x9463550)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINDEFAULTMODE_OFFSET UNITYSDK_OFFSET(0x945CD20)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROGUEEVENTINNONPCMODE_OFFSET UNITYSDK_OFFSET(0x945D5A0)
#define RPG_CLIENT_DIALOGUEMANAGER__PROCESSROUGEEVENT_OFFSET UNITYSDK_OFFSET(0x945CC40)
#define RPG_CLIENT_DIALOGUEMANAGER__SETVERIFYINTERACTINGENTITY_OFFSET UNITYSDK_OFFSET(0x9461010)
#define RPG_CLIENT_DIALOGUEMANAGER__SHOULDTICKDIALOUG_OFFSET UNITYSDK_OFFSET(0x945F1E0)
#define RPG_CLIENT_DIALOGUEMANAGER__STARTDIALOGUEFORROGUE_OFFSET UNITYSDK_OFFSET(0x945DD40)
#define RPG_CLIENT_DIALOGUEMANAGER__STOPLOOKATDIALOGENTITY_OFFSET UNITYSDK_OFFSET(0x94624E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueManager_TypeDefinitionIndex = 55735;

	class DialogueManager : public ::System::Object
	{
	public:
		// static const ::System::Single _seriesInitTime; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_580C8814FDE85009*>* _rogueNPCConfigs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _InteractEntityLevelGraphPathDict; // 0x18
		::RPG::GameCore::RogueDialogueEventConfig* _CurRogueLegacyNoNPCOptionConfig; // 0x20
		::System::String* _InteractEntityStartLevelGraphPath; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _GroupEventsToTriggerAfterDialogue; // 0x30
		::RPG::GameCore::TalkTrigger* _curTalkTrigger; // 0x38
		::RPG::GameCore::GameEntity* _InteractEntity; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* _RogueActionResultWaitToEnd; // 0x48
		::RPG::GameCore::GameEntity* _InteractEntityCacheCustomData; // 0x50
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::RogueDialogueEventConfig*>* _rogueDialogueEventConfigs; // 0x58
		::System::Action* _DialogueEndCallbacks; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::TalkTrigger*>* _talkTriggers; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::DialoguePhase>* _talkTriggerPhase; // 0x70
		::System::Collections::Generic::List_1<::System::Boolean>* _talkTriggerBools; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredDialogueID_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* _customStringsToTriggerAfterDialogue; // 0x88
		::RPG::GameCore::LevelGraphComponent* _ActGraphComponent; // 0x90
		::RPG::Client::DialogueMode DialogueMode; // 0x98
		::System::UInt32 LastDialogueID; // 0x9C
		::System::UInt32 _battleAreaGroupID; // 0xA0
		::System::UInt32 _blockID; // 0xA4
		::System::Single _seriesInitTimer; // 0xA8
		::System::UInt32 _triggerBattleEvnetID; // 0xAC
		::System::UInt32 _battleAreaInstanceID; // 0xB0
		::System::Boolean _IsInPerformance_k__BackingField; // 0xB4
		::System::Boolean _IsInDialogue; // 0xB5
		::System::Boolean _hasSeriesInited; // 0xB6
		::System::Boolean _CurRogueRecordIsShowExitBtn_k__BackingField; // 0xB7
		::System::UInt32 _CurNoNPCUniqueDialogueID; // 0xB8
		::System::Boolean _IsInRoguePendingClose; // 0xBC
		::System::Boolean _IsWaitingRougeActionResultToEnd; // 0xBD
		::RPG::GameCore::RogueSubMode _CurRogueRecordDialogueSubMode_k__BackingField; // 0xC0
		::RPG::Client::DialoguePhase DialoguePhase; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SetInteractEntity(::RPG::GameCore::GameEntity* interactEntity, ::System::String* startLevelGraphPath, ::RPG::GameCore::LevelGraphValueSource* graphValueSource, ::RPG::GameCore::LevelGraphValueSource* overrideValueSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SETINTERACTENTITY_OFFSET))(this, interactEntity, startLevelGraphPath, graphValueSource, overrideValueSource);
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

		::System::Void StartRogueDialogue(::RPG::Client::DialogueMode dialogueMode, ::System::UInt32 uniqueDialogueID, ::System::String* dialoguePath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUEDIALOGUE_OFFSET))(this, dialogueMode, uniqueDialogueID, dialoguePath, callback);
		}

		::System::Void StartRogueLegacyDialogue(::RPG::Client::DialogueMode dialogueMode, ::System::String* actJsonPath, ::System::String* optJsonPath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUELEGACYDIALOGUE_OFFSET))(this, dialogueMode, actJsonPath, optJsonPath, callback);
		}

		::System::Void StartRogueRecordDialogue(::RPG::GameCore::RogueSubMode subMode, ::System::String* actJsonPath, ::System::Boolean isShowExitBtn, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTROGUERECORDDIALOGUE_OFFSET))(this, subMode, actJsonPath, isShowExitBtn, callback);
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

		::Class_1_580C8814FDE85009* GetRogueNPCConfig(::System::UInt32 rogueNPCID)
		{
			return ((::Class_1_580C8814FDE85009*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_OFFSET))(this, rogueNPCID);
		}

		::Class_1_580C8814FDE85009* GetRogueNPCConfig_CurTalkEntity()
		{
			return ((::Class_1_580C8814FDE85009*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCCONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueNPCDialogueConfig* GetRogueNPCDialogueConfig(::System::UInt32 rogueNPCID, ::System::UInt32 progress)
		{
			return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_OFFSET))(this, rogueNPCID, progress);
		}

		::RPG::GameCore::RogueNPCDialogueConfig* GetRogueNPCDialogueConfig_CurTalkEntity()
		{
			return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUENPCDIALOGUECONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig(::System::UInt32 rogueNPCID, ::System::UInt32 progress)
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_OFFSET))(this, rogueNPCID, progress);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig_CurTalkEntity()
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURTALKENTITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueDialogueEventConfig* GetRogueDialogueEventConfig_CurRogueLegacy()
		{
			return ((::RPG::GameCore::RogueDialogueEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETROGUEDIALOGUEEVENTCONFIG_CURROGUELEGACY_OFFSET))(this);
		}

		::System::Void _OnFinishRogueCommonDialogueScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONFINISHROGUECOMMONDIALOGUESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRogueDialogueActionWaitAdd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITADD_OFFSET))(this, arg);
		}

		::System::Void _OnRogueDialogueActionWaitRelease(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEACTIONWAITRELEASE_OFFSET))(this, arg);
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

		::System::Void _LoadRogueNPCConfig(::System::UInt32 rogueNPCID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__LOADROGUENPCCONFIG_OFFSET))(this, rogueNPCID);
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

		::System::Void set_CurRogueRecordDialogueSubMode(::RPG::GameCore::RogueSubMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDDIALOGUESUBMODE_OFFSET))(this, value);
		}

		::System::Boolean get_CurRogueRecordIsShowExitBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GET_CURROGUERECORDISSHOWEXITBTN_OFFSET))(this);
		}

		::System::Void set_CurRogueRecordIsShowExitBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_CURROGUERECORDISSHOWEXITBTN_OFFSET))(this, value);
		}

		::System::Void StartDialogue(::RPG::Client::DialogueMode dialogueMode, ::System::String* dialoguePath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogueMode, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_STARTDIALOGUE_OFFSET))(this, dialogueMode, dialoguePath, callback);
		}

		::System::Void RefreshTalkTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_REFRESHTALKTRIGGER_OFFSET))(this);
		}

		::System::UInt32 GetCurTalkEntityServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_GETCURTALKENTITYSERVERENTITYID_OFFSET))(this);
		}

		::System::Void RecordCustomString(::System::String* customString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_RECORDCUSTOMSTRING_OFFSET))(this, customString);
		}

		::System::Void RecordGroupEvent(::System::String* groupEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_RECORDGROUPEVENT_OFFSET))(this, groupEvent);
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

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void TriggerEnter(::RPG::GameCore::TalkTrigger* talkTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGERENTER_OFFSET))(this, talkTrigger);
		}

		::System::Void TriggerExit(::RPG::GameCore::TalkTrigger* talkTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGEREXIT_OFFSET))(this, talkTrigger);
		}

		::System::Void TriggerRefresh(::RPG::GameCore::TalkTrigger* talkTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_TRIGGERREFRESH_OFFSET))(this, talkTrigger);
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

		::System::Boolean _ShouldTickDialoug(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__SHOULDTICKDIALOUG_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DoClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__DOCLEAR_OFFSET))(this);
		}

		::System::Void _DoTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__DOTICK_OFFSET))(this);
		}

		::System::Void _OnStartDialogue(::System::String* dialoguePath, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTDIALOGUE_OFFSET))(this, dialoguePath, callback);
		}

		::System::Void _OnStartFirstDialogue(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTFIRSTDIALOGUE_OFFSET))(this, arg);
		}

		::System::Void _OnStartSecondDialogue(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTARTSECONDDIALOGUE_OFFSET))(this, arg);
		}

		::System::Void _OnFinishDialogueGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONFINISHDIALOGUEGROUP_OFFSET))(this);
		}

		::System::Void _OnSyncMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSYNCMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTextJoinQueryFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONTEXTJOINQUERYFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnRogueDialogueBattleEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONROGUEDIALOGUEBATTLEEVENT_OFFSET))(this, arg);
		}

		::System::Void _SetVerifyInteractingEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__SETVERIFYINTERACTINGENTITY_OFFSET))(this);
		}

		::System::Void SetReserveParamForDialogue(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SETRESERVEPARAMFORDIALOGUE_OFFSET))(this, b);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerTeleportWithinMap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONPLAYERTELEPORTWITHINMAP_OFFSET))(this, arg);
		}

		::System::Void _OnStoryModeChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSTORYMODECHANGE_OFFSET))(this, arg);
		}

		::System::Int32 _GetTalkTriggerByRuntimeID(::System::UInt32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__GETTALKTRIGGERBYRUNTIMEID_OFFSET))(this, id);
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

		::System::Void _PerformanceUnloadBegin(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__PERFORMANCEUNLOADBEGIN_OFFSET))(this, arg);
		}

		::System::Void _OnServerEntityRemove(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONSERVERENTITYREMOVE_OFFSET))(this, arg);
		}

		::System::Void _InitGroupComponent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntity* dialogueEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__INITGROUPCOMPONENT_OFFSET))(this, entity, dialogueEntity);
		}

		::System::Void _LookAtDialogEntity(::RPG::GameCore::GameEntity* host)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__LOOKATDIALOGENTITY_OFFSET))(this, host);
		}

		::System::Void _StopLookAtDialogEntity(::RPG::GameCore::GameEntity* host)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__STOPLOOKATDIALOGENTITY_OFFSET))(this, host);
		}

		::System::Void _FlushGroupEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__FLUSHGROUPEVENTS_OFFSET))(this);
		}

		::System::Void _HandleWorldShift(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__HANDLEWORLDSHIFT_OFFSET))(this, param);
		}

		::System::Void _OnBeforeEnterNextRogueRoom(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER__ONBEFOREENTERNEXTROGUEROOM_OFFSET))(this, param);
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

		::System::Void set_IsInPerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMANAGER_SET_ISINPERFORMANCE_OFFSET))(this, value);
		}
	};
}
