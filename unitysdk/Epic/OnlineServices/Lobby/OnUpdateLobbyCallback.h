#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class UpdateLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB39DFB0)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB39DFE0)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB39DFA0)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB39DEB0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnUpdateLobbyCallback_TypeDefinitionIndex = 45824;

	class OnUpdateLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
