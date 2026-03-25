#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class UnregisterPlayersCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83A7170)
#define EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83A71A0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83A6C20)
#define EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83A6C00)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnUnregisterPlayersCallback_TypeDefinitionIndex = 35475;

	class OnUnregisterPlayersCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUNREGISTERPLAYERSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
