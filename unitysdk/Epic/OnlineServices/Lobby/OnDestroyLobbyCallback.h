#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class DestroyLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A80BDD0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A80BE00)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A80A4B0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80BDC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnDestroyLobbyCallback_TypeDefinitionIndex = 34167;

	class OnDestroyLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
