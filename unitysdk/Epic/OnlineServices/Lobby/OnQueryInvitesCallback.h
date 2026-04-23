#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class QueryInvitesCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8EC4E50)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8EC4E80)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8EC4900)
#define EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC48E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnQueryInvitesCallback_TypeDefinitionIndex = 41970;

	class OnQueryInvitesCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
