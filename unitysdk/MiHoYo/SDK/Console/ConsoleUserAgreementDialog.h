#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class ScrollRect; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1823D940)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1823C130)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1823E910)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1823DE70)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1823E930)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1823BF60)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1823E8F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_REPORTSCROLLBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1823BFD0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1823BE60)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1823DED0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1823DF20)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__AWAKE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1823E9A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1823E950)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog_TypeDefinitionIndex = 8669;

	class ConsoleUserAgreementDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleUserAgreementDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUserAgreementDialog_TypeDefinitionIndex)->GetStaticField(0xFBF0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* ContentTextScrollRectPath; // 0x0
		// static const ::System::String* ProtocalTextPath; // 0x0
		// static const ::System::String* ViewUserAgreementImagePath; // 0x0
		// static const ::System::String* PrivacyTextPath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyImagePath; // 0x0
		// static const ::System::String* childrenPrivacyTextPath; // 0x0
		// static const ::System::String* ChildrenPrivacyBtnPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* ScrollBtnPath; // 0x0
		// static const ::System::String* ScrollBtnTextPath; // 0x0
		// static const ::System::String* ScrollBarPath; // 0x0
		// static const ::System::Int32 xcloud_button_width = 0x20; // 0x0
		::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode displayMode; // 0xC0
		::MiHoYo::SDK::ReportType reportType; // 0xC4
		::System::Boolean isScrollbarVisible; // 0xC8
		::System::Boolean reportScoll; // 0xC9
		::System::Action* OnUserAgreementClicked; // 0xD0
		::System::Action* OnPrivacyPolicyClicked; // 0xD8
		::System::Action* OnChildrenPrivacyClicked; // 0xE0
		::System::Action* OnAgreementCanceled; // 0xE8
		::System::Action* OnAgreementAccepted; // 0xF0
		::UnityEngine::UI::ScrollRect* protocolScrollRect; // 0xF8
		::UnityEngine::GameObject* ProtocolImageObj; // 0x100
		::UnityEngine::GameObject* PrivacyImageObj; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void ReportScrollBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_REPORTSCROLLBTNCLICKED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CheckScrollBarVisibility()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void _Awake_b__32_0(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__AWAKE_B__32_0_OFFSET))(this, a1);
		}
	};
}
