#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyInviteAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x868DF20)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x868DF50)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x868D9D0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x868D9B0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyInviteAcceptedCallback_TypeDefinitionIndex = 36132;

	class OnLobbyInviteAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
