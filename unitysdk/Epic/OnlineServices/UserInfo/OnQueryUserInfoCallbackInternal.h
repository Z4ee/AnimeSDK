#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D280640)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D280690)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D280350)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D280330)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoCallbackInternal_TypeDefinitionIndex = 34891;

	class OnQueryUserInfoCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
