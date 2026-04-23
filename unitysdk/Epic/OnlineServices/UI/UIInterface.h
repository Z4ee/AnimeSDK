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

#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ACKNOWLEDGEEVENTID_OFFSET UNITYSDK_OFFSET(0x8BF65F0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ADDNOTIFYDISPLAYSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0x8BF6750)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETFRIENDSVISIBLE_OFFSET UNITYSDK_OFFSET(0x8BF69D0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETNOTIFICATIONLOCATIONPREFERENCE_OFFSET UNITYSDK_OFFSET(0x8BF6C30)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_GETTOGGLEFRIENDSKEY_OFFSET UNITYSDK_OFFSET(0x8BF6CB0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_HIDEFRIENDS_OFFSET UNITYSDK_OFFSET(0x8BF6ED0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ISVALIDKEYCOMBINATION_OFFSET UNITYSDK_OFFSET(0x8BF7110)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONDISPLAYSETTINGSUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BF6420)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONHIDEFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BF64B0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_ONSHOWFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BF6540)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_REMOVENOTIFYDISPLAYSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0x8BF7230)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SETDISPLAYPREFERENCE_OFFSET UNITYSDK_OFFSET(0x8BF7310)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SETTOGGLEFRIENDSKEY_OFFSET UNITYSDK_OFFSET(0x8BF7470)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE_SHOWFRIENDS_OFFSET UNITYSDK_OFFSET(0x8BF75D0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8BF65E0)
#define EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF65D0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int UIInterface_TypeDefinitionIndex = 41159;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AcknowledgeEventId(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ACKNOWLEDGEEVENTID_OFFSET))(this, options);
		}

		::System::UInt64 AddNotifyDisplaySettingsUpdated(::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ADDNOTIFYDISPLAYSETTINGSUPDATED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::Boolean GetFriendsVisible(::Epic::OnlineServices::UI::GetFriendsVisibleOptions* options)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::UI::GetFriendsVisibleOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETFRIENDSVISIBLE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::UI::NotificationLocation GetNotificationLocationPreference()
		{
			return ((::Epic::OnlineServices::UI::NotificationLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETNOTIFICATIONLOCATIONPREFERENCE_OFFSET))(this);
		}

		::Epic::OnlineServices::UI::KeyCombination GetToggleFriendsKey(::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions* options)
		{
			return ((::Epic::OnlineServices::UI::KeyCombination(*)(::PVOID, ::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_GETTOGGLEFRIENDSKEY_OFFSET))(this, options);
		}

		::System::Void HideFriends(::Epic::OnlineServices::UI::HideFriendsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UI::OnHideFriendsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnHideFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_HIDEFRIENDS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Boolean IsValidKeyCombination(::Epic::OnlineServices::UI::KeyCombination keyCombination)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::UI::KeyCombination))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ISVALIDKEYCOMBINATION_OFFSET))(this, keyCombination);
		}

		::System::Void RemoveNotifyDisplaySettingsUpdated(::System::UInt64 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_REMOVENOTIFYDISPLAYSETTINGSUPDATED_OFFSET))(this, id);
		}

		::Epic::OnlineServices::Result SetDisplayPreference(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SETDISPLAYPREFERENCE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetToggleFriendsKey(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SETTOGGLEFRIENDSKEY_OFFSET))(this, options);
		}

		::System::Void ShowFriends(::Epic::OnlineServices::UI::ShowFriendsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UI::OnShowFriendsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::ShowFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::UI::OnShowFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_SHOWFRIENDS_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnDisplaySettingsUpdatedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONDISPLAYSETTINGSUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnHideFriendsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONHIDEFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnShowFriendsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_UIINTERFACE_ONSHOWFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
