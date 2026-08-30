#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByExternalAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D44A560)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D44A590)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D44A550)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D44A460)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoByExternalAccountCallback_TypeDefinitionIndex = 44952;

	class OnQueryUserInfoByExternalAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
