#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UserInfo { class QueryUserInfoCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DBDFC80)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DBDFCB0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DBDF760)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBDF740)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoCallback_TypeDefinitionIndex = 35549;

	class OnQueryUserInfoCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
