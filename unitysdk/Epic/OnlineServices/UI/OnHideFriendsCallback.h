#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UI { class HideFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD90DB0)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD90DE0)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD908B0)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD908A0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnHideFriendsCallback_TypeDefinitionIndex = 33362;

	class OnHideFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::UI::HideFriendsCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UI::HideFriendsCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
