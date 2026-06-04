#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class RTCRoomConnectionChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2FA8F0)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2FA920)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2FA8E0)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FA7F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnRTCRoomConnectionChangedCallback_TypeDefinitionIndex = 42775;

	class OnRTCRoomConnectionChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
