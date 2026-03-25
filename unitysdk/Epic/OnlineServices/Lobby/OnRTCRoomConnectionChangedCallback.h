#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Lobby { class RTCRoomConnectionChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8691F00)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8691F30)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86919B0)
#define EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8691990)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int OnRTCRoomConnectionChangedCallback_TypeDefinitionIndex = 36146;

	class OnRTCRoomConnectionChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ONRTCROOMCONNECTIONCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
