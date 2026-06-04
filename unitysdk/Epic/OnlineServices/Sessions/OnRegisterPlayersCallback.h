#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class RegisterPlayersCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0E1010)
#define EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0E1040)
#define EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0E1000)
#define EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E0F10)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnRegisterPlayersCallback_TypeDefinitionIndex = 42092;

	class OnRegisterPlayersCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREGISTERPLAYERSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
