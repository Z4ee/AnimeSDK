#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class UpdateParentEmailCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1DC0)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1DF0)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2D1270)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D1CD0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnUpdateParentEmailCallback_TypeDefinitionIndex = 42877;

	class OnUpdateParentEmailCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
