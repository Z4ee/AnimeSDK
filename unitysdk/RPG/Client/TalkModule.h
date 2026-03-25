#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_36F606812EC9EB69_5_Enum_3_3D1973FEBEEBFC47_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TalkModule_DialogueEventKey.h"
#include "unitysdk/RPG/Client/TalkModule_OptionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_755;
class Class_0_16E4307DCC419505_756;
class Class_0_16E4307DCC419505_757;
class Class_1_12792AF8AF445603;
class Class_1_36F606812EC9EB69_6;
class Class_1_59D81C4BFF1AEBE3;
class Class_1_633744E9733BE855_10;
class Class_1_99BD961747420BEB_53;
class Class_1_C09BF55E595BAC4D;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::Client { class TalkHistoryData; }
namespace RPG::Client { class TalkModule_MissionTalkCache; }
namespace RPG::Client { class TalkOptionData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class PlayMultiVoiceTalk; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class RogueOptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xA53F1C0)
#define RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xA53F060)
#define RPG_CLIENT_TALKMODULE_BEGINRECORD_OFFSET UNITYSDK_OFFSET(0xA53C9F0)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET UNITYSDK_OFFSET(0xA53F2E0)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xA53E000)
#define RPG_CLIENT_TALKMODULE_ENDRECORD_OFFSET UNITYSDK_OFFSET(0xA53CA70)
#define RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET UNITYSDK_OFFSET(0xA543C70)
#define RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET UNITYSDK_OFFSET(0xA542200)
#define RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET UNITYSDK_OFFSET(0xA541F40)
#define RPG_CLIENT_TALKMODULE_GETCURRENTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xA544950)
#define RPG_CLIENT_TALKMODULE_GETCURRENTSKIPDEFAULTOPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA5449C0)
#define RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET UNITYSDK_OFFSET(0xA53E580)
#define RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET UNITYSDK_OFFSET(0xA543940)
#define RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xA53F400)
#define RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xA53DEA0)
#define RPG_CLIENT_TALKMODULE_GET_ISWAITINGCHOICE_OFFSET UNITYSDK_OFFSET(0xA5477E0)
#define RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xA53D7E0)
#define RPG_CLIENT_TALKMODULE_GET__ISWAITINGTALKEVENT_OFFSET UNITYSDK_OFFSET(0xA544CD0)
#define RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA541DF0)
#define RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA543820)
#define RPG_CLIENT_TALKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA542700)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET UNITYSDK_OFFSET(0xA53CAE0)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET UNITYSDK_OFFSET(0xA53CB90)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET UNITYSDK_OFFSET(0xA53CC20)
#define RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xA53F0C0)
#define RPG_CLIENT_TALKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA542C90)
#define RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET UNITYSDK_OFFSET(0xA543220)
#define RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET UNITYSDK_OFFSET(0xA543430)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET UNITYSDK_OFFSET(0xA53CEF0)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET UNITYSDK_OFFSET(0xA53CC90)
#define RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET UNITYSDK_OFFSET(0xA53CF50)
#define RPG_CLIENT_TALKMODULE_REFRESHCURMAPSERIESID_OFFSET UNITYSDK_OFFSET(0xA544100)
#define RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xA53F260)
#define RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA543130)
#define RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA5431D0)
#define RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA543090)
#define RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET UNITYSDK_OFFSET(0xA542040)
#define RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET UNITYSDK_OFFSET(0xA541FF0)
#define RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA5430E0)
#define RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA543180)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA543040)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA542D00)
#define RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xA53DEB0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xA541BB0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xA541AF0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET UNITYSDK_OFFSET(0xA541C70)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET UNITYSDK_OFFSET(0xA541970)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0xA53F340)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xA53FB50)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xA53FA60)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xA53F6B0)
#define RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xA53CFC0)
#define RPG_CLIENT_TALKMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xA542780)
#define RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xA543DC0)
#define RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xA53CD70)
#define RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA546E40)
#define RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5462C0)
#define RPG_CLIENT_TALKMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA547FF0)
#define RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET UNITYSDK_OFFSET(0xA53EBF0)
#define RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET UNITYSDK_OFFSET(0xA53E6B0)
#define RPG_CLIENT_TALKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5477F0)
#define RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xA544D30)
#define RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET UNITYSDK_OFFSET(0xA545880)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET UNITYSDK_OFFSET(0xA540FD0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xA5410B0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xA5415C0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA541900)
#define RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xA53D450)
#define RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xA53FBB0)
#define RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA53D850)
#define RPG_CLIENT_TALKMODULE__HISTORYUNINIT_OFFSET UNITYSDK_OFFSET(0xA53C920)
#define RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET UNITYSDK_OFFSET(0xA5460B0)
#define RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET UNITYSDK_OFFSET(0xA5451B0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET UNITYSDK_OFFSET(0xA5456C0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET UNITYSDK_OFFSET(0xA5455C0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA5453F0)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA53ED50)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET UNITYSDK_OFFSET(0xA53DEC0)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA53EE70)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET UNITYSDK_OFFSET(0xA53EFB0)
#define RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA547790)
#define RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0xA547010)
#define RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xA546D00)
#define RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xA5467C0)
#define RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA546550)
#define RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA546710)
#define RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA53D1F0)
#define RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA53D270)
#define RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA5423B0)
#define RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA53FC80)
#define RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA53DD60)
#define RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xA542330)
#define RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET UNITYSDK_OFFSET(0xA546DF0)
#define RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET UNITYSDK_OFFSET(0xA53DDE0)
#define RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xA5403C0)
#define RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET UNITYSDK_OFFSET(0xA53DBF0)
#define RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xA53DA60)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA540020)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA540AA0)
#define RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET UNITYSDK_OFFSET(0xA5435E0)
#define RPG_CLIENT_TALKMODULE__PLAYOPTIONTALK_B__101_0_OFFSET UNITYSDK_OFFSET(0xA548010)
#define RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET UNITYSDK_OFFSET(0xA542DB0)
#define RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA545A90)
#define RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0xA547340)
#define RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xA53D080)
#define RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xA53D3C0)
#define RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET UNITYSDK_OFFSET(0xA53D2E0)
#define RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET UNITYSDK_OFFSET(0xA5472E0)
#define RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xA53F130)
#define RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA545F90)
#define RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA545EB0)
#define RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xA53E7C0)
#define RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET UNITYSDK_OFFSET(0xA547690)
#define RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET UNITYSDK_OFFSET(0xA546240)
#define RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xA544C20)
#define RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET UNITYSDK_OFFSET(0xA53D510)
#define RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__130_0_OFFSET UNITYSDK_OFFSET(0xA548020)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA548030)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA5480C0)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA548180)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA548120)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_TypeDefinitionIndex = 55525;

	class TalkModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__MAX_HISTORY_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0xE400);
		}
		static ::System::Boolean* StaticGet_AutoResumCacheMissionTalk()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0xE404);
		}
		// static const ::System::Int32 MAX_OPTION_NUM = 0x5; // 0x0
		// static const ::System::String* WAIT_DIALOGUE_EVENT; // 0x0
		::Class_0_16E4307DCC419505_756* _SetOptionTalkTriggeredStrategy; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggeredLegacy; // 0x18
		::Class_0_16E4307DCC419505_757* _CustomOptionFilter; // 0x20
		::RPG::Client::UIController* _TopUIControllerHasMissionTalk; // 0x28
		::RPG::GameCore::TaskContext* _OptionContext; // 0x30
		::Class_0_16E4307DCC419505_755* _SetIconStrategy; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TalkModule_DialogueEventKey, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueStoryEventsBeenTriggered1D3; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* _CurOptionInfos; // 0x48
		::RPG::Client::TalkModule_MissionTalkCache* _MissionTalkCache; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C09BF55E595BAC4D*>*>* _DialogueEventParamsLegacy; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_99BD961747420BEB_53*>* _RogueDialogueInfo; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ReceivedTalkEventIDs; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* _HistoryDatas_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered; // 0x78
		::System::Action* _WaitAeonTalkScRspCallback; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::System::UInt32>*>* _SeriesTalkCountPromises; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _NPCListWhenEnterAdventurePhase; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0x98
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreparedNPCIDs; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C09BF55E595BAC4D*>*>* _DialogueEventParams; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _AeonTalkInfos; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered1D3Legacy; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* TalkProgress; // 0xC0
		::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* _MissionTalkUIControllers; // 0xC8
		::Class_1_59D81C4BFF1AEBE3* DialogueEventInfo; // 0xD0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingNPCIDs; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C09BF55E595BAC4D*>*>* _DialogueEventParams1D3Legacy; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SeriesTalkCount; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDClientTriggered; // 0xF0
		::System::UInt32 _CurAeonTalkRogueNPCID; // 0xF8
		::RPG::Client::TalkModule_OptionType _CachedOptionType; // 0xFC
		::RPG::Client::TextID _CachedAsideID; // 0x100
		::System::Boolean WaitAeonTalkScRsp; // 0x110
		::System::Boolean _MarkTriggeredOption; // 0x111
		::System::Boolean _IsWaitingMissionData; // 0x112
		::RPG::MVector3 _TriggeredPosition; // 0x114
		::System::Boolean _IsWaitingChoice; // 0x120
		::System::Boolean _IsRecording; // 0x121

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CCTOR_OFFSET))();
		}

		::System::Void _HistoryUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__HISTORYUNINIT_OFFSET))(this);
		}

		::System::Void BeginRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_BEGINRECORD_OFFSET))(this);
		}

		::System::Void EndRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ENDRECORD_OFFSET))(this);
		}

		::System::Boolean IsHistoryItemContinuing(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET))(this, index);
		}

		::System::Boolean IsHistoryItemIconSpecial(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET))(this, index);
		}

		::System::Boolean IsHistoryItemLatest(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET))(this, index);
		}

		::System::Void RecordItemHistory(::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* configList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET))(this, configList);
		}

		::System::Void RecordItemHistory_1(::RPG::GameCore::MissionItemConfigList* configList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET))(this, configList);
		}

		::System::Void RecordReadHistory(::System::UInt32 bookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET))(this, bookID);
		}

		::System::Void TryRecordAsideHistory(::RPG::GameCore::PlayScreenTransfer* screenTransfer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET))(this, screenTransfer);
		}

		::System::Void _OnEnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void _RecordSimpleHistory(::System::UInt32 talkSentenceID, ::System::UInt32 voiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET))(this, talkSentenceID, voiceID);
		}

		::System::Void _RecordOptionHistory(::RPG::GameCore::OptionTalkInfo* optionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET))(this, optionInfo);
		}

		::System::Void _RecordAsideHistory(::System::UInt32 talkSentenceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET))(this, talkSentenceID);
		}

		::System::Void _AddHistoryData(::RPG::Client::TalkHistoryData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkHistoryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET))(this, data);
		}

		::System::Void _UpdateAsideCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET))(this);
		}

		::System::Void _HistoryAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnStoryModeChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnSimpleTalkShown(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET))(this, arg);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, arg);
		}

		::System::Void _OnSelectItemConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* get_HistoryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET))(this);
		}

		::System::Void set_HistoryDatas(::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET))(this, value);
		}

		::RPG::Client::TalkHistoryData* get_LastHistoryData()
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET))(this);
		}

		::System::Void _MissionTalkUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET))(this);
		}

		::System::Void CacheMissionTalk(::System::UInt32 curIndex, ::System::Collections::Generic::List_1<::System::UInt32>* talkSentenceIDs, ::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET))(this, curIndex, talkSentenceIDs, subMissionID);
		}

		::System::UInt32 GetMissionTalkStartIndexAndClearCache(::RPG::GameCore::PlayMissionTalk* taskConfig)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET))(this, taskConfig);
		}

		::System::Void _TryResumCacheMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET))(this);
		}

		::System::Boolean _CheckIsSameFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET))(this);
		}

		::System::Boolean _CheckSameWithCache(::RPG::GameCore::PlayMissionTalk* taskConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET))(this, taskConfig);
		}

		::System::Void _MissionTalkAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _MissionTalk_OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _MissionTalk_OnMainPageShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET))(this, arg);
		}

		::System::Void AdvPlayMissionTalk(::RPG::GameCore::PlayMissionTalk* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET))(this, config);
		}

		::System::Boolean IsTopUIControllerHasMissionTalk(::RPG::Client::UIController* uiController)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this, uiController);
		}

		::System::Void AddMissionTalkUIController(::RPG::Client::UIController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET))(this, uiController);
		}

		::System::Void RemoveMissionTalkUIController(::RPG::Client::UIController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET))(this, uiController);
		}

		::System::Void _RefreshTopUIControllerHasMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this);
		}

		::System::Void CacheMissionTalkIsPlayed(::System::String* uiLuaName, ::System::Boolean isPlayed, ::System::Boolean isShowing)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET))(this, uiLuaName, isPlayed, isShowing);
		}

		::Class_1_99BD961747420BEB_53* TryGetRogueCommonDialogueInfo(::System::UInt32 uniqueDialogueID)
		{
			return ((::Class_1_99BD961747420BEB_53*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET))(this, uniqueDialogueID);
		}

		::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_53*>* GetRogueCommonDialogueInfoListByOwnerType(::Class_1_36F606812EC9EB69_5_Enum_3_3D1973FEBEEBFC47_3 dialogueType)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_53*>*(*)(::PVOID, ::Class_1_36F606812EC9EB69_5_Enum_3_3D1973FEBEEBFC47_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET))(this, dialogueType);
		}

		::Class_1_12792AF8AF445603* TryGetRogueCommonDialogueOption(::System::UInt32 uniqueDialogueID, ::System::UInt32 optionID)
		{
			return ((::Class_1_12792AF8AF445603*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET))(this, uniqueDialogueID, optionID);
		}

		::Class_1_12792AF8AF445603* TryGetRogueCommonDialogueOptionByDialogueMode(::System::UInt32 optionID)
		{
			return ((::Class_1_12792AF8AF445603*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET))(this, optionID);
		}

		::Class_1_12792AF8AF445603* TryGetRogueCommonDialogueOptionByDialogueEntity(::System::UInt32 optionID)
		{
			return ((::Class_1_12792AF8AF445603*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET))(this, optionID);
		}

		::System::Void _OnGetRogueCommonDialogueDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncRogueCommonDialogueDataScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSelectRogueCommonDialogueOptionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncRogueCommonDialogueOptionFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 _GetRogueUniqueDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET))(this);
		}

		::RPG::Client::RogueTalkOptionDataExt* _GenerateRogueOptionDataExt(::RPG::GameCore::OptionTalkInfo* info)
		{
			return ((::RPG::Client::RogueTalkOptionDataExt*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET))(this, info);
		}

		::System::Void _GenerateRogueOptionDisplayInfo(::RPG::GameCore::RogueOptionTalkInfo* rogueInfo, ::RPG::Client::RogueTalkOptionDataExt* dstRogueDataExt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET))(this, rogueInfo, dstRogueDataExt);
		}

		::System::Void _GenerateRogueOptionEffectInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36F606812EC9EB69_6*>* protoEffectList, ::RPG::Client::RogueTalkOptionDataExt* dstRogueDataExt)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36F606812EC9EB69_6*>*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET))(this, protoEffectList, dstRogueDataExt);
		}

		::System::Void _GenerateRogueOptionEffectNousValueChange(::Class_1_633744E9733BE855_10* protoEffect, ::RPG::Client::RogueTalkOptionDataExt* dstRogueDataExt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_10*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET))(this, protoEffect, dstRogueDataExt);
		}

		::Class_1_C09BF55E595BAC4D* TryGetDialogueEventParam(::System::UInt32 uniqueDialogueID, ::System::UInt32 dialogueEventID)
		{
			return ((::Class_1_C09BF55E595BAC4D*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET))(this, uniqueDialogueID, dialogueEventID);
		}

		::Class_1_C09BF55E595BAC4D* TryGetDialogueEventParamByDialogueMode(::System::UInt32 dialogueEventID)
		{
			return ((::Class_1_C09BF55E595BAC4D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET))(this, dialogueEventID);
		}

		::Class_1_C09BF55E595BAC4D* TryGetDialogueEventParamByDialogueEntity(::System::UInt32 dialogueEventID)
		{
			return ((::Class_1_C09BF55E595BAC4D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET))(this, dialogueEventID);
		}

		::System::Boolean HasShardDialogueEventBeenTriggered(::System::UInt32 layer, ::System::UInt32 dialogueEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET))(this, layer, dialogueEvent);
		}

		::Class_1_C09BF55E595BAC4D* TryGetDialogueEventParamLegacy(::System::UInt32 rogueNPCID, ::System::UInt32 dialogueEvent)
		{
			return ((::Class_1_C09BF55E595BAC4D*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET))(this, rogueNPCID, dialogueEvent);
		}

		::System::Void GetChessRogueStoryAeonTalkInfo(::System::UInt32 rogueNPCID, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET))(this, rogueNPCID, callback);
		}

		::System::Void SetCurAeonTalkRogueNPCID(::System::UInt32 rogueNPCID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET))(this, rogueNPCID);
		}

		::System::Void SetAeonTalk(::System::UInt32 rogueNPCID, ::System::UInt32 aeonTalkID, ::System::UInt32 assigned)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET))(this, rogueNPCID, aeonTalkID, assigned);
		}

		::System::UInt32 GetAeonTalk(::System::UInt32 aeonTalkID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET))(this, aeonTalkID);
		}

		::System::Void _OnSelectChessRogueSubStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetChessRogueStoryAeonTalkInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SetTalkTriggered(::RPG::GameCore::GameEntity* triggerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET))(this, triggerEntity);
		}

		::System::Void SetTalkTriggeredStrategy(::Class_0_16E4307DCC419505_756* strategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_756*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void RemoveTalkTriggeredStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkIconStrategy(::Class_0_16E4307DCC419505_755* strategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_755*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void RemoveTalkIconStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkOptionFilterStrategy(::Class_0_16E4307DCC419505_757* strategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_757*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void RemoveTalkOptionFilterStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET))(this);
		}

		::System::Boolean PlayMultiVoiceTalk(::RPG::GameCore::PlayMultiVoiceTalk* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET))(this, config);
		}

		::System::Void PlayOptionTalk(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* infos, ::RPG::GameCore::GameEntity* gameEntity, ::System::Boolean markTriggerOption, ::RPG::Client::TalkModule_OptionType optionType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET))(this, infos, gameEntity, markTriggerOption, optionType);
		}

		::System::Boolean IfSeriesTriggered(::RPG::Client::MapNpcDef* npc)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET))(this, npc);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GetNPCTalkCountPromise(::RPG::Client::MapNpcDef* npc)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET))(this, npc);
		}

		::System::Void FinishTalk(::System::UInt32 seriesID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET))(this, seriesID);
		}

		::System::Void ValidateDialogGroupInDefaultDialogueMode(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET))(this, datas);
		}

		::System::Void RefreshCurMapSeriesID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REFRESHCURMAPSERIESID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* GetCurrentOptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCURRENTOPTIONDATALIST_OFFSET))(this);
		}

		::System::Int32 GetCurrentSkipDefaultOptionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCURRENTSKIPDEFAULTOPTIONINDEX_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OptionMissionsPrepared(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* infos)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET))(this, infos);
		}

		::System::Void _PrepareTalkEvents(::RPG::GameCore::GameEntity* talkingEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET))(this, talkingEntity);
		}

		::System::Void _TryShowTalkOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET))(this);
		}

		::System::Void _DoShowTalkOption(::RPG::Client::TalkModule_OptionType optionType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET))(this, optionType);
		}

		::System::Void _ProcessOptionAvailable(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* optionDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET))(this, optionDatas);
		}

		::System::Void _SetTriggeredByStrategy(::RPG::GameCore::OptionTalkInfo* info, ::RPG::Client::TalkOptionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET))(this, info, data);
		}

		::System::Void _SetIconByStrategy(::RPG::GameCore::OptionTalkInfo* info, ::RPG::Client::TalkOptionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET))(this, info, data);
		}

		::System::Boolean _IsMissionMutexEnabled(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* infos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET))(this, infos);
		}

		::System::Boolean _IsOptionVisible(::RPG::GameCore::OptionTalkInfo* info, ::System::Boolean hasMissionMutex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET))(this, info, hasMissionMutex);
		}

		::System::Boolean _IsOptionVisibleByPredicate(::RPG::GameCore::OptionTalkInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET))(this, info);
		}

		::System::Boolean _IsOptionVisibleByRogueEvent(::RPG::GameCore::RogueOptionTalkInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET))(this, info);
		}

		::RPG::Client::TalkOptionData* _GenerateOptionData(::RPG::GameCore::OptionTalkInfo* info, ::System::Int32 infoIndex)
		{
			return ((::RPG::Client::TalkOptionData*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET))(this, info, infoIndex);
		}

		::RPG::Client::TextID _GetOptionContent(::RPG::GameCore::OptionTalkInfo* info)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET))(this, info);
		}

		::System::Boolean _IsItemsSatisfied(::Il2CppArray<::System::Int32>* costParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET))(this, costParam);
		}

		::System::Void _TryShowDialogueEventReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET))(this, itemList);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetNpcTakenRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeTalkRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetFirstTalkNpcScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFinishFirstTalkNpcScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSelectInclinationTextScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnChooseTalkOption(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET))(this, arg);
		}

		::System::Void _ProcessRogueDialogueEvent(::RPG::GameCore::RogueOptionTalkInfo* optionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET))(this, optionInfo);
		}

		::System::Void _RecordTriggeredOption(::RPG::GameCore::OptionTalkInfo* optionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET))(this, optionInfo);
		}

		::System::Void _TrySendInclination(::RPG::GameCore::OptionTalkInfo* optionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET))(this, optionInfo);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Boolean get_IsWaitingChoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_ISWAITINGCHOICE_OFFSET))(this);
		}

		::System::Boolean get__IsWaitingTalkEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET__ISWAITINGTALKEVENT_OFFSET))(this);
		}

		::System::Void _PlayOptionTalk_b__101_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PLAYOPTIONTALK_B__101_0_OFFSET))(this);
		}

		::System::Void __AddNotifyHandlers_b__130_0(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__130_0_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
