#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldQRBindingDialog_HighlightableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ADDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1D1C2310)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1D1C1B40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D1C0B80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1C21D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1C2620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_GETOBJECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1D1C1000)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_HASDEFAULTBOTTOMBUTTONS_OFFSET UNITYSDK_OFFSET(0x1D1C0CA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1D1BDF10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D1C1A30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZETEXT_OFFSET UNITYSDK_OFFSET(0x1D1C1560)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZEVIEWS_OFFSET UNITYSDK_OFFSET(0x1D1C11E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1D1C0810)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1D1C0140)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D1C2240)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D1C1C20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D1C2720)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_RESIZELAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0x1D1C2B20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET UNITYSDK_OFFSET(0x1D1C0060)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETGRAPHICCOLOR_OFFSET UNITYSDK_OFFSET(0x1D1C2730)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D1C22A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1D1BFEB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1D1C05A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1D1C03D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1D1BDFA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_TRYREFRESHQRCODE_OFFSET UNITYSDK_OFFSET(0x1D1C2210)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D1C0B10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D1C1C70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1C2F40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C2F30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__INITIALIZECALLBACKS_B__54_0_OFFSET UNITYSDK_OFFSET(0x1D1C2F60)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldQRBindingDialog_TypeDefinitionIndex = 20907;

	class HandheldQRBindingDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldQRBindingDialog_TypeDefinitionIndex)->GetStaticField(0x90F0);
		}
		static ::UnityEngine::Color* StaticGet_EnabledColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HandheldQRBindingDialog_TypeDefinitionIndex)->GetStaticField(0x4540);
		}
		static ::UnityEngine::Color* StaticGet_DisabledColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HandheldQRBindingDialog_TypeDefinitionIndex)->GetStaticField(0x4550);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 XCLOUD_BUTTON_WIDTH = 0x18; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* SubtitleTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshButtonPath; // 0x0
		// static const ::System::String* QRRefreshTipsPath; // 0x0
		// static const ::System::String* QRStatusTipsPath; // 0x0
		// static const ::System::String* LeftManualBindingButtonPath; // 0x0
		// static const ::System::String* LeftManualBindingButtonTextPath; // 0x0
		// static const ::System::String* LeftManualBindingButtonImagePath; // 0x0
		// static const ::System::String* RightBackButtonPath; // 0x0
		// static const ::System::String* RightBackButtonTextPath; // 0x0
		// static const ::System::String* RightBackButtonImagePath; // 0x0
		// static const ::System::String* RightAcceptButtonPath; // 0x0
		// static const ::System::String* RightAcceptButtonTextPath; // 0x0
		// static const ::System::String* RightAcceptButtonImagePath; // 0x0
		::System::Action* OnRefreshQRCodeClicked; // 0xC0
		::System::Action* OnSwitchToEmailBindingClicked; // 0xC8
		::System::Action* OnBindingCanceled; // 0xD0
		::MiHoYo::SDK::Win::QRCode* qrCodeComponent; // 0xD8
		::UnityEngine::GameObject* qrImageObject; // 0xE0
		::UnityEngine::GameObject* qrLoadingPanelObject; // 0xE8
		::UnityEngine::GameObject* qrExpiredPanelObject; // 0xF0
		::UnityEngine::GameObject* qrRefreshButtonObject; // 0xF8
		::UnityEngine::GameObject* qrStatusTipsObject; // 0x100
		::UnityEngine::GameObject* leftManualBindingButtonObject; // 0x108
		::UnityEngine::GameObject* leftManualBindingButtonImageObject; // 0x110
		::UnityEngine::GameObject* rightBackButtonImageObject; // 0x118
		::UnityEngine::GameObject* rightAcceptButtonImageObject; // 0x120
		::UnityEngine::GameObject* highlightedObject; // 0x128
		::System::Boolean interactable; // 0x130
		::System::Boolean isQRCodeExpired; // 0x131

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__CCTOR_OFFSET))();
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETINTERACTABLE_OFFSET))(value);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETQRIMAGE_OFFSET))(url);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog_HighlightableObject target)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, target);
		}

		::System::Void TrySetHighlightedObject(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog_HighlightableObject target)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_OFFSET))(this, target);
		}

		::System::Void InitializeViews()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZEVIEWS_OFFSET))(this);
		}

		::System::Void InitializeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZETEXT_OFFSET))(this);
		}

		::System::Void InitializeCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_INITIALIZECALLBACKS_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void TryRefreshQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_TRYREFRESHQRCODE_OFFSET))(this);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void SetBottomButtonsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET))(this, enable);
		}

		::System::Boolean HasDefaultBottomButtons()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_HASDEFAULTBOTTOMBUTTONS_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}

		static ::System::Void ResizeLayoutWidth(::UnityEngine::GameObject* obj, ::System::Int32 width)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_RESIZELAYOUTWIDTH_OFFSET))(obj, width);
		}

		::System::Void AddButtonClick(::System::String* path, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_ADDBUTTONCLICK_OFFSET))(this, path, action);
		}

		::UnityEngine::GameObject* GetObjectByPath(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_GETOBJECTBYPATH_OFFSET))(this, path);
		}

		::System::Void SetText(::System::String* path, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETTEXT_OFFSET))(this, path, value);
		}

		static ::System::Void SetGraphicColor(::UnityEngine::GameObject* obj, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG_SETGRAPHICCOLOR_OFFSET))(obj, color);
		}

		::System::Void _InitializeCallbacks_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG__INITIALIZECALLBACKS_B__54_0_OFFSET))(this);
		}
	};
}
