#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class OnFriendsUpdateInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB36C020)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB36C050)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB36AFF0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB36BF30)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnFriendsUpdateCallback_TypeDefinitionIndex = 45958;

	class OnFriendsUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::OnFriendsUpdateInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::OnFriendsUpdateInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
