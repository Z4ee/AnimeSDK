#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class EndSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C181E80)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C181EB0)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C181E70)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C181D80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnEndSessionCallback_TypeDefinitionIndex = 42945;

	class OnEndSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::EndSessionCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::EndSessionCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
