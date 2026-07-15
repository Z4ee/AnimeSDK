#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleWelcomeDialog_DisplayStage.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x163D4220)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x163D5AE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x163D5B10)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x163D5B80)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x163D5B00)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x163D41B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x163D5260)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x163D5230)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET UNITYSDK_OFFSET(0x163D4E30)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET UNITYSDK_OFFSET(0x163D5280)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x163D4050)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x163D5BB0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog_TypeDefinitionIndex = 8685;

	class ConsoleWelcomeDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleWelcomeDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleWelcomeDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog_TypeDefinitionIndex)->GetStaticField(0x190B0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* BindExistingAccountBtnPath; // 0x0
		// static const ::System::String* CreateAndBindNewAccountBtnPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* SkipButtonTextPath; // 0x0
		// static const ::System::String* ConsoleUserNamePath; // 0x0
		// static const ::System::String* ConsoleUserPanelPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0xC0
		::UnityEngine::UI::Text* contentText; // 0xC8
		::UnityEngine::UI::Text* bindExistingAccountButtonText; // 0xD0
		::UnityEngine::UI::Text* createNewAccountButtonText; // 0xD8
		::UnityEngine::UI::Text* consoleAccountUserName; // 0xE0
		::UnityEngine::GameObject* bindExistingAccountBtnObj; // 0xE8
		::UnityEngine::GameObject* createNewAccountBtnObj; // 0xF0
		::UnityEngine::GameObject* consoleUserObj; // 0xF8
		::System::Action* OnBindExisitingAccount; // 0x100
		::System::Action* OnCreateAndBindNewAccount; // 0x108
		::System::Action* OnCancelBinding; // 0x110
		::MiHoYo::SDK::ReportType SDKReportType; // 0x118
		::MiHoYo::SDK::Console::ConsoleWelcomeDialog_DisplayStage displayStage; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowBindModeSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET))(this);
		}

		::System::Void ShowNewAccountPrompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}
	};
}
