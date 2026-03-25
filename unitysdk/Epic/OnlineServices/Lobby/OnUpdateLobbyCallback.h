#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class UpdateLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8693A60)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8693A90)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8693510)
#define EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86934F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnUpdateLobbyCallback_TypeDefinitionIndex = 36152;

	class OnUpdateLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONUPDATELOBBYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
