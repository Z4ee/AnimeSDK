#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class PermissionsUpdateReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAB6D60)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAB6D90)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAB6A10)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB6C70)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnPermissionsUpdateReceivedCallback_TypeDefinitionIndex = 43730;

	class OnPermissionsUpdateReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
