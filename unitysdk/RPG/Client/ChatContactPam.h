#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/ChatContactPam_ChatState.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"

class Class_1_73EF373A7568D67C;
class Class_1_803E8F9F8C8CEA76;
class Class_1_98274A1A3981A020;
class Class_1_C9DFE5EE7107C629_2;
namespace RPG::Client { class ChatContactPam_SendBlockData; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class PamChatData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET UNITYSDK_OFFSET(0x9F7C700)
#define RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9F7B800)
#define RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9F7ED40)
#define RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET UNITYSDK_OFFSET(0x9F7B8D0)
#define RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET UNITYSDK_OFFSET(0x9F7E9B0)
#define RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x9F7B970)
#define RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7EE80)
#define RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9F7EDA0)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET UNITYSDK_OFFSET(0x9F7ECF0)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x9F7ED90)
#define RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET UNITYSDK_OFFSET(0x9F7B880)
#define RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9F7BC20)
#define RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET UNITYSDK_OFFSET(0x9F7C240)
#define RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F7B9B0)
#define RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET UNITYSDK_OFFSET(0x9F7C6A0)
#define RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0x9F7E660)
#define RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET UNITYSDK_OFFSET(0x9F7E310)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET UNITYSDK_OFFSET(0x9F7D640)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET UNITYSDK_OFFSET(0x9F7C8D0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7D400)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET UNITYSDK_OFFSET(0x9F7D460)
#define RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET UNITYSDK_OFFSET(0x9F7BBD0)
#define RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x9F7BC60)
#define RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7CF00)
#define RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x9F7C940)
#define RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7D210)
#define RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7CFA0)
#define RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET UNITYSDK_OFFSET(0x9F7E6B0)
#define RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x9F7B920)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7E030)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7E190)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7E450)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7D790)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0x9F7C1F0)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET UNITYSDK_OFFSET(0x9F7E9F0)
#define RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7B6B0)
#define RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7CB90)
#define RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0x9F7E5C0)
#define RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET UNITYSDK_OFFSET(0x9F7C170)
#define RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7E8D0)
#define RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7D050)
#define RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7D100)
#define RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7D4F0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET UNITYSDK_OFFSET(0x9F7E610)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0x9F7D1B0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x9F7CE60)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7C0F0)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7D9F0)
#define RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET UNITYSDK_OFFSET(0x9F7DFC0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET UNITYSDK_OFFSET(0x9F7BA40)
#define RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0x9F7D0B0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9F7CB00)
#define RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET UNITYSDK_OFFSET(0x9F7D5E0)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET UNITYSDK_OFFSET(0x9F7D270)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET UNITYSDK_OFFSET(0x9F7D340)
#define RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0x9F7DDF0)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F7CAB0)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET UNITYSDK_OFFSET(0x9F7D6B0)
#define RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x9F7EF00)
#define RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9F7EF40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_TypeDefinitionIndex = 58228;

	class ChatContactPam : public ::RPG::Client::ChatContactData
	{
	public:
		// static const ::System::Int32 _InitialHistoryPage = 0xFFFFFFFF; // 0x0
		::System::String* _CurrentResponseID; // 0x28
		::Class_1_98274A1A3981A020* _ServerProxy; // 0x30
		::System::String* _CompletedResponseID; // 0x38
		::Class_1_803E8F9F8C8CEA76* _PamChatGreetingService; // 0x40
		::RPG::Client::PamChatData* _PamChat; // 0x48
		::Class_1_73EF373A7568D67C* _FunctionCallService; // 0x50
		::RPG::Client::ChatContactPam_SendBlockData* _PreviousSendBlock; // 0x58
		::System::Int32 _SyncedHistoryPage; // 0x60
		::RPG::Client::ChatContactPam_ChatState _ChatState; // 0x64
		::System::Int32 _LastCompletedMessageIndex; // 0x68
		::RPG::Client::ChatContactPam_Mode _PamMode; // 0x6C

