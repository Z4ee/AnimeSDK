#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class DestroyLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF911B0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF911E0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF911A0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF910B0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnDestroyLobbyCallback_TypeDefinitionIndex = 43612;

	class OnDestroyLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
