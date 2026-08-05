#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class OnFriendsUpdateInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9C7080)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9C70B0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9C6B60)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C6B40)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnFriendsUpdateCallback_TypeDefinitionIndex = 36553;

	class OnFriendsUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::OnFriendsUpdateInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::OnFriendsUpdateInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
