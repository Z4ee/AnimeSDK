#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyMemberStatusReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE40C0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE40F0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCE40B0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE3FC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyMemberStatusReceivedCallback_TypeDefinitionIndex = 45808;

	class OnLobbyMemberStatusReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
