#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class QueryFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DBCF040)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DBCF070)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DBCEB20)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCEB00)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnQueryFriendsCallback_TypeDefinitionIndex = 36557;

	class OnQueryFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
