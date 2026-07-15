#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class QueryFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAAF270)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAAF2A0)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAAD910)
#define EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAF180)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnQueryFriendsCallback_TypeDefinitionIndex = 43780;

	class OnQueryFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONQUERYFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
