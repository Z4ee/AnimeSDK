#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/ContactRole.h"

namespace RPG::Client { class ChatContactData; }
namespace RPG::Client { class ChatContactFriend; }
namespace RPG::Client { class ChatContactOnlinePlayRoom; }
namespace RPG::Client { class ChatContactPam; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class PamChatData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMODULE_APPENDONLINEPLAYROOMMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B934420)
#define RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1B934A30)
#define RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B932940)
#define RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B932AF0)
#define RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x1B934CD0)
#define RPG_CLIENT_CHATMODULE_GETONLINEPLAYROOMCONTACT_OFFSET UNITYSDK_OFFSET(0x1B932AB0)
#define RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET UNITYSDK_OFFSET(0x1B932A10)
#define RPG_CLIENT_CHATMODULE_GETPAMQUESTIONERCONTACT_OFFSET UNITYSDK_OFFSET(0x1B932A70)
#define RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET UNITYSDK_OFFSET(0x1B934540)
#define RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B931B90)
#define RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET UNITYSDK_OFFSET(0x1B934990)
#define RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9392F0)
#define RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x1B939370)
#define RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x1B939350)
#define RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x1B932520)
#define RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET UNITYSDK_OFFSET(0x1B92C280)
#define RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B939310)
#define RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET UNITYSDK_OFFSET(0x1B939390)
#define RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B939330)
#define RPG_CLIENT_CHATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B932540)
#define RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET UNITYSDK_OFFSET(0x1B931D30)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATENABLE_OFFSET UNITYSDK_OFFSET(0x1B935200)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATLLMENABLE_OFFSET UNITYSDK_OFFSET(0x1B935250)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATQUESTIONERENABLE_OFFSET UNITYSDK_OFFSET(0x1B935290)
#define RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET UNITYSDK_OFFSET(0x1B934190)
#define RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET UNITYSDK_OFFSET(0x1B931990)
#define RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B938A20)
#define RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1B932EF0)
#define RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET UNITYSDK_OFFSET(0x1B9318D0)
#define RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x1B935140)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x1B9336E0)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x1B9335F0)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x1B934090)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x1B933EA0)
#define RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B933460)
#define RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1B934F60)
#define RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B933540)
#define RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0x1B935000)
#define RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x1B934C10)
#define RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x1B934C60)
#define RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET UNITYSDK_OFFSET(0x1B931CA0)
#define RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B939300)
#define RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x1B939380)
#define RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x1B939360)
#define RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x1B932530)
#define RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B939320)
#define RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B939340)
#define RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET UNITYSDK_OFFSET(0x1B9347D0)
#define RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B9386C0)
#define RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B9356F0)
#define RPG_CLIENT_CHATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9393A0)
#define RPG_CLIENT_CHATMODULE__DATAPREPARED_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B9394D0)
#define RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B935610)
#define RPG_CLIENT_CHATMODULE__FINDFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0x1B933CC0)
#define RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B935550)
#define RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0x1B9338A0)
#define RPG_CLIENT_CHATMODULE__GETPAMCONTACTBYROLE_OFFSET UNITYSDK_OFFSET(0x1B9354F0)
#define RPG_CLIENT_CHATMODULE__INITONLINEPLAYROOMCONTACT_OFFSET UNITYSDK_OFFSET(0x1B9328F0)
#define RPG_CLIENT_CHATMODULE__INITPAMCHATSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x1B9353C0)
#define RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET UNITYSDK_OFFSET(0x1B9327A0)
#define RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET UNITYSDK_OFFSET(0x1B9331B0)
#define RPG_CLIENT_CHATMODULE__ISPAMCHATLLMFEATURESWITCHENABLE_OFFSET UNITYSDK_OFFSET(0x1B9352E0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMASKSETTLEMENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B938600)
#define RPG_CLIENT_CHATMODULE__ONAIPAMMOTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B938550)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B9384D0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET UNITYSDK_OFFSET(0x1B937220)
#define RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x1B9369A0)
#define RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x1B932030)
#define RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET UNITYSDK_OFFSET(0x1B938DC0)
#define RPG_CLIENT_CHATMODULE__ONFEATURESWITCHED_OFFSET UNITYSDK_OFFSET(0x1B9391C0)
#define RPG_CLIENT_CHATMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1B939100)
#define RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x1B938F80)
#define RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x1B938B90)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B9380E0)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1B938330)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1B936B40)
#define RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B931DF0)
#define RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B937730)
#define RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1B936250)
#define RPG_CLIENT_CHATMODULE__ONGETNEWAVATARPATH_OFFSET UNITYSDK_OFFSET(0x1B939040)
#define RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B9374D0)
#define RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x1B931EB0)
#define RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B9368C0)
#define RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B936660)
#define RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x1B937310)
#define RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0x1B937110)
#define RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET UNITYSDK_OFFSET(0x1B938410)
#define RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET UNITYSDK_OFFSET(0x1B933900)
#define RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET UNITYSDK_OFFSET(0x1B938E10)
#define RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x1B933F00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatModule_TypeDefinitionIndex = 63290;

	class ChatModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _UnlockID = 0xCE4; // 0x0
		::RPG::Client::Promises::Promise* _DataPrepared; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _ToDeleteFriendContacts; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _FriendContacts; // 0x20
		::RPG::Client::ChatContactPam* _PamQuestioner; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _UnreadContactIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _MarkedEmojiIDs_k__BackingField; // 0x38
		::RPG::Client::ChatContactOnlinePlayRoom* _OnlinePlayRoomContact; // 0x40
		::RPG::Client::PamChatData* _PamChat_k__BackingField; // 0x48
		::RPG::Client::ChatContactPam* _PamHelper; // 0x50
		::System::UInt32 _InitHistoryMessageCount_k__BackingField; // 0x58
		::System::UInt32 _TotalHistoryMessageCount_k__BackingField; // 0x5C
		::System::UInt32 _EmojiMaxMarkedCount; // 0x60
		::System::UInt32 _PageHistoryMessageCount_k__BackingField; // 0x64
		::System::Boolean _IsDisableActivityInvite_k__BackingField; // 0x68
		::System::Boolean _IsBanned; // 0x69
		::System::Boolean _IsPamChatLLMEnabled; // 0x6A
		::System::Boolean _IsActivityInviting_k__BackingField; // 0x6B
		::System::Boolean _IsDataPrepared; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshEmojiData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET))(this);
		}

		::System::Void MarkEmoji(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET))(this, a1, a2);
		}

		::System::Void SetMarkedEmoji(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET))(this, a1);
		}

		::System::Boolean IsEmojiMarked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET))(this, a1);
		}

		::System::Void _OnGetChatEmojiListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMarkChatEmojiScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBatchMarkChatEmojiScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MarkedEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET))(this);
		}

		::System::Void set_MarkedEmojiIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EmojiMaxMarkedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChatContactPam* GetPamContact(::RPG::Client::ChatContactPam_Mode a1)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::PVOID, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET))(this, a1);
		}

		::RPG::Client::ChatContactPam* GetPamQuestionerContact()
		{
			return ((::RPG::Client::ChatContactPam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETPAMQUESTIONERCONTACT_OFFSET))(this);
		}

		::RPG::Client::ChatContactData* GetOnlinePlayRoomContact()
		{
			return ((::RPG::Client::ChatContactData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETONLINEPLAYROOMCONTACT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* GetAllContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET))(this);
		}

		::System::Void PrepareContactPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET))(this);
		}

		::System::Void SendInviteMessage(::System::UInt32 a1, ::Enum_3_01618AD0437C8486_2 a2, ::System::UInt64 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_01618AD0437C8486_2, ::System::UInt64, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendPlanetfesExchangeMessage(::System::UInt32 a1, ::System::UInt64 a2, ::Enum_3_0A3761FE34514D6C_1 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SafeAddContactPrivate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean SafeAddContactPrivate_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET))(this, a1);
		}

		::System::Void SafeRemoveContactPrivate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET))(this, a1);
		}

		::System::Void SafeRemoveContactPrivate_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET))(this, a1);
		}

		::System::Void MarkContactRead(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET))(this, a1, a2);
		}

		::System::Void AppendOnlinePlayRoomMessage(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::RPG::Client::ChatMessageData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_APPENDONLINEPLAYROOMMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnreadContactIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET))(this);
		}

		::System::Boolean ShowChatHUD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET))(this);
		}

		::System::Void SetDisableActivityInvite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET))(this, a1);
		}

		::System::Void SetIsActivityInviting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetFriendReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET))(this);
		}

		::System::Void SendPamChatFeedback(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SendUpdateAiPamSettingsCsReq(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET))(this, a1);
		}

		::System::Void RequestPamChatInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET))(this);
		}

		::System::Boolean IsPamChatEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISPAMCHATENABLE_OFFSET))(this);
		}

		::System::Boolean IsPamChatLLMEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISPAMCHATLLMENABLE_OFFSET))(this);
		}

		::System::Boolean IsPamChatQuestionerEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISPAMCHATQUESTIONERENABLE_OFFSET))(this);
		}

		::System::Void _InitPamChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET))(this);
		}

		::System::Void _InitPamChatServerProxy(::RPG::Client::ChatContactPam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactPam*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__INITPAMCHATSERVERPROXY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChatContactPam* _GetPamContactByRole(::Enum_3_0A3761FE34514D6C_3 a1)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETPAMCONTACTBYROLE_OFFSET))(this, a1);
		}

		::System::Void _InitOnlinePlayRoomContact()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__INITONLINEPLAYROOMCONTACT_OFFSET))(this);
		}

		::System::Void _TryRemoveContactPrivate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET))(this, a1);
		}

		::RPG::Client::ChatContactFriend* _GetFriendContact(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET))(this, a1);
		}

		::RPG::Client::ChatContactFriend* _FindFriendContact(::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* a1, ::System::UInt32 a2, ::RPG::Client::ContactRole a3)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>*, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FINDFRIENDCONTACT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RecordContact(::RPG::Client::ChatContactData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchChatContacts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentTimestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean _IsFriendBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetLoginChatInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRevcMsgScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRecvAiPamChatEventScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAiPamSendMsgScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetAiPamNextQuestionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTriggerAiPamSpeakScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAiPamResponseFeedbackScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSendMsgScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetPrivateChatHistoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetChatFriendHistoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetAiPamChatHistoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetAiPamChatInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUpdateAiPamSettingsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAiPamResponseFeedbackCommentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAiPamMotionScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMMOTIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAiPamAskSettlementScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMASKSETTLEMENTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnFriendDataUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnChatHudBubblePanelShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET))(this, a1);
		}

		::System::Void _TriggerPamChatHudBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET))(this);
		}

		::System::Void _OnFirstGetNewAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnGetNewAvatarPath(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETNEWAVATARPATH_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFeatureSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFEATURESWITCHED_OFFSET))(this, a1);
		}

		::System::Boolean _IsPamChatLLMFeatureSwitchEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ISPAMCHATLLMFEATURESWITCHENABLE_OFFSET))(this);
		}

		::System::Boolean get_EnableChat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET))(this);
		}

		::System::UInt32 get_InitHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_InitHistoryMessageCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PageHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_PageHistoryMessageCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalHistoryMessageCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHistoryPageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsDisableActivityInvite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET))(this);
		}

		::System::Void set_IsDisableActivityInvite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivityInviting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET))(this);
		}

		::System::Void set_IsActivityInviting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET))(this, a1);
		}

		::RPG::Client::PamChatData* get_PamChat()
		{
			return ((::RPG::Client::PamChatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET))(this);
		}

		::System::Void _DataPrepared_b__31_0(::System::Collections::Generic::List_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__DATAPREPARED_B__31_0_OFFSET))(this, a1);
		}
	};
}
