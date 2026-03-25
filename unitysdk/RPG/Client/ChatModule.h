#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ContactRole.h"

class Class_1_803E8F9F8C8CEA76;
namespace RPG::Client { class ChatContactData; }
namespace RPG::Client { class ChatContactFriend; }
namespace RPG::Client { class ChatContactPam; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class PamChatData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0x93164F0)
#define RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9314730)
#define RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0x9314820)
#define RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x9316770)
#define RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET UNITYSDK_OFFSET(0x93147E0)
#define RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET UNITYSDK_OFFSET(0x9316000)
#define RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9313C60)
#define RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET UNITYSDK_OFFSET(0x9316450)
#define RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319AC0)
#define RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x9319B40)
#define RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x9319B20)
#define RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x93143A0)
#define RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET UNITYSDK_OFFSET(0x930FEC0)
#define RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319AE0)
#define RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET UNITYSDK_OFFSET(0x9319B60)
#define RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319B00)
#define RPG_CLIENT_CHATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x93143C0)
#define RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET UNITYSDK_OFFSET(0x9313E00)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATENABLE_OFFSET UNITYSDK_OFFSET(0x9316B90)
#define RPG_CLIENT_CHATMODULE_ISPAMCHATLLMENABLE_OFFSET UNITYSDK_OFFSET(0x9316BE0)
#define RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET UNITYSDK_OFFSET(0x9315DF0)
#define RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET UNITYSDK_OFFSET(0x9313B20)
#define RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x93194F0)
#define RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9314A80)
#define RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET UNITYSDK_OFFSET(0x9313A60)
#define RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x9316AD0)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x93151F0)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x9315100)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x9315CB0)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x9315B10)
#define RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9314F70)
#define RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET UNITYSDK_OFFSET(0x9316950)
#define RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9315050)
#define RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0x93169F0)
#define RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x93166B0)
#define RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x9316700)
#define RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET UNITYSDK_OFFSET(0x9313D70)
#define RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319AD0)
#define RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x9319B50)
#define RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x9319B30)
#define RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x93143B0)
#define RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319AF0)
#define RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9319B10)
#define RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET UNITYSDK_OFFSET(0x9316290)
#define RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9319350)
#define RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9316E60)
#define RPG_CLIENT_CHATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9319B70)
#define RPG_CLIENT_CHATMODULE__DATAPREPARED_B__28_0_OFFSET UNITYSDK_OFFSET(0x9319CB0)
#define RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET UNITYSDK_OFFSET(0x9316D80)
#define RPG_CLIENT_CHATMODULE__FINDFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0x9315900)
#define RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9316CC0)
#define RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0x9315350)
#define RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET UNITYSDK_OFFSET(0x9314640)
#define RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET UNITYSDK_OFFSET(0x9314CC0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMMOTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x93192B0)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x9319230)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET UNITYSDK_OFFSET(0x9318310)
#define RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x9317D40)
#define RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x9314050)
#define RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET UNITYSDK_OFFSET(0x93198C0)
#define RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x9319A00)
#define RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x9319690)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x9318F80)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x93190E0)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x9317E50)
#define RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET UNITYSDK_OFFSET(0x9313E60)
#define RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x9318750)
#define RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9317260)
#define RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x93185B0)
#define RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x9313F60)
#define RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9317880)
#define RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9317550)
#define RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x93183C0)
#define RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0x9318240)
#define RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET UNITYSDK_OFFSET(0x9319170)
#define RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET UNITYSDK_OFFSET(0x93153B0)
#define RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET UNITYSDK_OFFSET(0x9319910)
#define RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x9315B70)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9319D60)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9319CD0)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9319E30)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9319DD0)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9319D70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatModule_TypeDefinitionIndex = 51310;

	class ChatModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _UnlockID = 0xCE4; // 0x0
		::Class_1_803E8F9F8C8CEA76* _PamChatGreetingService; // 0x10
		::RPG::Client::PamChatData* _PamChat_k__BackingField; // 0x18
		::RPG::Client::ChatContactPam* _PamContact; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _FriendContacts; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* _ToDeleteFriendContacts; // 0x30
		::RPG::Client::Promises::Promise* _DataPrepared; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _MarkedEmojiIDs_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _UnreadContactIDs; // 0x48
		::System::UInt32 _EmojiMaxMarkedCount; // 0x50
		::System::UInt32 _InitHistoryMessageCount_k__BackingField; // 0x54
		::System::UInt32 _TotalHistoryMessageCount_k__BackingField; // 0x58
		::System::Boolean _IsBanned; // 0x5C
		::System::Boolean _IsActivityInviting_k__BackingField; // 0x5D
		::System::Boolean _IsDisableActivityInvite_k__BackingField; // 0x5E
		::System::Boolean _IsDataPrepared; // 0x5F
		::System::UInt32 _PageHistoryMessageCount_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshEmojiData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET))(this);
		}

		::System::Void MarkEmoji(::System::UInt32 emojiID, ::System::Boolean isMarked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET))(this, emojiID, isMarked);
		}

		::System::Void SetMarkedEmoji(::System::Collections::Generic::List_1<::System::UInt32>* emojiIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET))(this, emojiIDs);
		}

		::System::Boolean IsEmojiMarked(::System::UInt32 emojiID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET))(this, emojiID);
		}

		::System::Void _OnGetChatEmojiListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarkChatEmojiScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBatchMarkChatEmojiScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MarkedEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET))(this);
		}

		::System::Void set_MarkedEmojiIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET))(this, value);
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

		::RPG::Client::ChatContactData* GetPamContact()
		{
			return ((::RPG::Client::ChatContactData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* GetAllContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET))(this);
		}

		::System::Void PrepareContactPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET))(this);
		}

		::System::Void SendInviteMessage(::System::UInt32 contactID, ::Enum_3_F80BFD5B986D5503_3 mode, ::System::UInt64 lobbyID, ::System::UInt32 configID, ::System::Collections::Generic::List_1<::System::UInt32>* gameParamList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_F80BFD5B986D5503_3, ::System::UInt64, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET))(this, contactID, mode, lobbyID, configID, gameParamList);
		}

		::System::Void SendPlanetfesExchangeMessage(::System::UInt32 contactID, ::System::UInt64 itemID, ::Enum_3_0A3761FE34514D6C_1 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET))(this, contactID, itemID, type);
		}

		::System::Boolean SafeAddContactPrivate(::System::UInt32 uid, ::System::UInt32 lastChatTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET))(this, uid, lastChatTime);
		}

		::System::Boolean SafeAddContactPrivate_1(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET))(this, uid);
		}

		::System::Void SafeRemoveContactPrivate(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET))(this, uid);
		}

		::System::Void SafeRemoveContactPrivate_1(::System::Collections::Generic::List_1<::System::UInt32>* uids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET))(this, uids);
		}

		::System::Void MarkContactRead(::System::UInt32 contactID, ::System::Boolean hasRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET))(this, contactID, hasRead);
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

		::System::Void SetDisableActivityInvite(::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET))(this, isDisable);
		}

		::System::Void SetIsActivityInviting(::System::Boolean isInviting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET))(this, isInviting);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetFriendReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET))(this);
		}

		::System::Void SendPamChatFeedback(::System::UInt32 id, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET))(this, id, desc);
		}

		::System::Void SendUpdateAiPamSettingsCsReq(::System::Boolean isForbidDataForTraining)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET))(this, isForbidDataForTraining);
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

		::System::Void _InitPamChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET))(this);
		}

		::System::Void _TryRemoveContactPrivate(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET))(this, uid);
		}

		::RPG::Client::ChatContactFriend* _GetFriendContact(::System::UInt32 contactID)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET))(this, contactID);
		}

		::RPG::Client::ChatContactFriend* _FindFriendContact(::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>* contacts, ::System::UInt32 contactID, ::RPG::Client::ContactRole type)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatContactFriend*>*, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FINDFRIENDCONTACT_OFFSET))(this, contacts, contactID, type);
		}

		::System::Void _RecordContact(::RPG::Client::ChatContactData* contact, ::System::Boolean recorded)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET))(this, contact, recorded);
		}

		::System::Void _FetchChatContacts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentTimestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean _IsFriendBanned(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET))(this, id);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetLoginChatInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRevcMsgScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnRecvAiPamChatEventScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnAiPamSendMsgScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamNextQuestionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTriggerAiPamSpeakScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAiPamResponseFeedbackScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSendMsgScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPrivateChatHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetChatFriendHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamChatHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamChatInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUpdateAiPamSettingsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAiPamResponseFeedbackCommentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAiPamMotionScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMMOTIONSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnFriendDataUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnChatHudBubblePanelShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET))(this, arg);
		}

		::System::Void _TriggerPamChatHudBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET))(this);
		}

		::System::Void _OnFirstGetNewAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET))(this, arg);
		}

		::System::Boolean get_EnableChat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET))(this);
		}

		::System::UInt32 get_InitHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_InitHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PageHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_PageHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHistoryPageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsDisableActivityInvite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET))(this);
		}

		::System::Void set_IsDisableActivityInvite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivityInviting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET))(this);
		}

		::System::Void set_IsActivityInviting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET))(this, value);
		}

		::RPG::Client::PamChatData* get_PamChat()
		{
			return ((::RPG::Client::PamChatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET))(this);
		}

		::System::Void _DataPrepared_b__28_0(::System::Collections::Generic::List_1<::System::Boolean>* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__DATAPREPARED_B__28_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
