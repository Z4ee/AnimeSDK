#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x19FC4E00)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x19FC5D90)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x19FC4680)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x19FC4C20)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x19FC4840)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19FC5D30)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19FC59E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONREFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x19FC5CA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x19FC46F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x19FC49E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x19FC45A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SKIPDIALOG_OFFSET UNITYSDK_OFFSET(0x19FC5D50)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_START_OFFSET UNITYSDK_OFFSET(0x19FC59F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FC5A00)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5DD0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindMobileDialog_TypeDefinitionIndex = 19548;

	class ConsoleBindMobileDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleBindMobileDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleBindMobileDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleBindMobileDialog_TypeDefinitionIndex)->GetStaticField(0x8F90);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshTipsTextPath; // 0x0
		// static const ::System::String* QRStatusTipsTextPath; // 0x0
		// static const ::System::String* ScanInstructionTextPath; // 0x0
		::System::Action* OnRefreshQRCodeClicked; // 0xC0
		::System::Action* OnBindingCancel; // 0xC8
		::System::Action* OnBindingSkip; // 0xD0
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0xD8
		::UnityEngine::GameObject* QRImageObj; // 0xE0
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0xE8
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0xF0
		::UnityEngine::GameObject* QRStatusTipsTextObj; // 0xF8
		::System::Boolean Interactable; // 0x100
		::System::Boolean IsQRCodeExpired; // 0x101
		::System::String* showName; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SHOW_OFFSET))(name);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETQRIMAGE_OFFSET))(url);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONREFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void SkipDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SKIPDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
