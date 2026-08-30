#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UI/KeyCombination.h"
#include "unitysdk/Epic/OnlineServices/UI/NotificationLocation.h"

namespace Epic::OnlineServices::UI { class AcknowledgeEventIdOptions; }
namespace Epic::OnlineServices::UI { class AddNotifyDisplaySettingsUpdatedOptions; }
namespace Epic::OnlineServices::UI { class GetFriendsVisibleOptions; }
namespace Epic::OnlineServices::UI { class GetToggleFriendsKeyOptions; }
namespace Epic::OnlineServices::UI { class HideFriendsOptions; }
namespace Epic::OnlineServices::UI { class OnDisplaySettingsUpdatedCallback; }
namespace Epic::OnlineServices::UI { class OnHideFriendsCallback; }
namespace Epic::OnlineServices::UI { class OnShowFriendsCallback; }
namespace Epic::OnlineServices::UI { class SetDisplayPreferenceOptions; }
namespace Epic::OnlineServices::UI { class SetToggleFriendsKeyOptions; }
namespace Epic::OnlineServices::UI { class ShowFriendsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ACKNOWLEDGEEVENTID_OFFSET UNITYSDK_OFFSET(0xB16A770)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ADDNOTIFYDISPLAYSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0xB16A8D0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETFRIENDSVISIBLE_OFFSET UNITYSDK_OFFSET(0xB16AB80)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETNOTIFICATIONLOCATIONPREFERENCE_OFFSET UNITYSDK_OFFSET(0xB16ADE0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETTOGGLEFRIENDSKEY_OFFSET UNITYSDK_OFFSET(0xB16AE60)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_HIDEFRIENDS_OFFSET UNITYSDK_OFFSET(0xB16B0A0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ISVALIDKEYCOMBINATION_OFFSET UNITYSDK_OFFSET(0xB16B300)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONDISPLAYSETTINGSUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB16A570)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONHIDEFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB16A610)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONSHOWFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB16A6B0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_REMOVENOTIFYDISPLAYSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0xB16B420)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SETDISPLAYPREFERENCE_OFFSET UNITYSDK_OFFSET(0xB16B500)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SETTOGGLEFRIENDSKEY_OFFSET UNITYSDK_OFFSET(0xB16B660)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SHOWFRIENDS_OFFSET UNITYSDK_OFFSET(0xB16B7C0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB16A760)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB16A750)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int UIInterface_TypeDefinitionIndex = 45005;

	class UIInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AcknowledgecorrelationidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AcknowledgeeventidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifydisplaysettingsupdatedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EventidInvalid = 0x0; // 0x0
		// static const ::System::Int32 GetfriendsvisibleApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GettogglefriendskeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 HidefriendsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PrepresentApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReportkeyeventApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetdisplaypreferenceApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SettogglefriendskeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ShowfriendsApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AcknowledgeEventId(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ACKNOWLEDGEEVENTID_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyDisplaySettingsUpdated(::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ADDNOTIFYDISPLAYSETTINGSUPDATED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetFriendsVisible(::Epic::OnlineServices::UI::GetFriendsVisibleOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::UI::GetFriendsVisibleOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETFRIENDSVISIBLE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::UI::NotificationLocation GetNotificationLocationPreference()
		{
			return ((::Epic::OnlineServices::UI::NotificationLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETNOTIFICATIONLOCATIONPREFERENCE_OFFSET))(this);
		}

		::Epic::OnlineServices::UI::KeyCombination GetToggleFriendsKey(::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions* a1)
		{
			return ((::Epic::OnlineServices::UI::KeyCombination(*)(::PVOID, ::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETTOGGLEFRIENDSKEY_OFFSET))(this, a1);
		}

		::System::Void HideFriends(::Epic::OnlineServices::UI::HideFriendsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UI::OnHideFriendsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnHideFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_HIDEFRIENDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsValidKeyCombination(::Epic::OnlineServices::UI::KeyCombination a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::UI::KeyCombination))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ISVALIDKEYCOMBINATION_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyDisplaySettingsUpdated(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_REMOVENOTIFYDISPLAYSETTINGSUPDATED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetDisplayPreference(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SETDISPLAYPREFERENCE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetToggleFriendsKey(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SETTOGGLEFRIENDSKEY_OFFSET))(this, a1);
		}

		::System::Void ShowFriends(::Epic::OnlineServices::UI::ShowFriendsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UI::OnShowFriendsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnShowFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SHOWFRIENDS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnDisplaySettingsUpdatedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONDISPLAYSETTINGSUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnHideFriendsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONHIDEFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnShowFriendsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONSHOWFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
