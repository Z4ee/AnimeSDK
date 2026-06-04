#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UI { class ShowFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA102970)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1029A0)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA102960)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA102870)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnShowFriendsCallback_TypeDefinitionIndex = 41948;

	class OnShowFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::UI::ShowFriendsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UI::ShowFriendsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
