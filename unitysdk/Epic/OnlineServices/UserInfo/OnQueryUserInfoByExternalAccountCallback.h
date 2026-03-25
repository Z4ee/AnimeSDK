#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByExternalAccountCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83D2D90)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83D2DC0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83D2840)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83D2820)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoByExternalAccountCallback_TypeDefinitionIndex = 35280;

	class OnQueryUserInfoByExternalAccountCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
