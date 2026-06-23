#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PS/PSWelcomeDialog_DisplayStage.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BA8FC70)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA90CE0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA90D10)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA90D30)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA90D00)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BA8FC00)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BA90910)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA908E0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET UNITYSDK_OFFSET(0x1BA90640)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET UNITYSDK_OFFSET(0x1BA90930)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BA8FAD0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA90D50)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog_TypeDefinitionIndex = 20688;

	class PSWelcomeDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSWelcomeDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSWelcomeDialog**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog_TypeDefinitionIndex)->GetStaticField(0xA590);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* BindExistingAccountBtnPath; // 0x0
		// static const ::System::String* CreateAndBindNewAccountBtnPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* SkipButtonTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0xB0
		::UnityEngine::UI::Text* contentText; // 0xB8
		::UnityEngine::UI::Text* bindExistingAccountButtonText; // 0xC0
		::UnityEngine::UI::Text* createNewAccountButtonText; // 0xC8
		::UnityEngine::GameObject* bindExistingAccountBtnObj; // 0xD0
		::UnityEngine::GameObject* createNewAccountBtnObj; // 0xD8
		::System::Action* OnBindExisitingAccount; // 0xE0
		::System::Action* OnCreateAndBindNewAccount; // 0xE8
		::System::Action* OnCancelBinding; // 0xF0
		::MiHoYo::SDK::PS::PSWelcomeDialog_DisplayStage displayStage; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowBindModeSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOWBINDMODESELECTION_OFFSET))(this);
		}

		::System::Void ShowNewAccountPrompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_SHOWNEWACCOUNTPROMPT_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}
	};
}
