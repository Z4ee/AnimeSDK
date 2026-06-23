#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class UpdateParentEmailCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D275C10)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D275C40)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D275710)
#define EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2756F0)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnUpdateParentEmailCallback_TypeDefinitionIndex = 35856;

	class OnUpdateParentEmailCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::UpdateParentEmailCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONUPDATEPARENTEMAILCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
