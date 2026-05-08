#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UI { class ShowFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A813530)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A813560)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A813030)
#define EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A813020)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnShowFriendsCallback_TypeDefinitionIndex = 33364;

	class OnShowFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UI::ShowFriendsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UI::ShowFriendsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONSHOWFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
