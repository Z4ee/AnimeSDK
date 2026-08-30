#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class QueryInvitesCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE4940)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE4970)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE4930)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE4840)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnQueryInvitesCallback_TypeDefinitionIndex = 45816;

	class OnQueryInvitesCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
