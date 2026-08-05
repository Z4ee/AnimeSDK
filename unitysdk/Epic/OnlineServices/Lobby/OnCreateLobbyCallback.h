#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class CreateLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF5ACF0)
#define EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF5AD20)
#define EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF58EB0)
#define EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5ACD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnCreateLobbyCallback_TypeDefinitionIndex = 36387;

	class OnCreateLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONCREATELOBBYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
