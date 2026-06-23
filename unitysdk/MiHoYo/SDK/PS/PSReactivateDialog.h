#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B339CD0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1B33A7B0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1B33A790)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B339B10)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B33A770)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B339B80)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B3399E0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33A7D0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSReactivateDialog_TypeDefinitionIndex = 20683;

	class PSReactivateDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog_TypeDefinitionIndex)->GetStaticField(0xAEF0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		::System::Action* OnReactivateAccount; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Boolean Interactable; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
