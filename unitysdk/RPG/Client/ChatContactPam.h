#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_18.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_1.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/ChatContactPam_ChatState.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"

class Class_1_43BD383C98B4C0C5_131;
class Class_1_803E8F9F8C8CEA76;
namespace RPG::Client { class ChatContactPam_SendBlockData; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class PamChatData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTPAM_APPENDFAILEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9310F00)
#define RPG_CLIENT_CHATCONTACTPAM_APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x93117D0)
#define RPG_CLIENT_CHATCONTACTPAM_APPENDTYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x9311210)
#define RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET UNITYSDK_OFFSET(0x93105B0)
#define RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9310240)
#define RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9312180)
#define RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET UNITYSDK_OFFSET(0x9312130)
#define RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x9310380)
#define RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x9312220)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET UNITYSDK_OFFSET(0x93121E0)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x93121D0)
#define RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET UNITYSDK_OFFSET(0x9310410)
#define RPG_CLIENT_CHATCONTACTPAM_RECALLPAMMESSAGES_OFFSET UNITYSDK_OFFSET(0x9310470)
#define RPG_CLIENT_CHATCONTACTPAM_REMOVETYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x93115E0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET UNITYSDK_OFFSET(0x9310E90)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTGENERATESUGGESTIONS_OFFSET UNITYSDK_OFFSET(0x9310D30)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET UNITYSDK_OFFSET(0x9310730)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x9310CD0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET UNITYSDK_OFFSET(0x9310DA0)
#define RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET UNITYSDK_OFFSET(0x93103C0)
#define RPG_CLIENT_CHATCONTACTPAM_SELECTTARGETAVATAR_OFFSET UNITYSDK_OFFSET(0x9311C10)
#define RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x93107D0)
#define RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x9310C30)
#define RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET UNITYSDK_OFFSET(0x93119A0)
#define RPG_CLIENT_CHATCONTACTPAM_SETRESPONSEID_OFFSET UNITYSDK_OFFSET(0x93120E0)
#define RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x9310330)
#define RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9310180)
#define RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9310850)
#define RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9311470)
#define RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9310BC0)
#define RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET UNITYSDK_OFFSET(0x93104C0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x9310B20)
#define RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET UNITYSDK_OFFSET(0x9310E30)
#define RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x9312300)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_TypeDefinitionIndex = 51303;

	class ChatContactPam : public ::RPG::Client::ChatContactData
	{
	public:
		// static const ::System::Int32 _InitialHistoryPage = 0xFFFFFFFF; // 0x0
		::Class_1_43BD383C98B4C0C5_131* _ServerProxy; // 0x28
		::RPG::Client::PamChatData* _PamChat; // 0x30
		::System::String* _ResponseID; // 0x38
		::Class_1_803E8F9F8C8CEA76* _PamChatGreetingService; // 0x40
		::RPG::Client::ChatContactPam_SendBlockData* _PreviousSendBlock; // 0x48
		::System::Int32 _SyncedHistoryPage; // 0x50
		::RPG::Client::ChatContactPam_ChatState _ChatState; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChatContactPam* Create(::RPG::Client::PamChatData* pamChat, ::Class_1_803E8F9F8C8CEA76* pamChatGreetingService)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::RPG::Client::PamChatData*, ::Class_1_803E8F9F8C8CEA76*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET))(pamChat, pamChatGreetingService);
		}

		::System::Void SetServerProxy(::Class_1_43BD383C98B4C0C5_131* serverProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_131*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET))(this, serverProxy);
		}

		::Class_1_43BD383C98B4C0C5_131* GetServerProxy()
		{
			return ((::Class_1_43BD383C98B4C0C5_131*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET))(this);
		}

		::System::Void ResetChatState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET))(this);
		}

		::System::Void OnResponseFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET))(this);
		}

		::System::Void RecallPamMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RECALLPAMMESSAGES_OFFSET))(this);
		}

		::System::Void CreateNewChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET))(this);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET))(this, blockType, data);
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

		::System::Void RequestGenerateSuggestions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTGENERATESUGGESTIONS_OFFSET))(this);
		}

		::System::Void RequestRegenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET))(this);
		}

		::System::Void RequestFeedback(::System::Boolean isLike, ::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET))(this, isLike, cancel);
		}

		::System::Void AppendFailedMessage(::Enum_3_0A3761FE34514D6C_18 failedType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_18))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_APPENDFAILEDMESSAGE_OFFSET))(this, failedType);
		}

		::System::Void AppendTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_APPENDTYPINGMESSAGE_OFFSET))(this);
		}

		::System::Void RemoveTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REMOVETYPINGMESSAGE_OFFSET))(this);
		}

		::System::Void AppendSuggestionsToLastMessage(::System::Collections::Generic::List_1<::System::String*>* suggestions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET))(this, suggestions);
		}

		::System::Void SetFeedback(::System::Boolean isLike, ::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET))(this, isLike, cancel);
		}

		::System::Void SelectTargetAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SELECTTARGETAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void SetResponseID(::System::String* responseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETRESPONSEID_OFFSET))(this, responseID);
		}

		::System::String* GetResponseID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* _LastMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET))(this);
		}

		::System::Void _RecallPamMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET))(this);
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

		static ::Enum_3_4608E37A1B3D374A_1 GetAiPamQuickFunctionType(::RPG::Client::PamChatQuickFunctionType type)
		{
			return ((::Enum_3_4608E37A1B3D374A_1(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET))(type);
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

		::System::Void __iFixBaseProxy__OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* P0, ::System::UInt32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM___IFIXBASEPROXY__ONSYNCHISTORY_OFFSET))(this, P0, P1);
		}
	};
}
