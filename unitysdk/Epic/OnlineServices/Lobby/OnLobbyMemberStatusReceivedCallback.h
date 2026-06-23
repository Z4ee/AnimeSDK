#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbyMemberStatusReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B60F7E0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B60F810)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B60F2E0)
#define EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B60F2C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLobbyMemberStatusReceivedCallback_TypeDefinitionIndex = 35744;

	class OnLobbyMemberStatusReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
