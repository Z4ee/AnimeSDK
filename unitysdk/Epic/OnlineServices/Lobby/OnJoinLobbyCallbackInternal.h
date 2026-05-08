#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A869460)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A8694B0)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A869160)
#define EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A869150)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnJoinLobbyCallbackInternal_TypeDefinitionIndex = 34172;

	class OnJoinLobbyCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONJOINLOBBYCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
