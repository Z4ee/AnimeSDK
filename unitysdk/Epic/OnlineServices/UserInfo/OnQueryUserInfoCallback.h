#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UserInfo { class QueryUserInfoCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB16E6D0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB16E700)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB16E6C0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB16E5D0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoCallback_TypeDefinitionIndex = 44954;

	class OnQueryUserInfoCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
