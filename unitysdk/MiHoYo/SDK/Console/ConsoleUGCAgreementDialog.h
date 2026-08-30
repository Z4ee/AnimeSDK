#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class ScrollRect; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1B794170)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B792CC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B794910)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B792B30)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7950E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B794970)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B792C90)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B7928D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1B794980)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B7949F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B795100)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUGCAgreementDialog_TypeDefinitionIndex = 8900;

	class ConsoleUGCAgreementDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUGCAgreementDialog_TypeDefinitionIndex)->GetStaticField(0xB0C0);
		}
		// static const ::System::String* PrefabNameCN; // 0x0
		// static const ::System::String* PrefabNameOS; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* ContentTextScrollRectPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* ViewUserAgreementTextPath; // 0x0
		// static const ::System::String* ViewUserAgreementImagePath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyTextPath; // 0x0
		// static const ::System::String* ScrollBtnPath; // 0x0
		// static const ::System::String* ScrollBtnimagePath; // 0x0
		// static const ::System::String* ScrollBtnTextPath; // 0x0
		// static const ::System::String* ScrollBarPath; // 0x0
		// static const ::System::Int32 xcloud_squre_button_width = 0x20; // 0x0
		// static const ::System::Int32 xcloud_wide_button_width = 0x2C; // 0x0
		::System::Action* OnUserAgreementClicked; // 0xC0
		::System::Action* OnPrivacyPolicyClicked; // 0xC8
		::UnityEngine::GameObject* AgreementImageObj; // 0xD0
		::UnityEngine::GameObject* ScrolllBtnImageObj; // 0xD8
		::UnityEngine::UI::ScrollRect* protocolScrollRect; // 0xE0
		::System::Boolean isScrollbarVisible; // 0xE8
		::System::Boolean Interactable; // 0xE9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CheckScrollBarVisibility()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}
	};
}
