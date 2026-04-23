#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/PayPlat.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_PAYDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x174A31D0)
#define MIHOYO_SDK_WIN_PAYDIALOG_BACK_OFFSET UNITYSDK_OFFSET(0x174A4B00)
#define MIHOYO_SDK_WIN_PAYDIALOG_CLICKALIPAYBTN_OFFSET UNITYSDK_OFFSET(0x174A45C0)
#define MIHOYO_SDK_WIN_PAYDIALOG_CLICKWEIXINPAYBTN_OFFSET UNITYSDK_OFFSET(0x174A44D0)
#define MIHOYO_SDK_WIN_PAYDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x174A2760)
#define MIHOYO_SDK_WIN_PAYDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174A4C20)
#define MIHOYO_SDK_WIN_PAYDIALOG_PAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x174A4C10)
#define MIHOYO_SDK_WIN_PAYDIALOG_REFRESHGOODSINFO_OFFSET UNITYSDK_OFFSET(0x174A29D0)
#define MIHOYO_SDK_WIN_PAYDIALOG_REFRESH_OFFSET UNITYSDK_OFFSET(0x174A3160)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x174A4930)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOWPAYLOADING_OFFSET UNITYSDK_OFFSET(0x174A46B0)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOWPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x174A49B0)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x174A4860)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x174A4780)
#define MIHOYO_SDK_WIN_PAYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x174A2600)
#define MIHOYO_SDK_WIN_PAYDIALOG_START_OFFSET UNITYSDK_OFFSET(0x174A2850)
#define MIHOYO_SDK_WIN_PAYDIALOG__BACK_B__62_0_OFFSET UNITYSDK_OFFSET(0x174A4CB0)
#define MIHOYO_SDK_WIN_PAYDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x174A4C60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayDialog_TypeDefinitionIndex = 8304;

	class PayDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::PayDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PayDialog**)Il2CppClass::FromTypeDefinitionIndex(PayDialog_TypeDefinitionIndex)->GetStaticField(0x31640);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* GoodsContentGameObjectPath; // 0x0
		// static const ::System::String* GoodsNameTextPath; // 0x0
		// static const ::System::String* GoodsPriceTextPath; // 0x0
		// static const ::System::String* AliPayBtnPath; // 0x0
		// static const ::System::String* WeixinPayBtnPath; // 0x0
		// static const ::System::String* QRCodePath; // 0x0
		// static const ::System::String* QRCodePayTextPath; // 0x0
		// static const ::System::String* OverdueContentPath; // 0x0
		// static const ::System::String* RefreshButtonPath; // 0x0
		// static const ::System::String* LoadingPath; // 0x0
		// static const ::System::String* StatusGameObjectPath; // 0x0
		// static const ::System::String* SuccessContentPath; // 0x0
		// static const ::System::String* FailContentPath; // 0x0
		// static const ::System::String* FailRefreshButtonPath; // 0x0
		// static const ::System::String* SuccessRefreshButtonPath; // 0x0
		// static const ::System::String* LoginTipsObjectPath; // 0x0
		// static const ::System::String* QRCodeContentPath; // 0x0
		// static const ::System::String* CreateOrderFailObjectPath; // 0x0
		// static const ::System::String* CreateOrderFailButtonPath; // 0x0
		::System::Action* OnBack; // 0x58
		::System::Action* OnPaySuccess; // 0x60
		::System::Action_1<::MiHoYo::SDK::PayPlat>* OnSelectPayType; // 0x68
		::UnityEngine::UI::Button* backButton; // 0x70
		::UnityEngine::GameObject* goodsContentGameObject; // 0x78
		::UnityEngine::UI::Text* goodsNameText; // 0x80
		::UnityEngine::UI::Text* goodsPriceText; // 0x88
		::UnityEngine::UI::Toggle* aliPayToggle; // 0x90
		::UnityEngine::UI::Image* aliPayImage; // 0x98
		::UnityEngine::UI::Toggle* weixinPayToggle; // 0xA0
		::UnityEngine::UI::Image* weixinPayImage; // 0xA8
		::UnityEngine::GameObject* qrCodeGameObject; // 0xB0
		::MiHoYo::SDK::Win::QRCode* qrCodeCS; // 0xB8
		::UnityEngine::UI::Text* payTipsText; // 0xC0
		::UnityEngine::GameObject* overdueGameObject; // 0xC8
		::UnityEngine::UI::Button* overdueRefreshButton; // 0xD0
		::UnityEngine::GameObject* loadingGameObject; // 0xD8
		::UnityEngine::GameObject* statusContentGameObject; // 0xE0
		::UnityEngine::GameObject* successContentGameObject; // 0xE8
		::UnityEngine::GameObject* failContentGameObject; // 0xF0
		::UnityEngine::UI::Button* failRefreshButton; // 0xF8
		::UnityEngine::UI::Button* successRefreshButton; // 0x100
		::UnityEngine::GameObject* qrCodeContentGameObject; // 0x108
		::UnityEngine::GameObject* createOrderFailGameObject; // 0x110
		::UnityEngine::UI::Button* retryButton; // 0x118
		::MiHoYo::SDK::JSONNode* goodsInfo; // 0x120
		::MiHoYo::SDK::PayPlat payPlat; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::JSONNode* goods, ::MiHoYo::SDK::PayPlat plat)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::PayPlat))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOW_OFFSET))(goods, plat);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_HIDE_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshGoodsInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_REFRESHGOODSINFO_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_REFRESH_OFFSET))(this);
		}

		::System::Void ShowPayLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOWPAYLOADING_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOWQRCODE_OFFSET))(this, url);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_SHOWPAYSUCCESS_OFFSET))(this);
		}

		::System::Void ClickAliPayBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_CLICKALIPAYBTN_OFFSET))(this, value);
		}

		::System::Void ClickWeixinPayBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_CLICKWEIXINPAYBTN_OFFSET))(this, value);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_BACK_OFFSET))(this);
		}

		::System::Void PaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_PAYSUCCESS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Back_b__62_0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG__BACK_B__62_0_OFFSET))(this, result);
		}
	};
}
