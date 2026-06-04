#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/PayVendor.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1828FF70)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_BACK_OFFSET UNITYSDK_OFFSET(0x18292280)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKAMEXVENDOR_OFFSET UNITYSDK_OFFSET(0x18292120)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKECMCVENDOR_OFFSET UNITYSDK_OFFSET(0x18292110)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKJCBVENDOR_OFFSET UNITYSDK_OFFSET(0x18292130)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYBUTTON_OFFSET UNITYSDK_OFFSET(0x18292150)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYPALVENDOR_OFFSET UNITYSDK_OFFSET(0x18292140)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYSUCCESSBUTTON_OFFSET UNITYSDK_OFFSET(0x182921E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYTYPEBUTTON_OFFSET UNITYSDK_OFFSET(0x182920F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKVISAVENDOR_OFFSET UNITYSDK_OFFSET(0x18292100)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_HIDEBUYLOADING_OFFSET UNITYSDK_OFFSET(0x18292020)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1828E710)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182923C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_REFRESHPAYINFO_OFFSET UNITYSDK_OFFSET(0x1828E880)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_REFRESH_OFFSET UNITYSDK_OFFSET(0x182920D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SETVENDORS_OFFSET UNITYSDK_OFFSET(0x18292010)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWBUYLOADING_OFFSET UNITYSDK_OFFSET(0x182921B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x18292050)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x18292200)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1828E5F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1828E800)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x18291CD0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG__BACK_B__87_0_OFFSET UNITYSDK_OFFSET(0x18292430)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x182923E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayDialog_TypeDefinitionIndex = 9205;

	class OverseaPayDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaPayDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaPayDialog**)Il2CppClass::FromTypeDefinitionIndex(OverseaPayDialog_TypeDefinitionIndex)->GetStaticField(0x2B700);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* GoodsContentGameObjectPath; // 0x0
		// static const ::System::String* GoodsNameTextPath; // 0x0
		// static const ::System::String* GoodsPriceTextPath; // 0x0
		// static const ::System::String* PayTypeTitleTextPath; // 0x0
		// static const ::System::String* PayTypeBtnPath; // 0x0
		// static const ::System::String* PayTypeBtnTextPath; // 0x0
		// static const ::System::String* SubPayTypeTitleTextPath; // 0x0
		// static const ::System::String* VisaBtnPath; // 0x0
		// static const ::System::String* MasterCardBtnPath; // 0x0
		// static const ::System::String* AmericanExpressBtnPath; // 0x0
		// static const ::System::String* JCBBtnPath; // 0x0
		// static const ::System::String* PayPalBtnPath; // 0x0
		// static const ::System::String* PayButtonPath; // 0x0
		// static const ::System::String* PayButtonTitlePath; // 0x0
		// static const ::System::String* PayButtonLoadingObjectPath; // 0x0
		// static const ::System::String* PayStatusObjectPath; // 0x0
		// static const ::System::String* PaySuccessObjectPath; // 0x0
		// static const ::System::String* PaySuccessTitleTextPath; // 0x0
		// static const ::System::String* PaySuccessTipsTextPath; // 0x0
		// static const ::System::String* PaySuccessButtonPath; // 0x0
		// static const ::System::String* PaySuccessButtonTextPath; // 0x0
		// static const ::System::String* PayFailObjectPath; // 0x0
		// static const ::System::String* PayFailTitleTextPath; // 0x0
		// static const ::System::String* PayFailTipsTextPath; // 0x0
		// static const ::System::String* PayFailButtonPath; // 0x0
		// static const ::System::String* PayFailButtonTextPath; // 0x0
		::System::Action* OnBack; // 0x58
		::System::Action* OnRefresh; // 0x60
		::System::Action_1<::MiHoYo::SDK::PayVendor>* OnPay; // 0x68
		::System::Action* OnPaySuccess; // 0x70
		::UnityEngine::UI::Button* backButton; // 0x78
		::UnityEngine::UI::Text* dialogTitleText; // 0x80
		::UnityEngine::GameObject* goodsContentGameObject; // 0x88
		::UnityEngine::UI::Text* goodsNameText; // 0x90
		::UnityEngine::UI::Text* goodsPriceText; // 0x98
		::UnityEngine::UI::Text* payTypeTitleText; // 0xA0
		::UnityEngine::UI::Toggle* payTypeButton; // 0xA8
		::UnityEngine::UI::Text* payTypeButtonText; // 0xB0
		::UnityEngine::UI::Text* subPayTypeTitleText; // 0xB8
		::UnityEngine::UI::Toggle* visaToggle; // 0xC0
		::UnityEngine::UI::Toggle* masterCardToggle; // 0xC8
		::UnityEngine::UI::Toggle* americanExpressToggle; // 0xD0
		::UnityEngine::UI::Toggle* jcbToggle; // 0xD8
		::UnityEngine::UI::Toggle* payPalToggle; // 0xE0
		::UnityEngine::UI::Button* payButton; // 0xE8
		::UnityEngine::UI::Text* payButtonTitleText; // 0xF0
		::UnityEngine::GameObject* payButtonLoadingObject; // 0xF8
		::UnityEngine::GameObject* payStatusObject; // 0x100
		::UnityEngine::GameObject* paySuccessObject; // 0x108
		::UnityEngine::UI::Text* paySuccessTitleText; // 0x110
		::UnityEngine::UI::Text* paySuccessTipsText; // 0x118
		::UnityEngine::UI::Button* paySuccessButton; // 0x120
		::UnityEngine::UI::Text* paySuccessButtonText; // 0x128
		::UnityEngine::GameObject* payFailObject; // 0x130
		::UnityEngine::UI::Text* payFailTitleText; // 0x138
		::UnityEngine::UI::Text* payFailTipsText; // 0x140
		::UnityEngine::UI::Button* payFailButton; // 0x148
		::UnityEngine::UI::Text* payFailButtonText; // 0x150
		::MiHoYo::SDK::JSONNode* payInfo; // 0x158
		::MiHoYo::SDK::JSONObject* vendors; // 0x160
		::MiHoYo::SDK::PayVendor selectVendor; // 0x168
		::MiHoYo::SDK::PayVendor defaultPayVendor; // 0x16C
		::System::Boolean isPaying; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONObject* a2, ::MiHoYo::SDK::PayVendor a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONObject*, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_HIDE_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_UPDATETEXT_OFFSET))(this);
		}

		::System::Void SetVendors(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SETVENDORS_OFFSET))(this, a1);
		}

		::System::Void RefreshPayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_REFRESHPAYINFO_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_REFRESH_OFFSET))(this);
		}

		::System::Void ClickPayTypeButton(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYTYPEBUTTON_OFFSET))(this, a1);
		}

		::System::Void ClickVisaVendor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKVISAVENDOR_OFFSET))(this, a1);
		}

		::System::Void ClickECMCVendor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKECMCVENDOR_OFFSET))(this, a1);
		}

		::System::Void ClickAMEXVendor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKAMEXVENDOR_OFFSET))(this, a1);
		}

		::System::Void ClickJCBVendor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKJCBVENDOR_OFFSET))(this, a1);
		}

		::System::Void ClickPayPalVendor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYPALVENDOR_OFFSET))(this, a1);
		}

		::System::Void ClickPayButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYBUTTON_OFFSET))(this);
		}

		::System::Void ClickPaySuccessButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_CLICKPAYSUCCESSBUTTON_OFFSET))(this);
		}

		::System::Void ShowBuyLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWBUYLOADING_OFFSET))(this);
		}

		::System::Void HideBuyLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_HIDEBUYLOADING_OFFSET))(this);
		}

		::System::Void ShowPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWPAYSUCCESS_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_BACK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Back_b__87_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG__BACK_B__87_0_OFFSET))(this, a1);
		}
	};
}
