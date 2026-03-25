#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LuaUIController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x9B596B0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B599F0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__CANSHOW_OFFSET UNITYSDK_OFFSET(0x9B58F10)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9B58F70)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET UNITYSDK_OFFSET(0x9B58FD0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9B59870)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET UNITYSDK_OFFSET(0x9B59AF0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x9B59EC0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__CANSHOW_OFFSET UNITYSDK_OFFSET(0x9B58F20)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B58FE0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET UNITYSDK_OFFSET(0x9B5A4B0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET UNITYSDK_OFFSET(0x9B59F10)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B5A2D0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET UNITYSDK_OFFSET(0x9B5A100)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x9B5A230)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x9B59BE0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET UNITYSDK_OFFSET(0x9B59E60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2InviteToastService_TypeDefinitionIndex = 53659;

	class MatchThreeV2InviteToastService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* _StartReasonSet; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _AutomaticallySetCanShowOnFocus; // 0x18
		::RPG::Client::LuaUIController* _CurrentDialog; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* _PendingInvitations; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _ManuallySetCanShowOnFocus; // 0x30
		::System::Boolean _Disabled; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Boolean get__CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__CANSHOW_OFFSET))(this);
		}

		::System::Void set__CanShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__CANSHOW_OFFSET))(this, value);
		}

		::System::Boolean get__IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get__IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET))(this);
		}

		::System::Void Acquire(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET))(this, reason);
		}

		::System::Void Release(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET))(this, reason);
		}

		::System::Void Clear(::System::Boolean stopCurrent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET))(this, stopCurrent);
		}

		::System::Void SetCanShow(::System::Boolean canShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET))(this, canShow);
		}

		::System::Void SetDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET))(this, disabled);
		}

		::System::Void _TryPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET))(this);
		}

		::System::Void _TryStopCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET))(this);
		}

		::System::Void _OnReceiveContact(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET))(this, param);
		}

		::System::Void _OnToastDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _OnFocusChanged(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET))(this, _);
		}

		static ::System::Boolean _IsValidInvitation(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET))(messageData);
		}

		static ::System::Boolean _IsRelevantPlayTypeBySeason(::Enum_3_F80BFD5B986D5503_3 lobbyMode, ::Enum_3_F80BFD5B986D5503_3 inviteMode)
		{
			return ((::System::Boolean(*)(::Enum_3_F80BFD5B986D5503_3, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET))(lobbyMode, inviteMode);
		}
	};
}