		::System::Void _ctor(::RPG::Client::ChatContactPam_Mode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET))(this, mode);
		}

		static ::RPG::Client::ChatContactPam* Create(::RPG::Client::PamChatData* pamChat, ::RPG::Client::ChatContactPam_Mode mode)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::RPG::Client::PamChatData*, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET))(pamChat, mode);
		}

		static ::RPG::Client::ChatContactPam_Mode LLMRoleIDToMode(::System::UInt32 roleID)
		{
			return ((::RPG::Client::ChatContactPam_Mode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET))(roleID);
		}

		::Enum_3_0A3761FE34514D6C_3 GetLLMChatRoleType()
		{
			return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET))(this);
		}

		::System::Void SetServerProxy(::Class_1_98274A1A3981A020* serverProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98274A1A3981A020*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET))(this, serverProxy);
		}

		::Class_1_98274A1A3981A020* GetServerProxy()
		{
			return ((::Class_1_98274A1A3981A020*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET))(this);
		}

		::System::Void MarkHistoryInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void RestoreLatestResponse(::System::String* responseID, ::System::Collections::Generic::IList_1<::Class_1_C9DFE5EE7107C629_2*>* chatEvents)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::Class_1_C9DFE5EE7107C629_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET))(this, responseID, chatEvents);
		}

		::System::Void ResetChatState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET))(this);
		}

		::System::Void OnResponseFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET))(this);
		}

		::System::Void CreateNewChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET))(this);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET))(this, blockType, data);
		}

		::System::Void SendFunctionMessage(::RPG::Client::PamChatQuickFunctionType type, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET))(this, type, avatarID);
		}

		::System::Void SendTouchMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET))(this);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* messages, ::System::UInt32 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET))(this, messages, page);
		}

		::System::Void SendSuggestionMessage(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET))(this, message);
		}

		::System::Void RequestGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET))(this);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET))(this);
		}

		::System::Void RequestRegenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET))(this);
		}

		::System::Void RequestFeedback(::System::Boolean isLike, ::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET))(this, isLike, cancel);
		}

		::System::Void OnLLMChatEvent(::Class_1_C9DFE5EE7107C629_2* chatEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET))(this, chatEvent);
		}

		::System::Void OnSuggestionsReceived(::System::Collections::Generic::List_1<::System::String*>* suggestions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET))(this, suggestions);
		}

		::System::Void OnSendMessageSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET))(this);
		}

		::System::Void SetFeedback(::System::Boolean isLike, ::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET))(this, isLike, cancel);
		}

		::System::String* GetResponseID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET))(this);
		}

		::System::Void _TryRequestHelperGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET))(this);
		}

		::System::Void _TryRequestQuestionerGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET))(this);
		}

		::System::Void _RequestGenerateSuggestions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET))(this);
		}

		::System::Void _UpdateResponseID(::System::String* responseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET))(this, responseID);
		}

		::System::Void _ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET))(this);
		}

		::System::Boolean _IsResponseUpToDate(::System::String* responseID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET))(this, responseID);
		}

		::System::Void _ClearResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordCompletedResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Void _ResetLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Boolean _HasPreviousSendBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _ClearPreviousSendBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _AppendTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET))(this);
		}

		::System::Void _AppendSuggestionsToLastMessage(::System::Collections::Generic::List_1<::System::String*>* suggestions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET))(this, suggestions);
		}

		::System::Void _AppendFeedbackBlockToLastMessage(::System::Boolean canRegenerate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET))(this, canRegenerate);
		}

		::System::Void _AppendFailedMessage(::Enum_3_DB663931210BBC27_9 failedType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET))(this, failedType);
		}

		::System::Void _RemoveTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* _LastMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET))(this);
		}

		::System::Void _RemoveIncompleteMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET))(this);
		}

		::System::Void _RecallPamMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET))(this);
		}

		::System::Void _ResetPamTouchIfNeeded(::RPG::Client::MessageContentBlock_BlockType blockType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET))(this, blockType);
		}

		::System::Void _SendPreviousMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET))(this);
		}

		::System::Void _DoSendMessage(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data, ::System::Boolean isRegen)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET))(this, blockType, data, isRegen);
		}

		::System::Void _RecordSendMessageData(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET))(this, blockType, data);
		}

		::System::Void _TryResponseFunctionCall(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET))(this, messageData);
		}

		::System::Void _UpdateChatQuestProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET))(this);
		}

		static ::Enum_3_A35B38E5F9115A76 GetAiPamQuickFunctionType(::RPG::Client::PamChatQuickFunctionType type)
		{
			return ((::Enum_3_A35B38E5F9115A76(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET))(type);
		}

		::System::Boolean get_IsWaitingForResponse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET))(this);
		}

		::System::Boolean get_IsLLMEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET))(this);
		}

		::System::Boolean get_CanViewHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* P0, ::System::UInt32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET))(this, P0, P1);
		}
	};
}
