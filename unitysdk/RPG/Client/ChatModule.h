#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_9.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
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

#define RPG_CLIENT_CHATMODULE_APPENDONLINEPLAYROOMMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA27FE0)
#define RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0xCA285C0)
#define RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA26340)
#define RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0xCA264F0)
#define RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET UNITYSDK_OFFSET(0xCA28860)
#define RPG_CLIENT_CHATMODULE_GETONLINEPLAYROOMCONTACT_OFFSET UNITYSDK_OFFSET(0xCA264B0)
#define RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET UNITYSDK_OFFSET(0xCA26410)
#define RPG_CLIENT_CHATMODULE_GETPAMQUESTIONERCONTACT_OFFSET UNITYSDK_OFFSET(0xCA26470)
#define RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xCA280D0)
#define RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET UNITYSDK_OFFSET(0xCA25590)
#define RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET UNITYSDK_OFFSET(0xCA28520)
#define RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF00)
#define RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0xCA2CF80)
#define RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0xCA2CF60)
#define RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0xCA25F20)
#define RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET UNITYSDK_OFFSET(0xCA1F350)
#define RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF20)
#define RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET UNITYSDK_OFFSET(0xCA2CFA0)
#define RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF40)
#define RPG_CLIENT_CHATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCA25F40)
#define RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET UNITYSDK_OFFSET(0xCA25730)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATENABLE_OFFSET UNITYSDK_OFFSET(0xCA28D90)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATLLMENABLE_OFFSET UNITYSDK_OFFSET(0xCA28DE0)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATQUESTIONERENABLE_OFFSET UNITYSDK_OFFSET(0xCA28E20)
#define RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET UNITYSDK_OFFSET(0xCA27CD0)
#define RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET UNITYSDK_OFFSET(0xCA25390)
#define RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCA2C5C0)
#define RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xCA268F0)
#define RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET UNITYSDK_OFFSET(0xCA252D0)
#define RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0xCA28CD0)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0xCA27110)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0xCA27020)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0xCA27BD0)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0xCA279E0)
#define RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA26E90)
#define RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET UNITYSDK_OFFSET(0xCA28AF0)
#define RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA26F70)
#define RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0xCA28B90)
#define RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0xCA287A0)
#define RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0xCA287F0)
#define RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET UNITYSDK_OFFSET(0xCA256A0)
#define RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF10)
#define RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0xCA2CF90)
#define RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0xCA2CF70)
#define RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0xCA25F30)
#define RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF30)
#define RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA2CF50)
#define RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET UNITYSDK_OFFSET(0xCA28360)
#define RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA2C260)
#define RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA29280)
#define RPG_CLIENT_CHATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA2CFB0)
#define RPG_CLIENT_CHATMODULE__DATAPREPARED_B__31_0_OFFSET UNITYSDK_OFFSET(0xCA2D0E0)
#define RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET UNITYSDK_OFFSET(0xCA291A0)
#define RPG_CLIENT_CHATMODULE__FINDFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0xCA277D0)
#define RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCA290E0)
#define RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0xCA272D0)
#define RPG_CLIENT_CHATMODULE__GETPAMCONTACTBYROLE_OFFSET UNITYSDK_OFFSET(0xCA29080)
#define RPG_CLIENT_CHATMODULE__INITONLINEPLAYROOMCONTACT_OFFSET UNITYSDK_OFFSET(0xCA262F0)
#define RPG_CLIENT_CHATMODULE__INITPAMCHATSERVERPROXY_OFFSET UNITYSDK_OFFSET(0xCA28F50)
#define RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET UNITYSDK_OFFSET(0xCA261A0)
#define RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET UNITYSDK_OFFSET(0xCA26BE0)
#define RPG_CLIENT_CHATMODULE__ISPAMCHATLLMFEATURESWITCHENABLE_OFFSET UNITYSDK_OFFSET(0xCA28E70)
#define RPG_CLIENT_CHATMODULE__ONAIPAMASKSETTLEMENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA2C1A0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMMOTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA2C0F0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2C070)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2AD70)
#define RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2A4F0)
#define RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0xCA25A30)
#define RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET UNITYSDK_OFFSET(0xCA2C9D0)
#define RPG_CLIENT_CHATMODULE__ONFEATURESWITCHED_OFFSET UNITYSDK_OFFSET(0xCA2CDD0)
#define RPG_CLIENT_CHATMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xCA2CD10)
#define RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET UNITYSDK_OFFSET(0xCA2CB90)
#define RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xCA2C770)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2BC80)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2BED0)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2A690)
#define RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET UNITYSDK_OFFSET(0xCA257F0)
#define RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2B300)
#define RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xCA29DE0)
#define RPG_CLIENT_CHATMODULE__ONGETNEWAVATARPATH_OFFSET UNITYSDK_OFFSET(0xCA2CC50)
#define RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2B0A0)
#define RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0xCA258B0)
#define RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA2A410)
#define RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA2A1F0)
#define RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2AE60)
#define RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2AC60)
#define RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET UNITYSDK_OFFSET(0xCA2BFB0)
#define RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET UNITYSDK_OFFSET(0xCA27330)
#define RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET UNITYSDK_OFFSET(0xCA2CA20)
#define RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0xCA27A40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatModule_TypeDefinitionIndex = 63224;

	class ChatModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _UnlockID = 0xCE4; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _MarkedEmojiIDs_k__BackingField; // 0x10
		::RPG::Client::ChatContactPam* _PamQuestioner; // 0x18
		::RPG::Client::ChatContactPam* _PamHelper; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _FriendContacts; // 0x28
		::RPG::Client::PamChatData* _PamChat_k__BackingField; // 0x30
		::RPG::Client::ChatContactOnlinePlayRoom* _OnlinePlayRoomContact; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _ToDeleteFriendContacts; // 0x40
		::RPG::Client::Promises::Promise* _DataPrepared; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _UnreadContactIDs; // 0x50
		::System::UInt32 _EmojiMaxMarkedCount; // 0x58
		::System::Boolean _IsActivityInviting_k__BackingField; // 0x5C
		::System::Boolean _IsBanned; // 0x5D
		::System::Boolean _IsDataPrepared; // 0x5E
		::System::Boolean _IsPamChatLLMEnabled; // 0x5F
		::System::Boolean _IsDisableActivityInvite_k__BackingField; // 0x60
		::System::UInt32 _InitHistoryMessageCount_k__BackingField; // 0x64
		::System::UInt32 _PageHistoryMessageCount_k__BackingField; // 0x68
		::System::UInt32 _TotalHistoryMessageCount_k__BackingField; // 0x6C

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

		::System::Void SendInviteMessage(::System::UInt32 a1, ::Enum_3_0F1B992870941C13_1 a2, ::System::UInt64 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_0F1B992870941C13_1, ::System::UInt64, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendPlanetfesExchangeMessage(::System::UInt32 a1, ::System::UInt64 a2, ::Enum_3_0A3761FE34514D6C_7 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET))(this, a1, a2, a3);
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

		::RPG::Client::ChatContactPam* _GetPamContactByRole(::Enum_3_0A3761FE34514D6C_9 a1)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETPAMCONTACTBYROLE_OFFSET))(this, a1);
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
