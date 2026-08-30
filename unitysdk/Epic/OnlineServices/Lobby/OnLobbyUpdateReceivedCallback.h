#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyUpdateReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB39D2F0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB39D320)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB39D2E0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB39D1F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyUpdateReceivedCallback_TypeDefinitionIndex = 45812;

	class OnLobbyUpdateReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
