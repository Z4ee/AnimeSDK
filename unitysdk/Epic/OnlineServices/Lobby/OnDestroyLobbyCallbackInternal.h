#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x868B4D0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x868B520)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x868B1E0)
#define EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x868B1C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnDestroyLobbyCallbackInternal_TypeDefinitionIndex = 36123;

	class OnDestroyLobbyCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONDESTROYLOBBYCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
