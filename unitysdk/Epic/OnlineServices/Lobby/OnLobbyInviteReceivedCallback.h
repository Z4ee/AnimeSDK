#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyInviteReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DBD4D70)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DBD4DA0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DBD4850)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD4830)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyInviteReceivedCallback_TypeDefinitionIndex = 36401;

	class OnLobbyInviteReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
