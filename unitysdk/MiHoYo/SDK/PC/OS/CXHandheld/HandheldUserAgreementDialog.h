#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class ScrollRect; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1A99DBE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A99BD40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1A99E860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1A99E060)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A99E880)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A99BBF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A99E840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_REPORTSCROLLBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1A99BC60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A99E8A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A99BB10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1A99E0B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A99E170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__AWAKE_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A99E8D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99E8B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldUserAgreementDialog_TypeDefinitionIndex = 20564;

	class HandheldUserAgreementDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldUserAgreementDialog_TypeDefinitionIndex)->GetStaticField(0x92C0);
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
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode displayMode; // 0xC0
		::MiHoYo::SDK::ReportType reportType; // 0xC4
		::System::Boolean isScrollbarVisible; // 0xC8
		::System::Boolean reportScoll; // 0xC9
		::System::Boolean interactable; // 0xCA
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_SHOW_OFFSET))(mode);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void ReportScrollBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_REPORTSCROLLBTNCLICKED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CheckScrollBarVisibility()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CHECKSCROLLBARVISIBILITY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG_SETINTERACTABLE_OFFSET))(this, value);
		}

		::System::Void _Awake_b__33_0(::UnityEngine::Vector2 Vector2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__AWAKE_B__33_0_OFFSET))(this, Vector2);
		}
	};
}
