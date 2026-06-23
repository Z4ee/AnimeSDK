#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class SendInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C53CDC0)
#define EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C53CDF0)
#define EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C53C8C0)
#define EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53C8A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnSendInviteCallback_TypeDefinitionIndex = 35758;

	class OnSendInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::SendInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::SendInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::SendInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::SendInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
