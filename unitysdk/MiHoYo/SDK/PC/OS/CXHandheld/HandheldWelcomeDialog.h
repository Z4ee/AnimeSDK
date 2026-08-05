#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldWelcomeDialog_DisplayStage.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C931700)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C932AA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1C932AD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1C932B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C932AC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1C931690)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C932600)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C9325D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET UNITYSDK_OFFSET(0x1C9322D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET UNITYSDK_OFFSET(0x1C932620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1C931560)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C932B50)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldWelcomeDialog_TypeDefinitionIndex = 20915;

	class HandheldWelcomeDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldWelcomeDialog_TypeDefinitionIndex)->GetStaticField(0xA210);
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
		::UnityEngine::UI::Button* bindExistingAccountButton; // 0x100
		::UnityEngine::UI::Button* createNewAccountButton; // 0x108
		::System::Action* OnBindExisitingAccount; // 0x110
		::System::Action* OnCreateAndBindNewAccount; // 0x118
		::System::Action* OnCancelBinding; // 0x120
		::MiHoYo::SDK::ReportType SDKReportType; // 0x128
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog_DisplayStage displayStage; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowBindModeSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET))(this);
		}

		::System::Void ShowNewAccountPrompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}
	};
}
