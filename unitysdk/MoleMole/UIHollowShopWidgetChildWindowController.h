#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC29DF8FB514794.h"
#include "unitysdk/Enum_3_2924E454126F7D2D.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIHollowShopWidgetChildWindowController_CurrencyData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/Share/EItemRarity.h"

class Class_1_0B54DAB695AF5065;
class Class_1_7807B2B04302CD7B_27;
class Class_2_1B1C05BC0A38A2D5_5;
class Class_2_9D9172C07F82DDAE;
class Class_2_DF73794ED874FFFB;
class Class_3_A8AC9106F37BFB35;
class Class_3_E6BBC1070D4A54AB;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCurseWidgetController; }
namespace MoleMole { class UIHollowEventWidgetChildWindowController; }
namespace MoleMole { class UIHollowShopWidgetContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_BUYHOLLOWITEM_OFFSET UNITYSDK_OFFSET(0x14889990)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_BUYPCFUNC_OFFSET UNITYSDK_OFFSET(0x1487A2C0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CANBUY_OFFSET UNITYSDK_OFFSET(0x14889370)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CLEAREFFECT_OFFSET UNITYSDK_OFFSET(0x14885E30)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CLOSEPANEL_OFFSET UNITYSDK_OFFSET(0x14A12860)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_DIRECTCLOSEPANEL_OFFSET UNITYSDK_OFFSET(0x14A125B0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_FORCEREBUILD_OFFSET UNITYSDK_OFFSET(0x1487DED0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x1487A420)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x1487F700)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x14880160)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENTSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x1487F510)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETDICBYCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x14885730)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETGOODSVALUE_OFFSET UNITYSDK_OFFSET(0x1487F210)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETITEMBYSHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1487EFF0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1487E400)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPICON_OFFSET UNITYSDK_OFFSET(0x1487F2E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPTYPEBYCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x148800D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPTYPEBYPOSITION_OFFSET UNITYSDK_OFFSET(0x148856E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14A10D80)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GET__POSITION_OFFSET UNITYSDK_OFFSET(0x1488AD20)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOBACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x1487E450)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOCARDSHOP_OFFSET UNITYSDK_OFFSET(0x14885BB0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOCURSESHOP_OFFSET UNITYSDK_OFFSET(0x14885930)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTODISCOUNTSHOP_OFFSET UNITYSDK_OFFSET(0x14885460)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOGACHASHOP_OFFSET UNITYSDK_OFFSET(0x14884010)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOHOLLOWITEMSHOP_OFFSET UNITYSDK_OFFSET(0x14885A70)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOITEMSHOP_OFFSET UNITYSDK_OFFSET(0x148855A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOUPGRADESHOP_OFFSET UNITYSDK_OFFSET(0x14885CF0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITDETIAL_OFFSET UNITYSDK_OFFSET(0x14A12070)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITSHOP_OFFSET UNITYSDK_OFFSET(0x1487B9E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITTRANSFERCONFIG_OFFSET UNITYSDK_OFFSET(0x14A11190)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITUPGRADECARD_OFFSET UNITYSDK_OFFSET(0x1488A740)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1487ABB0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x14A11C20)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISHPCURRENCY_OFFSET UNITYSDK_OFFSET(0x1487B8B0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISITEMSOLDOUT_OFFSET UNITYSDK_OFFSET(0x14885830)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14A12230)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONEVENTCLICK_OFFSET UNITYSDK_OFFSET(0x14879F40)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1487A6A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONTEXTSHOWFINISH_OFFSET UNITYSDK_OFFSET(0x1487A650)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14A122C0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14A10D90)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14A11540)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_OPENINI_OFFSET UNITYSDK_OFFSET(0x14889640)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REALGOTOSHOP_OFFSET UNITYSDK_OFFSET(0x14884150)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x14889450)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x148893D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x14886200)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHSHOPTITLE_OFFSET UNITYSDK_OFFSET(0x1487CC00)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESETARCANAANIM_OFFSET UNITYSDK_OFFSET(0x14881F20)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESETBUYANIM_OFFSET UNITYSDK_OFFSET(0x1487EA60)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESTSHOPBTNANIM_OFFSET UNITYSDK_OFFSET(0x1487EE60)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETARCANAANIM_OFFSET UNITYSDK_OFFSET(0x148823C0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETDISCOUNT_OFFSET UNITYSDK_OFFSET(0x148801D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETITEMSOLDOUTSTATE_OFFSET UNITYSDK_OFFSET(0x148831A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETMAINSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1488A5F0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETPRICECOLOR_OFFSET UNITYSDK_OFFSET(0x148807E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETPRICETXT_OFFSET UNITYSDK_OFFSET(0x14880860)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETVERTICALLAYOUTSTATE_OFFSET UNITYSDK_OFFSET(0x1487E070)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SET__POSITION_OFFSET UNITYSDK_OFFSET(0x1488AD30)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x1487A010)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_UPDATEALLPAYPANEL_OFFSET UNITYSDK_OFFSET(0x14882A20)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_UPDATEPRICE_OFFSET UNITYSDK_OFFSET(0x1488A470)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__BUY_OFFSET UNITYSDK_OFFSET(0x14889C60)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__CLOSEPANEL_B__11_0_OFFSET UNITYSDK_OFFSET(0x1488B070)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1488AD40)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__GOBACKTOMAIN_B__23_0_OFFSET UNITYSDK_OFFSET(0x1488B1B0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__GOBACKTOMAIN_B__23_1_OFFSET UNITYSDK_OFFSET(0x1488B200)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__INIT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1488B1A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__INTERNALCLOSE_OFFSET UNITYSDK_OFFSET(0x14A127D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ISPLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x14881E90)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ONARCANAANIM_OFFSET UNITYSDK_OFFSET(0x14882980)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1488AFD0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__WAITBEFOREANIMEXIT_OFFSET UNITYSDK_OFFSET(0x1487EDA0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__WAITHIDEDETIAL_OFFSET UNITYSDK_OFFSET(0x1487A3A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1488B210)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1488B2A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1488B2D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1488B2E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1488B2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController_TypeDefinitionIndex = 51842;

	class UIHollowShopWidgetChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* ITEM_PLACEHOLDER_PRICE_TEXT_MAP; // 0x0
		::Class_1_7807B2B04302CD7B_27* translateRatio; // 0x310
		::System::Collections::Generic::Dictionary_2<::Share::EItemRarity, ::System::Collections::Generic::List_1<::System::Int32>*>* upgradeCardRarity; // 0x318
		::MoleMole::UIHollowEventWidgetChildWindowController* _eventController; // 0x320
		::Class_2_1B1C05BC0A38A2D5_5* _view; // 0x328
		::UnityEngine::Animator* _animator; // 0x330
		::MoleMole::UIHollowShopWidgetContext* _widgetContext; // 0x338
		::System::Boolean isExiting; // 0x340
		::System::Boolean isAnimEnd; // 0x341
		::DG::Tweening::Tweener* textTweener; // 0x348
		::System::Int32 current; // 0x350
		::MoleMole::MonoGamepadScrollView* m_lastScrollView; // 0x358
		::Enum_3_0FC29DF8FB514794 __position; // 0x360
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Tuple_2<::ProtoScript::HollowShopType, ::System::String*>*>* _shopTransform; // 0x368
		::Class_2_DF73794ED874FFFB* graph; // 0x370
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* soldOutMaterial; // 0x378
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>*>* m_shops; // 0x380
		::UnityEngine::Animation* m_lastBtnAnim; // 0x388
		::UnityEngine::UI::Button* m_lastBtn; // 0x390
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x398
		::UnityEngine::UI::Extension::UIButtonBase* m_payBtn; // 0x3A0
		::System::Boolean _isDestroy; // 0x3A8
		::System::Int32 _initIndex; // 0x3AC
		::System::String* hpGreenColor; // 0x3B0
		::System::String* noncurrencyRedColor; // 0x3B8
		::System::String* hpNoCurrencyColor; // 0x3C0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCurseWidgetController*>* curseWidgets; // 0x3C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitTransferConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITTRANSFERCONFIG_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Void DirectClosePanel(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_DIRECTCLOSEPANEL_OFFSET))(this, callback);
		}

		::System::Void ClosePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CLOSEPANEL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _InternalClose(::System::Action* callback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__INTERNALCLOSE_OFFSET))(this, callback);
		}

		::System::Void InitDetial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITDETIAL_OFFSET))(this);
		}

		::System::Void OnEventClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONEVENTCLICK_OFFSET))(this);
		}

		::System::Void BuyPcFunc(::UnityEngine::UI::Extension::UITabButtonGroup* tab, ::System::Int32 index, ::UnityEngine::Transform* buyBtn, ::System::UInt32 shopuid, ::System::Action_2<::UnityEngine::Transform*, ::System::UInt32>* buyFunc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*, ::System::Int32, ::UnityEngine::Transform*, ::System::UInt32, ::System::Action_2<::UnityEngine::Transform*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_BUYPCFUNC_OFFSET))(this, tab, index, buyBtn, shopuid, buyFunc);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _WaitHideDetial()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__WAITHIDEDETIAL_OFFSET))(this);
		}

		::System::Single GetAnimLength(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETANIMLENGTH_OFFSET))(this, name);
		}

		::System::Void ShowText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SHOWTEXT_OFFSET))(this);
		}

		::System::Void OnTextShowFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONTEXTSHOWFINISH_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INIT_OFFSET))(this);
		}

		::Enum_3_0FC29DF8FB514794 GetPosition()
		{
			return ((::Enum_3_0FC29DF8FB514794(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETPOSITION_OFFSET))(this);
		}

		::System::Void GoBackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOBACKTOMAIN_OFFSET))(this);
		}

		::System::Void RestShopBtnAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESTSHOPBTNANIM_OFFSET))(this);
		}

		::System::Void ResetBuyAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESETBUYANIM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _WaitBeforeAnimExit(::System::String* firstName, ::System::String* nextName, ::System::Action* onFirstAnimExit, ::System::Action* onNextAnimEnter)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__WAITBEFOREANIMEXIT_OFFSET))(this, firstName, nextName, onFirstAnimExit, onNextAnimEnter);
		}

		::Class_3_E6BBC1070D4A54AB* GetItemByShopType(::ProtoScript::HollowShopType type)
		{
			return ((::Class_3_E6BBC1070D4A54AB*(*)(::PVOID, ::ProtoScript::HollowShopType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETITEMBYSHOPTYPE_OFFSET))(this, type);
		}

		::System::Void RefreshShopTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHSHOPTITLE_OFFSET))(this);
		}

		static ::Foundation::AssetPath GetShopIcon(::ProtoScript::HollowShopType shopType)
		{
			return ((::Foundation::AssetPath(*)(::ProtoScript::HollowShopType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPICON_OFFSET))(shopType);
		}

		::System::Void InitShop(::ProtoScript::HollowShopType shopType, ::System::String* title, ::System::Action* gotoShopAction)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowShopType, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITSHOP_OFFSET))(this, shopType, title, gotoShopAction);
		}

		static ::System::Boolean IsHpCurrency()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISHPCURRENCY_OFFSET))();
		}

		::MoleMole::UIHollowShopWidgetChildWindowController_CurrencyData GetCurrencyCount(::Class_3_A8AC9106F37BFB35* item)
		{
			return ((::MoleMole::UIHollowShopWidgetChildWindowController_CurrencyData(*)(::PVOID, ::Class_3_A8AC9106F37BFB35*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENCYCOUNT_OFFSET))(this, item);
		}

		::ProtoScript::HollowShopCurrencyType GetCurrencyType(::Class_3_A8AC9106F37BFB35* item, ::Class_3_E6BBC1070D4A54AB* shop)
		{
			return ((::ProtoScript::HollowShopCurrencyType(*)(::PVOID, ::Class_3_A8AC9106F37BFB35*, ::Class_3_E6BBC1070D4A54AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENCYTYPE_OFFSET))(this, item, shop);
		}

		::System::Int32 GetGoodsValue(::ProtoScript::HollowShopCurrencyType shopType, ::ProtoScript::HollowShopCurrencyType type, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::ProtoScript::HollowShopCurrencyType, ::ProtoScript::HollowShopCurrencyType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETGOODSVALUE_OFFSET))(this, shopType, type, value);
		}

		::System::Void SetDiscount(::UnityEngine::Transform* tran, ::Class_3_A8AC9106F37BFB35* item, ::Class_3_E6BBC1070D4A54AB* shop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_3_A8AC9106F37BFB35*, ::Class_3_E6BBC1070D4A54AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETDISCOUNT_OFFSET))(this, tran, item, shop);
		}

		::System::Void SetPriceColor(::UnityEngine::Transform* tran, ::Class_3_A8AC9106F37BFB35* item, ::Class_3_E6BBC1070D4A54AB* shop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_3_A8AC9106F37BFB35*, ::Class_3_E6BBC1070D4A54AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETPRICECOLOR_OFFSET))(this, tran, item, shop);
		}

		::System::Void SetPriceTxt(::UnityEngine::Transform* tran, ::Class_3_A8AC9106F37BFB35* item, ::Class_3_E6BBC1070D4A54AB* shop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_3_A8AC9106F37BFB35*, ::Class_3_E6BBC1070D4A54AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETPRICETXT_OFFSET))(this, tran, item, shop);
		}

		::System::Boolean _IsPlaceHolder(::Class_3_A8AC9106F37BFB35* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_A8AC9106F37BFB35*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ISPLACEHOLDER_OFFSET))(this, item);
		}

		::System::Void ForceRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_FORCEREBUILD_OFFSET))(this);
		}

		::System::Void SetVerticalLayoutState(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETVERTICALLAYOUTSTATE_OFFSET))(this, enable);
		}

		::System::Void ResetArcanaAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_RESETARCANAANIM_OFFSET))(this);
		}

		::System::Void SetArcanaAnim(::UnityEngine::Animation* selectAnim, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETARCANAANIM_OFFSET))(this, selectAnim, action);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _OnArcanaAnim(::System::Single length, ::System::Action* callback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ONARCANAANIM_OFFSET))(this, length, callback);
		}

		::System::Void UpdateAllPayPanel(::System::Boolean soldOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_UPDATEALLPAYPANEL_OFFSET))(this, soldOut);
		}

		::System::Void SetItemSoldOutState(::UnityEngine::Transform* tran, ::System::Boolean soldOut)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETITEMSOLDOUTSTATE_OFFSET))(this, tran, soldOut);
		}

		::System::Void GotoGachaShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOGACHASHOP_OFFSET))(this);
		}

		::System::Void GotoDiscountShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTODISCOUNTSHOP_OFFSET))(this);
		}

		::System::Void GotoItemShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOITEMSHOP_OFFSET))(this);
		}

		::ProtoScript::HollowShopType GetShopTypeByCurrentPosition()
		{
			return ((::ProtoScript::HollowShopType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPTYPEBYCURRENTPOSITION_OFFSET))(this);
		}

		::ProtoScript::HollowShopType GetShopTypeByPosition(::Enum_3_0FC29DF8FB514794 position)
		{
			return ((::ProtoScript::HollowShopType(*)(::PVOID, ::Enum_3_0FC29DF8FB514794))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETSHOPTYPEBYPOSITION_OFFSET))(this, position);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>* GetDicByCurrentPosition()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETDICBYCURRENTPOSITION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>* GetCurrentShopItems(::ProtoScript::HollowShopType shop)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>*(*)(::PVOID, ::ProtoScript::HollowShopType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GETCURRENTSHOPITEMS_OFFSET))(this, shop);
		}

		::System::Boolean IsItemSoldOut(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_ISITEMSOLDOUT_OFFSET))(this, index);
		}

		::System::Void GotoCurseShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOCURSESHOP_OFFSET))(this);
		}

		::System::Void GotoHollowItemShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOHOLLOWITEMSHOP_OFFSET))(this);
		}

		::System::Void GotoCardShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOCARDSHOP_OFFSET))(this);
		}

		::System::Void GotoUpgradeShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GOTOUPGRADESHOP_OFFSET))(this);
		}

		::System::Void ClearEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CLEAREFFECT_OFFSET))(this);
		}

		::System::Void RealGotoShop(::System::String* title, ::Enum_3_0FC29DF8FB514794 position, ::ProtoScript::HollowShopType type, ::System::Action_3<::UnityEngine::Transform*, ::System::Int32, ::System::Action*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_0FC29DF8FB514794, ::ProtoScript::HollowShopType, ::System::Action_3<::UnityEngine::Transform*, ::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REALGOTOSHOP_OFFSET))(this, title, position, type, callback);
		}

		::System::Void RefreshGoods(::Class_3_A8AC9106F37BFB35* shop, ::System::Int32 ix, ::ProtoScript::HollowShopType type, ::Class_3_E6BBC1070D4A54AB* items)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A8AC9106F37BFB35*, ::System::Int32, ::ProtoScript::HollowShopType, ::Class_3_E6BBC1070D4A54AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHGOODS_OFFSET))(this, shop, ix, type, items);
		}

		::System::Void RefreshContext(::MoleMole::UIHollowShopWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowShopWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHCONTEXT_OFFSET))(this, context);
		}

		::System::Void RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_REFRESHALL_OFFSET))(this);
		}

		::System::Void OpenIni(::UnityEngine::Transform* tran, ::System::Int32 uid, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_OPENINI_OFFSET))(this, tran, uid, callback);
		}

		::System::Void BuyHollowItem(::Enum_3_2924E454126F7D2D type, ::System::Int32 newItemID, ::UnityEngine::Transform* tran, ::System::Int32 uid, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2924E454126F7D2D, ::System::Int32, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_BUYHOLLOWITEM_OFFSET))(this, type, newItemID, tran, uid, callback);
		}

		::System::Boolean CanBuy(::Class_1_0B54DAB695AF5065* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0B54DAB695AF5065*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_CANBUY_OFFSET))(this, info);
		}

		::System::Void _Buy(::UnityEngine::Transform* tran, ::System::Int32 uid, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__BUY_OFFSET))(this, tran, uid, callback);
		}

		::System::Void UpdatePrice(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_UPDATEPRICE_OFFSET))(this, args);
		}

		::System::Void SetMainSelectState(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SETMAINSELECTSTATE_OFFSET))(this, enable);
		}

		::System::Void InitUpgradeCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_INITUPGRADECARD_OFFSET))(this);
		}

		::Enum_3_0FC29DF8FB514794 get__position()
		{
			return ((::Enum_3_0FC29DF8FB514794(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_GET__POSITION_OFFSET))(this);
		}

		::System::Void set__position(::Enum_3_0FC29DF8FB514794 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0FC29DF8FB514794))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER_SET__POSITION_OFFSET))(this, value);
		}

		::System::Void _OnUIOpen_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__ONUIOPEN_B__6_0_OFFSET))(this);
		}

		::System::Void _ClosePanel_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__CLOSEPANEL_B__11_0_OFFSET))(this);
		}

		::System::Void _Init_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__INIT_B__21_0_OFFSET))(this);
		}

		::System::Void _GoBackToMain_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__GOBACKTOMAIN_B__23_0_OFFSET))(this);
		}

		::System::Void _GoBackToMain_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER__GOBACKTOMAIN_B__23_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
