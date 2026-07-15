#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LuaUIController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x1AB82650)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AB829E0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__CANSHOW_OFFSET UNITYSDK_OFFSET(0x1AB81E30)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AB81ED0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET UNITYSDK_OFFSET(0x1AB81F30)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AB82830)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET UNITYSDK_OFFSET(0x1AB82AE0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x1AB82F50)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__CANSHOW_OFFSET UNITYSDK_OFFSET(0x1AB81E80)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81F80)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET UNITYSDK_OFFSET(0x1AB83430)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET UNITYSDK_OFFSET(0x1AB82FA0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB832E0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET UNITYSDK_OFFSET(0x1AB83110)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x1AB83240)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x1AB82C10)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET UNITYSDK_OFFSET(0x1AB82EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2InviteToastService_TypeDefinitionIndex = 63099;

	class MatchThreeV2InviteToastService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* _ManuallySetCanShowOnFocus; // 0x10
		::RPG::Client::LuaUIController* _CurrentDialog; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* _StartReasonSet; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* _PendingInvitations; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _AutomaticallySetCanShowOnFocus; // 0x30
		::System::Boolean _Disabled; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Boolean get__CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__CANSHOW_OFFSET))(this);
		}

		::System::Void set__CanShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__CANSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get__IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get__IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET))(this);
		}

		::System::Void Acquire(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET))(this, a1);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET))(this, a1);
		}

		::System::Void SetCanShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET))(this, a1);
		}

		::System::Void SetDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET))(this, a1);
		}

		::System::Void _TryPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET))(this);
		}

		::System::Void _TryStopCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET))(this);
		}

		::System::Void _OnReceiveContact(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET))(this, a1);
		}

		::System::Void _OnToastDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _OnFocusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsValidInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET))(a1);
		}

		static ::System::Boolean _IsRelevantPlayTypeBySeason(::Enum_3_01618AD0437C8486_2 a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::System::Boolean(*)(::Enum_3_01618AD0437C8486_2, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET))(a1, a2);
		}
	};
}
