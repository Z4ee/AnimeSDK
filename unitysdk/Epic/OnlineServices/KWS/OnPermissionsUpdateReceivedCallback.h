#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::KWS { class PermissionsUpdateReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D694510)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D694540)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D6941C0)
#define EPIC_ONLINESERVICES_KWS_ONPERMISSIONSUPDATERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D694420)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int OnPermissionsUpdateReceivedCallback_TypeDefinitionIndex = 45912;

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
