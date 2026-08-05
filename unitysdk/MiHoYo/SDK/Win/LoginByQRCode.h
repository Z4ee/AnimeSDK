#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_LOGINBYQRCODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C957C90)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_BACK_OFFSET UNITYSDK_OFFSET(0x1C95A260)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_CLICKSAVERECORDTOGGLE_OFFSET UNITYSDK_OFFSET(0x1C95A700)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C95A280)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_HIDE_OFFSET UNITYSDK_OFFSET(0x1C95A1F0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C95A760)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C95A0B0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C95A2A0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SETBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0x1C95A1B0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SETSUPPORTEDSCANNINGAPPS_OFFSET UNITYSDK_OFFSET(0x1C95A2C0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C95A6A0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1C95A540)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODELOADING_OFFSET UNITYSDK_OFFSET(0x1C95A2D0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x1C95A490)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x1C95A3A0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWSCANSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C95A5D0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOW_OFFSET UNITYSDK_OFFSET(0x1C95A0D0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_START_OFFSET UNITYSDK_OFFSET(0x1C95A0A0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_UPDATESAVERECORDTIPS_OFFSET UNITYSDK_OFFSET(0x1C959AF0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1C9599B0)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95A780)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByQRCode_TypeDefinitionIndex = 21631;

	class LoginByQRCode : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByQRCode** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByQRCode**)Il2CppClass::FromTypeDefinitionIndex(LoginByQRCode_TypeDefinitionIndex)->GetStaticField(0xA3E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* AccountLoginButtonPath; // 0x0
		// static const ::System::String* QRBubblePath; // 0x0
		// static const ::System::String* QRBubbleTextPath; // 0x0
		// static const ::System::String* QRContentPath; // 0x0
		// static const ::System::String* QRCodePath; // 0x0
		// static const ::System::String* OverdueContentPath; // 0x0
		// static const ::System::String* RefreshButtonPath; // 0x0
		// static const ::System::String* LoadingPath; // 0x0
		// static const ::System::String* StatusGameObjectPath; // 0x0
		// static const ::System::String* SuccessContentPath; // 0x0
		// static const ::System::String* FailContentPath; // 0x0
		// static const ::System::String* FailRefreshButtonPath; // 0x0
		// static const ::System::String* SuccessRefreshButtonPath; // 0x0
		// static const ::System::String* LoginTipsObjectPath; // 0x0
		// static const ::System::String* ScanTipsPanelPath; // 0x0
		::UnityEngine::UI::Button* pcButton; // 0x58
		::UnityEngine::UI::Button* closeButton; // 0x60
		::UnityEngine::GameObject* qrBubble; // 0x68
		::UnityEngine::UI::Text* qrBubbleText; // 0x70
		::UnityEngine::GameObject* qrContentObject; // 0x78
		::UnityEngine::GameObject* qrCodeObject; // 0x80
		::UnityEngine::GameObject* qrScanTipsObject; // 0x88
		::UnityEngine::GameObject* overdueObject; // 0x90
		::UnityEngine::UI::Button* overdueRefreshButton; // 0x98
		::UnityEngine::GameObject* loadingObject; // 0xA0
		::UnityEngine::GameObject* statusContentObject; // 0xA8
		::UnityEngine::GameObject* successContentObject; // 0xB0
		::UnityEngine::GameObject* failContentObject; // 0xB8
		::UnityEngine::UI::Button* failRefreshButton; // 0xC0
		::UnityEngine::GameObject* successRefreshButtonObject; // 0xC8
		::UnityEngine::UI::Button* successRefreshButton; // 0xD0
		::UnityEngine::GameObject* loginTipsObject; // 0xD8
		::MiHoYo::SDK::Win::QRCode* qrCodeCS; // 0xE0
		::UnityEngine::GameObject* saveRecordObject; // 0xE8
		::UnityEngine::UI::Toggle* saveRecordToggle; // 0xF0
		::UnityEngine::UI::Text* saveRecordText; // 0xF8
		::System::Action* OnClose; // 0x100
		::System::Action* OnBack; // 0x108
		::System::Action* OnRefresh; // 0x110
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x118
		::MiHoYo::SDK::DialogType dialogType; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::DialogType type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOW_OFFSET))(type);
		}

		::System::Void SetBubbleText(::System::String* strBubble)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SETBUBBLETEXT_OFFSET))(this, strBubble);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_CLOSE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_REFRESH_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void SetSupportedScanningApps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SETSUPPORTEDSCANNINGAPPS_OFFSET))(this);
		}

		::System::Void ShowQRCodeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODELOADING_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODE_OFFSET))(this, url);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowScanSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWSCANSUCCESS_OFFSET))(this);
		}

		::System::Void ShowLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_SHOWLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void UpdateSaveRecordTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_UPDATESAVERECORDTIPS_OFFSET))(this);
		}

		::System::Void ClickSaveRecordToggle(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_CLICKSAVERECORDTOGGLE_OFFSET))(this, isOn);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE_ONDESTROY_OFFSET))(this);
		}
	};
}
