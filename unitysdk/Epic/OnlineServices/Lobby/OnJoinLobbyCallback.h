#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class JoinLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D939140)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D939170)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D938C20)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D938C00)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnJoinLobbyCallback_TypeDefinitionIndex = 36393;

	class OnJoinLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
