#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LobbySearchFindCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2F6A50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2F6A80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2F6000)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F6960)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchOnFindCallback_TypeDefinitionIndex = 42733;

	class LobbySearchOnFindCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
