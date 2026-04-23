#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class UpdateSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BCFAA0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BCFAD0)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BCF550)
#define EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCF530)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnUpdateSessionCallback_TypeDefinitionIndex = 41303;

	class OnUpdateSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONUPDATESESSIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
