#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyUpdateReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C71C5D0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C71C600)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C71C0D0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71C0B0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyUpdateReceivedCallback_TypeDefinitionIndex = 35748;

	class OnLobbyUpdateReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
