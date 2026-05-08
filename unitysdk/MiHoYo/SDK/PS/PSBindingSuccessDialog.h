#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18DC3460)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x18DC2B30)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x18DC34D0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x18DC2AC0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18DC34B0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x18DC29D0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x18DC3130)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC34F0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog_TypeDefinitionIndex = 19524;

	class PSBindingSuccessDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSBindingSuccessDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSBindingSuccessDialog**)Il2CppClass::FromTypeDefinitionIndex(PSBindingSuccessDialog_TypeDefinitionIndex)->GetStaticField(0x9AB0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::Single AUTO_CLOSE_TIMEOUT_IN_SECONDS; // 0x0
		::UnityEngine::GameObject* FooterObj; // 0xB0
		::System::Action* OnConfirmed; // 0xB8
		::System::Single autoCloseLeftSeconds; // 0xC0
		::System::String* PSNAccount; // 0xC8
		::System::String* HoYoAccount; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* psnAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_SHOW_OFFSET))(psnAccount, hoyoAccount);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void UpdateCountdownTips(::System::Single left)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET))(this, left);
		}

		::System::Collections::IEnumerator* AutoCloseCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET))(this);
		}
	};
}
