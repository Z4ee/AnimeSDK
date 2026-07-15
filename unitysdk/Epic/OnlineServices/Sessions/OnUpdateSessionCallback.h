#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class UpdateSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1835E0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C183610)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1835D0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1834E0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnUpdateSessionCallback_TypeDefinitionIndex = 42967;

	class OnUpdateSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
