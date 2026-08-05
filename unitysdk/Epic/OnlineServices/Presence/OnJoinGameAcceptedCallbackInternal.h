#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BC290)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BC2E0)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BBF80)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBF60)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnJoinGameAcceptedCallbackInternal_TypeDefinitionIndex = 36036;

	class OnJoinGameAcceptedCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
