#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::UI { class HideFriendsCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E4C80)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E4CB0)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E4C70)
#define EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4B80)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnHideFriendsCallback_TypeDefinitionIndex = 42807;

	class OnHideFriendsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::UI::HideFriendsCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::UI::HideFriendsCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONHIDEFRIENDSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
