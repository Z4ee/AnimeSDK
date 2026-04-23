#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByDisplayNameCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BFA480)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BFA4B0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BF9F30)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF9F10)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoByDisplayNameCallback_TypeDefinitionIndex = 41104;

	class OnQueryUserInfoByDisplayNameCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
