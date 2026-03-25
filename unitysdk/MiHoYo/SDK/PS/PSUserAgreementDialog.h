#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_DisplayMode.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15F7F5A0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x15F80AE0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x15F80B00)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15F6C990)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15F80AA0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15F6A1E0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F80680)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F80B20)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog_TypeDefinitionIndex = 7563;

	class PSUserAgreementDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSUserAgreementDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSUserAgreementDialog**)Il2CppClass::FromTypeDefinitionIndex(PSUserAgreementDialog_TypeDefinitionIndex)->GetStaticField(0x15B40);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* ProtocalTextPath; // 0x0
		// static const ::System::String* PrivacyTextPath; // 0x0
		// static const ::System::String* childrenPrivacyTextPath; // 0x0
		// static const ::System::String* ChildrenPrivacyBtnPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode displayMode; // 0xB0
		::System::Action* OnUserAgreementClicked; // 0xB8
		::System::Action* OnPrivacyPolicyClicked; // 0xC0
		::System::Action* OnChildrenPrivacyClicked; // 0xC8
		::System::Action* OnAgreementCanceled; // 0xD0
		::System::Action* OnAgreementAccepted; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_SHOW_OFFSET))(mode);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}
	};
}
