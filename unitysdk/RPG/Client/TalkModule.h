#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C1A562AF201E3725_5_Enum_3_3D1973FEBEEBFC47_4.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TalkModule_DialogueEventKey.h"
#include "unitysdk/RPG/Client/TalkModule_OptionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_906;
class Class_0_16E4307DCC419505_907;
class Class_0_16E4307DCC419505_908;
class Class_1_1F5AAE9CC1C42543;
class Class_1_4BC858D7C27E10ED_57;
class Class_1_59D81C4BFF1AEBE3;
class Class_1_90116BE96AF7B744_1;
class Class_1_A3AF0B11F5604595;
class Class_1_EA5A5E4D07C4CF2B_10;
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

#define RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xC9C9F80)
#define RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xC9C9E20)
#define RPG_CLIENT_TALKMODULE_BEGINRECORD_OFFSET UNITYSDK_OFFSET(0xC9C78B0)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET UNITYSDK_OFFSET(0xC9CA0A0)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xC9C8DE0)
#define RPG_CLIENT_TALKMODULE_ENDRECORD_OFFSET UNITYSDK_OFFSET(0xC9C7930)
#define RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET UNITYSDK_OFFSET(0xC9CEAB0)
#define RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET UNITYSDK_OFFSET(0xC9CCFF0)
#define RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET UNITYSDK_OFFSET(0xC9CCD20)
#define RPG_CLIENT_TALKMODULE_GETCURRENTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC9CF770)
#define RPG_CLIENT_TALKMODULE_GETCURRENTSKIPDEFAULTOPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC9CF7E0)
#define RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET UNITYSDK_OFFSET(0xC9C9330)
#define RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET UNITYSDK_OFFSET(0xC9CE7D0)
#define RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xC9CA190)
#define RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xC9C8CA0)
#define RPG_CLIENT_TALKMODULE_GET_ISWAITINGCHOICE_OFFSET UNITYSDK_OFFSET(0xC9D2A90)
#define RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xC9C8640)
#define RPG_CLIENT_TALKMODULE_GET__ISWAITINGTALKEVENT_OFFSET UNITYSDK_OFFSET(0xC9CFB20)
#define RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC9CCBD0)
#define RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC9CE600)
#define RPG_CLIENT_TALKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC9CD590)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET UNITYSDK_OFFSET(0xC9C79B0)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET UNITYSDK_OFFSET(0xC9C7A80)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET UNITYSDK_OFFSET(0xC9C7B30)
#define RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xC9C9E80)
#define RPG_CLIENT_TALKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC9CDA50)
#define RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET UNITYSDK_OFFSET(0xC9CDFD0)
#define RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET UNITYSDK_OFFSET(0xC9CE1D0)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET UNITYSDK_OFFSET(0xC9C7E40)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C7BA0)
#define RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C7EA0)
#define RPG_CLIENT_TALKMODULE_REFRESHCURMAPSERIESID_OFFSET UNITYSDK_OFFSET(0xC9CEF20)
#define RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xC9CA020)
#define RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDEE0)
#define RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDF80)
#define RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDE40)
#define RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET UNITYSDK_OFFSET(0xC9CCE20)
#define RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET UNITYSDK_OFFSET(0xC9CCDD0)
#define RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDE90)
#define RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDF30)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9CDDF0)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC9CDAC0)
#define RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xC9C8CB0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xC9CC9B0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xC9CC8F0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET UNITYSDK_OFFSET(0xC9CCA70)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET UNITYSDK_OFFSET(0xC9CC7A0)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0xC9CA100)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xC9CA8B0)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xC9CA7C0)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xC9CA440)
#define RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C7F10)
#define RPG_CLIENT_TALKMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xC9CD610)
#define RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xC9CEC10)
#define RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xC9C7C70)
#define RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9D2080)
#define RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9D1130)
#define RPG_CLIENT_TALKMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9D32B0)
#define RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET UNITYSDK_OFFSET(0xC9C9980)
#define RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET UNITYSDK_OFFSET(0xC9C9440)
#define RPG_CLIENT_TALKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D2AA0)
#define RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xC9CFB80)
#define RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET UNITYSDK_OFFSET(0xC9D0730)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET UNITYSDK_OFFSET(0xC9CBD80)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xC9CBE60)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xC9CC3C0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xC9CC730)
#define RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xC9C83A0)
#define RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xC9CA910)
#define RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9C86C0)
#define RPG_CLIENT_TALKMODULE__HISTORYUNINIT_OFFSET UNITYSDK_OFFSET(0xC9C77E0)
#define RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET UNITYSDK_OFFSET(0xC9D0F40)
#define RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET UNITYSDK_OFFSET(0xC9D0050)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET UNITYSDK_OFFSET(0xC9D0570)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET UNITYSDK_OFFSET(0xC9D0470)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0xC9D0290)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9C9AF0)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET UNITYSDK_OFFSET(0xC9C8CC0)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xC9C9C50)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET UNITYSDK_OFFSET(0xC9C9D70)
#define RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xC9D2A40)
#define RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0xC9D22A0)
#define RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xC9D1F40)
#define RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xC9D1A50)
#define RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC9D17F0)
#define RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC9D19A0)
#define RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9C8130)
#define RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9C81B0)
#define RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC9CD240)
#define RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC9CA9E0)
#define RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xC9C8B40)
#define RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xC9CD1C0)
#define RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET UNITYSDK_OFFSET(0xC9D2030)
#define RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET UNITYSDK_OFFSET(0xC9C8BD0)
#define RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xC9CB100)
#define RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET UNITYSDK_OFFSET(0xC9C8AB0)
#define RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xC9C8920)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC9CAD70)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC9CB800)
#define RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET UNITYSDK_OFFSET(0xC9CE390)
#define RPG_CLIENT_TALKMODULE__PLAYOPTIONTALK_B__101_0_OFFSET UNITYSDK_OFFSET(0xC9D32D0)
#define RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET UNITYSDK_OFFSET(0xC9CDB70)
#define RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC9D08F0)
#define RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0xC9D25F0)
#define RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C7FC0)
#define RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C8310)
#define RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET UNITYSDK_OFFSET(0xC9C8230)
#define RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET UNITYSDK_OFFSET(0xC9D2590)
#define RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xC9C9EF0)
#define RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9D0E20)
#define RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC9D0D40)
#define RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xC9C9580)
#define RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET UNITYSDK_OFFSET(0xC9D2940)
#define RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET UNITYSDK_OFFSET(0xC9D10B0)
#define RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xC9CFA70)
#define RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET UNITYSDK_OFFSET(0xC9C8470)
#define RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__130_0_OFFSET UNITYSDK_OFFSET(0xC9D32E0)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC9D32F0)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC9D3370)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9D3430)
#define RPG_CLIENT_TALKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9D33D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_TypeDefinitionIndex = 63652;

	class TalkModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__MAX_HISTORY_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0x9740);
		}
		static ::System::Boolean* StaticGet_AutoResumCacheMissionTalk()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0x9744);
		}
		// static const ::System::Int32 MAX_OPTION_NUM = 0x5; // 0x0
		// static const ::System::String* WAIT_DIALOGUE_EVENT; // 0x0
		::Class_0_16E4307DCC419505_906* _SetIconStrategy; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDClientTriggered; // 0x18
		::Class_0_16E4307DCC419505_908* _CustomOptionFilter; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A3AF0B11F5604595*>*>* _DialogueEventParams1D3Legacy; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SeriesTalkCount; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered; // 0x38
		::RPG::GameCore::TaskContext* _OptionContext; // 0x40
		::Class_0_16E4307DCC419505_907* _SetOptionTalkTriggeredStrategy; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* _CurOptionInfos; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingNPCIDs; // 0x58
		::RPG::Client::UIController* _TopUIControllerHasMissionTalk; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreparedNPCIDs; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TalkModule_DialogueEventKey, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueStoryEventsBeenTriggered1D3; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggeredLegacy; // 0x80
		::System::Action* _WaitAeonTalkScRspCallback; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4BC858D7C27E10ED_57*>* _RogueDialogueInfo; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered1D3Legacy; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _AeonTalkInfos; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::System::UInt32>*>* _SeriesTalkCountPromises; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A3AF0B11F5604595*>*>* _DialogueEventParamsLegacy; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ReceivedTalkEventIDs; // 0xB8
		::RPG::Client::TalkModule_MissionTalkCache* _MissionTalkCache; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* TalkProgress; // 0xC8
		::Class_1_59D81C4BFF1AEBE3* DialogueEventInfo; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A3AF0B11F5604595*>*>* _DialogueEventParams; // 0xD8
		::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* _MissionTalkUIControllers; // 0xE0
		::System::Collections::Generic::List_1<::System::UInt32>* _NPCListWhenEnterAdventurePhase; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* _HistoryDatas_k__BackingField; // 0xF0
		::System::UInt32 _CurAeonTalkRogueNPCID; // 0xF8
		::System::Boolean _IsWaitingChoice; // 0xFC
		::System::Boolean WaitAeonTalkScRsp; // 0xFD
		::System::Boolean _IsWaitingMissionData; // 0xFE
		::System::Boolean _MarkTriggeredOption; // 0xFF
		::RPG::MVector3 _TriggeredPosition; // 0x100
		::RPG::Client::TextID _CachedAsideID; // 0x110
		::System::Boolean _IsRecording; // 0x120
		::RPG::Client::TalkModule_OptionType _CachedOptionType; // 0x124

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

		::System::Boolean IsHistoryItemContinuing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET))(this, a1);
		}

		::System::Boolean IsHistoryItemIconSpecial(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsHistoryItemLatest(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET))(this, a1);
		}

		::System::Void RecordItemHistory(::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET))(this, a1);
		}

		::System::Void RecordItemHistory_1(::RPG::GameCore::MissionItemConfigList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET))(this, a1);
		}

		::System::Void RecordReadHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET))(this, a1);
		}

		::System::Void TryRecordAsideHistory(::RPG::GameCore::PlayScreenTransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET))(this, a1);
		}

		::System::Void _OnEnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void _RecordSimpleHistory(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordOptionHistory(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RecordAsideHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET))(this, a1);
		}

		::System::Void _AddHistoryData(::RPG::Client::TalkHistoryData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkHistoryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateAsideCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET))(this);
		}

		::System::Void _HistoryAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnSimpleTalkShown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET))(this, a1);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _OnSelectItemConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* get_HistoryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET))(this);
		}

		::System::Void set_HistoryDatas(::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::TalkHistoryData* get_LastHistoryData()
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET))(this);
		}

		::System::Void _MissionTalkUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET))(this);
		}

		::System::Void CacheMissionTalk(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetMissionTalkStartIndexAndClearCache(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET))(this, a1);
		}

		::System::Void _TryResumCacheMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET))(this);
		}

		::System::Boolean _CheckIsSameFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET))(this);
		}

		::System::Boolean _CheckSameWithCache(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET))(this, a1);
		}

		::System::Void _MissionTalkAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _MissionTalk_OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _MissionTalk_OnMainPageShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET))(this, a1);
		}

		::System::Void AdvPlayMissionTalk(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET))(this, a1);
		}

		::System::Boolean IsTopUIControllerHasMissionTalk(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this, a1);
		}

		::System::Void AddMissionTalkUIController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void RemoveMissionTalkUIController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void _RefreshTopUIControllerHasMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this);
		}

		::System::Void CacheMissionTalkIsPlayed(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_4BC858D7C27E10ED_57* TryGetRogueCommonDialogueInfo(::System::UInt32 a1)
		{
			return ((::Class_1_4BC858D7C27E10ED_57*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_57*>* GetRogueCommonDialogueInfoListByOwnerType(::Class_1_C1A562AF201E3725_5_Enum_3_3D1973FEBEEBFC47_4 a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_57*>*(*)(::PVOID, ::Class_1_C1A562AF201E3725_5_Enum_3_3D1973FEBEEBFC47_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET))(this, a1);
		}

		::Class_1_90116BE96AF7B744_1* TryGetRogueCommonDialogueOption(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_90116BE96AF7B744_1*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET))(this, a1, a2);
		}

		::Class_1_90116BE96AF7B744_1* TryGetRogueCommonDialogueOptionByDialogueMode(::System::UInt32 a1)
		{
			return ((::Class_1_90116BE96AF7B744_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET))(this, a1);
		}

		::Class_1_90116BE96AF7B744_1* TryGetRogueCommonDialogueOptionByDialogueEntity(::System::UInt32 a1)
		{
			return ((::Class_1_90116BE96AF7B744_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnGetRogueCommonDialogueDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRogueCommonDialogueDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectRogueCommonDialogueOptionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRogueCommonDialogueOptionFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetRogueUniqueDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET))(this);
		}

		::RPG::Client::RogueTalkOptionDataExt* _GenerateRogueOptionDataExt(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::RPG::Client::RogueTalkOptionDataExt*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET))(this, a1);
		}

		::System::Void _GenerateRogueOptionDisplayInfo(::RPG::GameCore::RogueOptionTalkInfo* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateRogueOptionEffectInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1F5AAE9CC1C42543*>* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1F5AAE9CC1C42543*>*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateRogueOptionEffectNousValueChange(::Class_1_EA5A5E4D07C4CF2B_10* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_10*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET))(this, a1, a2);
		}

		::Class_1_A3AF0B11F5604595* TryGetDialogueEventParam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_A3AF0B11F5604595*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET))(this, a1, a2);
		}

		::Class_1_A3AF0B11F5604595* TryGetDialogueEventParamByDialogueMode(::System::UInt32 a1)
		{
			return ((::Class_1_A3AF0B11F5604595*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET))(this, a1);
		}

		::Class_1_A3AF0B11F5604595* TryGetDialogueEventParamByDialogueEntity(::System::UInt32 a1)
		{
			return ((::Class_1_A3AF0B11F5604595*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET))(this, a1);
		}

		::System::Boolean HasShardDialogueEventBeenTriggered(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET))(this, a1, a2);
		}

		::Class_1_A3AF0B11F5604595* TryGetDialogueEventParamLegacy(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_A3AF0B11F5604595*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET))(this, a1, a2);
		}

		::System::Void GetChessRogueStoryAeonTalkInfo(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SetCurAeonTalkRogueNPCID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET))(this, a1);
		}

		::System::Void SetAeonTalk(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetAeonTalk(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET))(this, a1);
		}

		::System::Void _OnSelectChessRogueSubStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetChessRogueStoryAeonTalkInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void SetTalkTriggered(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void SetTalkTriggeredStrategy(::Class_0_16E4307DCC419505_907* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_907*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkTriggeredStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkIconStrategy(::Class_0_16E4307DCC419505_906* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_906*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkIconStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkOptionFilterStrategy(::Class_0_16E4307DCC419505_908* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_908*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkOptionFilterStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET))(this);
		}

		::System::Boolean PlayMultiVoiceTalk(::RPG::GameCore::PlayMultiVoiceTalk* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET))(this, a1);
		}

		::System::Void PlayOptionTalk(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::Client::TalkModule_OptionType a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IfSeriesTriggered(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GetNPCTalkCountPromise(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET))(this, a1);
		}

		::System::Void FinishTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET))(this, a1);
		}

		::System::Void ValidateDialogGroupInDefaultDialogueMode(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET))(this, a1);
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

		::RPG::Client::Promises::IPromise* _OptionMissionsPrepared(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET))(this, a1);
		}

		::System::Void _PrepareTalkEvents(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET))(this, a1);
		}

		::System::Void _TryShowTalkOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET))(this);
		}

		::System::Void _DoShowTalkOption(::RPG::Client::TalkModule_OptionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET))(this, a1);
		}

		::System::Void _ProcessOptionAvailable(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _SetTriggeredByStrategy(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET))(this, a1, a2);
		}

		::System::Void _SetIconByStrategy(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsMissionMutexEnabled(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET))(this, a1);
		}

		::System::Boolean _IsOptionVisible(::RPG::GameCore::OptionTalkInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsOptionVisibleByPredicate(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET))(this, a1);
		}

		::System::Boolean _IsOptionVisibleByRogueEvent(::RPG::GameCore::RogueOptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::TalkOptionData* _GenerateOptionData(::RPG::GameCore::OptionTalkInfo* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::TalkOptionData*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID _GetOptionContent(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsItemsSatisfied(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET))(this, a1);
		}

		::System::Void _TryShowDialogueEventReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetNpcTakenRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeTalkRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetFirstTalkNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFinishFirstTalkNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectInclinationTextScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnChooseTalkOption(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET))(this, a1);
		}

		::System::Void _ProcessRogueDialogueEvent(::RPG::GameCore::RogueOptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET))(this, a1);
		}

		::System::Void _RecordTriggeredOption(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET))(this, a1);
		}

		::System::Void _TrySendInclination(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
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

		::System::Void __AddNotifyHandlers_b__130_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__130_0_OFFSET))(this, a1);
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
