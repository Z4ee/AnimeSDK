#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class LeaveLobbyCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8EC0E70)
#define EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8EC0EA0)
#define EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8EC0920)
#define EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC0900)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnLeaveLobbyCallback_TypeDefinitionIndex = 41956;

	class OnLeaveLobbyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONLEAVELOBBYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
