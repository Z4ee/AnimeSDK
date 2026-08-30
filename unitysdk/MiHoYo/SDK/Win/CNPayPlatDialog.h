#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/CNPayNativeType.h"
#include "unitysdk/MiHoYo/SDK/CNPayPlatType.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15CF5C70)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_BACK_OFFSET UNITYSDK_OFFSET(0x15CFD9C0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKALIPAYBTN_OFFSET UNITYSDK_OFFSET(0x15CFC9F0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKFOLDSWITCH_OFFSET UNITYSDK_OFFSET(0x15CFD410)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKWECHATPAYBTN_OFFSET UNITYSDK_OFFSET(0x15CFCF00)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_DIALOGANIMATOREND_OFFSET UNITYSDK_OFFSET(0x15CF7EF0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_FAILREFRESH_OFFSET UNITYSDK_OFFSET(0x15CF8190)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_GET_CODELINKTYPE_OFFSET UNITYSDK_OFFSET(0x15CF51C0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15CF52E0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15CFDF30)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_OVERDUEREFRESH_OFFSET UNITYSDK_OFFSET(0x15CFA6F0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_PAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x15CFDDA0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_REFRESHGOODSINFO_OFFSET UNITYSDK_OFFSET(0x15CF5470)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SET_CODELINKTYPE_OFFSET UNITYSDK_OFFSET(0x15CF51D0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x15CFAE70)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYLOADING_OFFSET UNITYSDK_OFFSET(0x15CFA900)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYPLATLIST_OFFSET UNITYSDK_OFFSET(0x15CFB2B0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x15CFB040)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODEERROR_OFFSET UNITYSDK_OFFSET(0x15CFACC0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x15CFAB10)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x15CFA9F0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15CF51E0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_START_OFFSET UNITYSDK_OFFSET(0x15CF53D0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG__BACK_B__118_0_OFFSET UNITYSDK_OFFSET(0x15CFDFC0)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFDF70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatDialog_TypeDefinitionIndex = 9494;

	class CNPayPlatDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::CNPayPlatDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::CNPayPlatDialog**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatDialog_TypeDefinitionIndex)->GetStaticField(0x27D70);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* AnimateClipLeftToRightName; // 0x0
		// static const ::System::String* AnimateClipRightToLeftName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* GoodsContentGameObjectPath; // 0x0
		// static const ::System::String* GoodsNameTextPath; // 0x0
		// static const ::System::String* GoodsPriceTextPath; // 0x0
		// static const ::System::String* QRCodePath; // 0x0
		// static const ::System::String* OverdueContentPath; // 0x0
		// static const ::System::String* RefreshButtonPath; // 0x0
		// static const ::System::String* OverdueContentTextPath; // 0x0
		// static const ::System::String* LoadingPath; // 0x0
		// static const ::System::String* StatusGameObjectPath; // 0x0
		// static const ::System::String* SuccessContentPath; // 0x0
		// static const ::System::String* FailContentPath; // 0x0
		// static const ::System::String* FailRefreshButtonPath; // 0x0
		// static const ::System::String* SuccessRefreshButtonPath; // 0x0
		// static const ::System::String* QRCodeContentPath; // 0x0
		// static const ::System::String* CreateOrderFailObjectPath; // 0x0
		// static const ::System::String* CreateOrderFailButtonPath; // 0x0
		// static const ::System::String* BottomContentPath; // 0x0
		// static const ::System::String* SupportPath; // 0x0
		// static const ::System::String* SupportPlatAliPayPath; // 0x0
		// static const ::System::String* SupportPlatWechatPayPath; // 0x0
		// static const ::System::String* SupportPlatUnionPayPath; // 0x0
		// static const ::System::String* SupportPlatTextPath; // 0x0
		// static const ::System::String* SupportPlatRecommendPath; // 0x0
		// static const ::System::String* SupportPlatMarketPath; // 0x0
		// static const ::System::String* ExpandPath; // 0x0
		// static const ::System::String* FoldPath; // 0x0
		// static const ::System::String* AliPayButtonPath; // 0x0
		// static const ::System::String* WechatPayButtonPath; // 0x0
		// static const ::System::String* ExpandPayRecommendPath; // 0x0
		// static const ::System::String* ExpandPayTipsTextPath; // 0x0
		// static const ::System::String* ExpandMarketPath; // 0x0
		// static const ::System::String* FoldSwitchButtonPath; // 0x0
		// static const ::System::String* FoldSwitchTextPath; // 0x0
		// static const ::System::String* FoldAnimatePath; // 0x0
		// static const ::System::String* FoldAnimateQRCodePath; // 0x0
		// static const ::System::String* FoldAnimateLoadingPath; // 0x0
		::System::Action* OnBack; // 0x58
		::System::Action* OnPaySuccess; // 0x60
		::System::Action* OnRefresh; // 0x68
		::System::Action_1<::MiHoYo::SDK::Win::PayPlatInfoModel*>* OnSelectPayType; // 0x70
		::UnityEngine::GameObject* dialogObject; // 0x78
		::UnityEngine::GameObject* titleTextGameObject; // 0x80
		::UnityEngine::UI::Button* closeButton; // 0x88
		::UnityEngine::GameObject* goodsContentGameObject; // 0x90
		::UnityEngine::UI::Text* goodsNameText; // 0x98
		::UnityEngine::UI::Text* goodsPriceText; // 0xA0
		::UnityEngine::UI::Text* overdueContentText; // 0xA8
		::UnityEngine::GameObject* qrCodeGameObject; // 0xB0
		::MiHoYo::SDK::Win::QRCode* qrCodeCS; // 0xB8
		::UnityEngine::GameObject* overdueGameObject; // 0xC0
		::UnityEngine::UI::Button* overdueRefreshButton; // 0xC8
		::UnityEngine::GameObject* loadingGameObject; // 0xD0
		::UnityEngine::GameObject* statusContentGameObject; // 0xD8
		::UnityEngine::GameObject* successContentGameObject; // 0xE0
		::UnityEngine::GameObject* failContentGameObject; // 0xE8
		::UnityEngine::UI::Button* failRefreshButton; // 0xF0
		::UnityEngine::UI::Button* successRefreshButton; // 0xF8
		::UnityEngine::GameObject* qrCodeContentGameObject; // 0x100
		::UnityEngine::GameObject* createOrderFailGameObject; // 0x108
		::UnityEngine::UI::Button* retryButton; // 0x110
		::UnityEngine::GameObject* bottomContentGameObject; // 0x118
		::UnityEngine::GameObject* supportGameObject; // 0x120
		::UnityEngine::GameObject* supportPlatAliPayGameObject; // 0x128
		::UnityEngine::GameObject* supportPlatWechatPayGameObject; // 0x130
		::UnityEngine::GameObject* supportPlatUnionPayGameObject; // 0x138
		::UnityEngine::GameObject* expandGameObject; // 0x140
		::UnityEngine::GameObject* foldGameObject; // 0x148
		::UnityEngine::UI::Toggle* aliPayToggle; // 0x150
		::UnityEngine::UI::Image* aliPayImage; // 0x158
		::UnityEngine::UI::Toggle* wechatPayToggle; // 0x160
		::UnityEngine::UI::Image* wechatPayImage; // 0x168
		::UnityEngine::GameObject* aliPayToggleGameObject; // 0x170
		::UnityEngine::GameObject* wechatPayToggleGameObject; // 0x178
		::UnityEngine::UI::Button* foldSwitchButton; // 0x180
		::UnityEngine::UI::Text* foldSwitchText; // 0x188
		::UnityEngine::UI::Text* expandPayTipsText; // 0x190
		::UnityEngine::GameObject* expandMarketGameObject; // 0x198
		::UnityEngine::GameObject* foldAnimateGameObject; // 0x1A0
		::UnityEngine::Animator* dialogAnimator; // 0x1A8
		::UnityEngine::GameObject* foldAnimateQRCodeGameObject; // 0x1B0
		::UnityEngine::UI::RawImage* foldAnimateQRCodeRawImage; // 0x1B8
		::UnityEngine::GameObject* foldAnimateLoadingGameObject; // 0x1C0
		::UnityEngine::Texture2D* copyTexture; // 0x1C8
		::MiHoYo::SDK::JSONNode* goodsInfo; // 0x1D0
		::MiHoYo::SDK::CNPayNativeType curNativeType; // 0x1D8
		::MiHoYo::SDK::CNPayPlatType curPayPlat; // 0x1DC
		::MiHoYo::SDK::Win::PayPlatInfoModel* aliPayPlatInfo; // 0x1E0
		::MiHoYo::SDK::Win::PayPlatInfoModel* wechatPayPlatInfo; // 0x1E8
		::System::Boolean isQRCodeLoading; // 0x1F0
		::System::String* _CodeLinkType_k__BackingField; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG__CTOR_OFFSET))(this);
		}

		::System::String* get_CodeLinkType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_GET_CODELINKTYPE_OFFSET))(this);
		}

		::System::Void set_CodeLinkType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SET_CODELINKTYPE_OFFSET))(this, a1);
		}

		static ::System::Void Show(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_HIDE_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshGoodsInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_REFRESHGOODSINFO_OFFSET))(this);
		}

		::System::Void FailRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_FAILREFRESH_OFFSET))(this);
		}

		::System::Void OverdueRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_OVERDUEREFRESH_OFFSET))(this);
		}

		::System::Void ShowPayLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYLOADING_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowQRCodeError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWQRCODEERROR_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowPaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYSUCCESS_OFFSET))(this);
		}

		::System::Void ShowPayPlatList(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PayPlatInfoModel*>* a1, ::MiHoYo::SDK::CNPayNativeType a2, ::MiHoYo::SDK::CNPayPlatType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PayPlatInfoModel*>*, ::MiHoYo::SDK::CNPayNativeType, ::MiHoYo::SDK::CNPayPlatType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_SHOWPAYPLATLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClickAliPayBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKALIPAYBTN_OFFSET))(this, a1);
		}

		::System::Void ClickWechatPayBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKWECHATPAYBTN_OFFSET))(this, a1);
		}

		::System::Void ClickFoldSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_CLICKFOLDSWITCH_OFFSET))(this);
		}

		::System::Void DialogAnimatorEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_DIALOGANIMATOREND_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_BACK_OFFSET))(this);
		}

		::System::Void PaySuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_PAYSUCCESS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Back_b__118_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG__BACK_B__118_0_OFFSET))(this, a1);
		}
	};
}
