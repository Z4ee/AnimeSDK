#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class ToggleGroup; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BD89AC0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_CLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x1BD8AF10)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_CLICKLOGOUTBUTTON_OFFSET UNITYSDK_OFFSET(0x1BD8AF30)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x1BD8B0E0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BD8B150)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x1BD8AF80)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BD8A230)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8B170)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LogoutConfirm_TypeDefinitionIndex = 9301;

	class LogoutConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LogoutConfirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LogoutConfirm**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm_TypeDefinitionIndex)->GetStaticField(0x23A90);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* LogoutAndClearToggleTipsPath; // 0x0
		// static const ::System::String* LogoutAndClearNotePath; // 0x0
		// static const ::System::String* LogoutAndSaveToggleTipsPath; // 0x0
		// static const ::System::String* LogoutAndSaveNotePath; // 0x0
		// static const ::System::String* CancelButtonTextPath; // 0x0
		// static const ::System::String* LogoutButtonTextPath; // 0x0
		::UnityEngine::UI::Button* cancelButton; // 0x58
		::UnityEngine::UI::Button* logoutButton; // 0x60
		::UnityEngine::UI::Toggle* clearToggle; // 0x68
		::UnityEngine::UI::Toggle* saveToggle; // 0x70
		::UnityEngine::UI::ToggleGroup* toggleGroup; // 0x78
		::System::Action* OnCancelButtonClicked; // 0x80
		::System::Action_1<::System::Boolean>* OnLogoutButtonClicked; // 0x88
		::System::Boolean isSaved; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ClickCancelButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_CLICKCANCELBUTTON_OFFSET))(this);
		}

		::System::Void ClickLogoutButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_CLICKLOGOUTBUTTON_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_HIDE_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_ONDESTROY_OFFSET))(this);
		}
	};
}
