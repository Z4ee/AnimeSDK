#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIGachaPageController_ERefreshGachaViewReason.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_B9E22E218D2BB16E;
class Class_2_653E3C571518634D_Class_2_638EE22F63887884;
class Class_2_79F6D62CE30E3F8E_67;
class Class_3_601FA52CA5E757A0;
class Class_3_AE02BC8285203464_17;
namespace MoleMole { class ActivityDemoTrialContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityFishBtnWidgetController; }
namespace MoleMole { class UIActivityWaterBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaItemNameWidgetController; }
namespace MoleMole { class UIGeneralTokenWidgetController; }
namespace MoleMole { class UIRoleSelectPoolBtnWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER_AVATARSCROLLVIEWCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x169AA650)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x169A92F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_CHECKEXTRATIPSANDGACHA_OFFSET UNITYSDK_OFFSET(0x169A82E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_CONFIRMSELECTOPTIONALBANGBOO_OFFSET UNITYSDK_OFFSET(0x169A0970)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DEALMAINCITYNPC_OFFSET UNITYSDK_OFFSET(0x169A6CE0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DEALOPENTOKENSHOW_OFFSET UNITYSDK_OFFSET(0x169A7460)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DOGACHA_OFFSET UNITYSDK_OFFSET(0x169A8550)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DOQUICKBUY_OFFSET UNITYSDK_OFFSET(0x169A2C40)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_FORCESETGACHAUIGROUPSCHEDULEIDLOCAL_OFFSET UNITYSDK_OFFSET(0x169A5E00)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GACHAQUICKGOBUY_OFFSET UNITYSDK_OFFSET(0x169A2A00)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GACHA_OFFSET UNITYSDK_OFFSET(0x169A80C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GETURLWITHPADTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x169A5420)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x169A7140)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x169A5990)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITROLESELECTPOOLBTN_OFFSET UNITYSDK_OFFSET(0x169A1360)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITSCROLLTOSELECTTABBTN_OFFSET UNITYSDK_OFFSET(0x169A4750)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x169A66E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITWEBVIEWINFO_OFFSET UNITYSDK_OFFSET(0x169A49B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONACTIVITYADDED_OFFSET UNITYSDK_OFFSET(0x169AA8D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONAVATARSCROLLVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x169AA700)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1699F9F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONCLICKBANGBOOSWITCHBTN_OFFSET UNITYSDK_OFFSET(0x1699FF40)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169A6000)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONDAILYREFRESH_OFFSET UNITYSDK_OFFSET(0x169AA150)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONFISHBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1699FB60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x169A9F30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x169A7150)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHACHOOSEGROUP_OFFSET UNITYSDK_OFFSET(0x169A4540)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHANEWBIECHOOSEAVATAR_OFFSET UNITYSDK_OFFSET(0x169A1AE0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169A59A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169A6450)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169A6F70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169A6600)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x169A6090)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENBANGBOOOPTIONALSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0x169A0600)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENEXCHANGE_OFFSET UNITYSDK_OFFSET(0x169A9410)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENGACHAROLESELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x169A1400)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENINFOWEBVIEW_OFFSET UNITYSDK_OFFSET(0x169A4A00)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENPERFORMPAGE_OFFSET UNITYSDK_OFFSET(0x169A9610)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x169A9CD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHACTIVITYWATERBTNFORGACHA_OFFSET UNITYSDK_OFFSET(0x1699F1E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALITEMS_OFFSET UNITYSDK_OFFSET(0x1699FCD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALNAME_OFFSET UNITYSDK_OFFSET(0x169A0D10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAAME_OFFSET UNITYSDK_OFFSET(0x169A7DD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHABTNEFFECT_OFFSET UNITYSDK_OFFSET(0x169A8A70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x169A7C30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHATABS_OFFSET UNITYSDK_OFFSET(0x169A3450)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAVIEW_OFFSET UNITYSDK_OFFSET(0x169A43A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHMATERIALSCOST_OFFSET UNITYSDK_OFFSET(0x169A8740)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNAMEWIDGET_OFFSET UNITYSDK_OFFSET(0x169A0F80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNEWBIECHOOSEAVATARBTN_OFFSET UNITYSDK_OFFSET(0x169A18A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHSPECIALPANEL_OFFSET UNITYSDK_OFFSET(0x169A8C50)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x169A5F70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REQUESTDATAANDREFRESH_OFFSET UNITYSDK_OFFSET(0x169A1B30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SETGACHATAB_OFFSET UNITYSDK_OFFSET(0x169A3F10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SETTIMER_OFFSET UNITYSDK_OFFSET(0x169AA1A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWAMEPURCHASETIPS_OFFSET UNITYSDK_OFFSET(0x169A1DD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGACHAQUICK_OFFSET UNITYSDK_OFFSET(0x169A2410)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGAMEDIAMONDQUICKBUY_OFFSET UNITYSDK_OFFSET(0x169A2F40)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x169AA430)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYQUICKBUYMATERIALS_OFFSET UNITYSDK_OFFSET(0x169A1D30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYREFRESHINFOWEBVIEW_OFFSET UNITYSDK_OFFSET(0x169A5830)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYFISHBTN_OFFSET UNITYSDK_OFFSET(0x1699F280)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYWATERBTN_OFFSET UNITYSDK_OFFSET(0x1699F520)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_UIGROUPGACHASCHEDULEIDTOSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x169A8000)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x169AA940)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169AA930)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_0_OFFSET UNITYSDK_OFFSET(0x169AADF0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_1_OFFSET UNITYSDK_OFFSET(0x169AAE80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_0_OFFSET UNITYSDK_OFFSET(0x169AADD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_1_OFFSET UNITYSDK_OFFSET(0x169AADE0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__ONCLICKBANGBOOSWITCHBTN_B__9_0_OFFSET UNITYSDK_OFFSET(0x169AA950)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__ONPAYMENTGACHACHOOSEGROUP_B__26_0_OFFSET UNITYSDK_OFFSET(0x169AAA30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_0_OFFSET UNITYSDK_OFFSET(0x169AAB60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_1_OFFSET UNITYSDK_OFFSET(0x169AADB0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__REQUESTDATAANDREFRESH_B__69_0_OFFSET UNITYSDK_OFFSET(0x169AAF30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__TRYREFRESHINFOWEBVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0x169AADC0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169AAFF0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x169AB080)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169AB110)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169AB120)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169AB1E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169AB1F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x169AB200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController_TypeDefinitionIndex = 45776;

	class UIGachaPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_FirstShowActivityWaterBtn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPageController_TypeDefinitionIndex)->GetStaticField(0xFA30);
		}
		// static const ::System::Int32 UIGachaBtnGroupLoopTimerCount = 0x3; // 0x0
		// static const ::System::Int32 MultiplePullTimes = 0xA; // 0x0
		// static const ::System::Int32 RemainTimeThreshold = 0x1E13380; // 0x0
		::MoleMole::UIActivityWaterBtnWidgetController* _btnWidget; // 0x310
		::MoleMole::UIActivityFishBtnWidgetController* _fishBtnWidget; // 0x318
		::MoleMole::UIRoleSelectPoolBtnWidgetController* _roleSelectPoolBtnWidget; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIGachaBtnWidgetController*>* _tabBtns; // 0x328
		::MoleMole::UIGachaBtnWidgetController* _currentTabBtn; // 0x330
		::Class_1_B9E22E218D2BB16E* _loopTimer; // 0x338
		::System::Boolean _isShowingInfoWebView; // 0x340
		::System::String* _cachedWebViewUrl; // 0x348
		::Class_2_79F6D62CE30E3F8E_67* _view; // 0x350
		::Class_2_653E3C571518634D_Class_2_638EE22F63887884* _gachaDataProxy; // 0x358
		::Class_3_AE02BC8285203464_17* _currentGacha; // 0x360
		::System::Int32 _currentGachaID; // 0x368
		::System::Int32 _selectedTabIdx; // 0x36C
		::System::UInt32 _handlerNPC; // 0x370
		::System::Boolean _dirty; // 0x374
		::System::Collections::Generic::List_1<::MoleMole::ActivityDemoTrialContext*>* _groupGachaList; // 0x378
		::MoleMole::UIGeneralTokenWidgetController* _tokenWidget; // 0x380
		::MoleMole::UIWidgetController* _bgWidget; // 0x388
		::MoleMole::UIWidgetController* _panelWidget; // 0x390
		::MoleMole::UIGachaItemNameWidgetController* _nameWidget; // 0x398
		::Foundation::Coroutine::CoroutineHandle _specialWeaponAutoOpenHandle; // 0x3A0
		::MoleMole::UIControllerContextBase* _showControlContext; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void RefreshActivityWaterBtnForGacha(::Class_3_AE02BC8285203464_17* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHACTIVITYWATERBTNFORGACHA_OFFSET))(this, gacha);
		}

		::System::Void OnBtnShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONBTNSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void OnFishBtnShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONFISHBTNSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Boolean TryShowActivityFishBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYFISHBTN_OFFSET))(this);
		}

		::System::Boolean TryShowActivityWaterBtn(::Class_3_AE02BC8285203464_17* gacha)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYWATERBTN_OFFSET))(this, gacha);
		}

		::System::Void RefreshBangbooOptionalItems(::Class_3_AE02BC8285203464_17* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALITEMS_OFFSET))(this, gacha);
		}

		::System::Void OnClickBangbooSwitchBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONCLICKBANGBOOSWITCHBTN_OFFSET))(this);
		}

		::System::Void OpenBangbooOptionalSelectDialog(::System::Int32 gachdID, ::System::Collections::Generic::List_1<::System::Int32>* buddysID, ::System::Int32 selectedBuddyID, ::System::Collections::Generic::List_1<::System::Int32>* topBuddyIDs, ::System::Action_1<::System::Int32>* okAction, ::System::Action* closeAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENBANGBOOOPTIONALSELECTDIALOG_OFFSET))(this, gachdID, buddysID, selectedBuddyID, topBuddyIDs, okAction, closeAction);
		}

		::System::Void ConfirmSelectOptionalBangboo(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_CONFIRMSELECTOPTIONALBANGBOO_OFFSET))(this, buddyID);
		}

		::System::Void RefreshBangbooOptionalName(::Class_3_AE02BC8285203464_17* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALNAME_OFFSET))(this, gacha);
		}

		::System::Void InitRoleSelectPoolBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_INITROLESELECTPOOLBTN_OFFSET))(this);
		}

		::System::Void OpenGachaRoleSelectWidget(::System::Int32 roleSelectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENGACHAROLESELECTWIDGET_OFFSET))(this, roleSelectIndex);
		}

		::System::Void RefreshNewbieChooseAvatarBtn(::System::Boolean show, ::System::Single progressAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNEWBIECHOOSEAVATARBTN_OFFSET))(this, show, progressAnimDelay);
		}

		::System::Void OnPaymentGachaNewbieChooseAvatar(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHANEWBIECHOOSEAVATAR_OFFSET))(this, args);
		}

		::System::Void TryQuickBuyMaterials(::System::UInt32 materialID, ::System::UInt32 num, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRYQUICKBUYMATERIALS_OFFSET))(this, materialID, num, onSuccess, onFailed);
		}

		::System::Void ShowAMEPurchaseTips(::System::UInt32 materialID, ::System::UInt32 num, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWAMEPURCHASETIPS_OFFSET))(this, materialID, num, onSuccess, onFailed);
		}

		::System::Void ShowGachaQuick(::System::UInt32 materialID, ::System::UInt32 num, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGACHAQUICK_OFFSET))(this, materialID, num, onSuccess, onFailed);
		}

		::System::Void GachaQuickGoBuy(::System::UInt32 materialID, ::System::UInt32 num, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_GACHAQUICKGOBUY_OFFSET))(this, materialID, num, onSuccess, onFailed);
		}

		::System::Void ShowGameDiamondQuickBuy(::System::String* currencyName, ::System::Int32 curCurrencyNum, ::System::UInt32 materialID, ::System::UInt32 num, ::System::Int64 costNum, ::System::String* materialName, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Int64, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGAMEDIAMONDQUICKBUY_OFFSET))(this, currencyName, curCurrencyNum, materialID, num, costNum, materialName, onSuccess, onFailed);
		}

		::System::Void DoQuickBuy(::System::UInt32 materialID, ::System::UInt32 num, ::System::Action* onSuccess, ::System::Action* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_DOQUICKBUY_OFFSET))(this, materialID, num, onSuccess, onFailed);
		}

		::System::Void RefreshGachaTabs(::System::Boolean playFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHATABS_OFFSET))(this, playFadeIn);
		}

		::System::Void SetGachaTab(::MoleMole::UIGachaBtnWidgetController* btnWidget, ::Class_3_AE02BC8285203464_17* gacha, ::System::Boolean force, ::System::Boolean playFadeIn, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaBtnWidgetController*, ::Class_3_AE02BC8285203464_17*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SETGACHATAB_OFFSET))(this, btnWidget, gacha, force, playFadeIn, reason);
		}

		::System::Void OnPaymentGachaChooseGroup(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHACHOOSEGROUP_OFFSET))(this, args);
		}

		::System::Void InitScrollToSelectTabBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_INITSCROLLTOSELECTTABBTN_OFFSET))(this);
		}

		::System::Void InitWebViewInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_INITWEBVIEWINFO_OFFSET))(this);
		}

		::System::Void OpenInfoWebView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENINFOWEBVIEW_OFFSET))(this);
		}

		::System::String* GetUrlWithPadTypeParam(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_GETURLWITHPADTYPEPARAM_OFFSET))(this, url);
		}

		::System::Void TryRefreshInfoWebView(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRYREFRESHINFOWEBVIEW_OFFSET))(this, args);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void DealOpenTokenShow(::System::Collections::Generic::List_1<::System::Int32>* tokenItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_DEALOPENTOKENSHOW_OFFSET))(this, tokenItems);
		}

		::System::Void DealMainCityNPC(::System::Boolean isOpened)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_DEALMAINCITYNPC_OFFSET))(this, isOpened);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean dirty, ::System::Boolean fadeInCurrentWidget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, dirty, fadeInCurrentWidget);
		}

		::System::Void RefreshGachaInteractable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAINTERACTABLE_OFFSET))(this);
		}

		::System::Void RefreshGachaAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAAME_OFFSET))(this);
		}

		::System::Void RefreshGachaView(::Class_3_AE02BC8285203464_17* gacha, ::System::Boolean force, ::System::Boolean playFadeIn, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAVIEW_OFFSET))(this, gacha, force, playFadeIn, reason);
		}

		::System::Int32 UIGroupGachaScheduleIdToSelectIndex(::System::Int32 scheduleId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_UIGROUPGACHASCHEDULEIDTOSELECTINDEX_OFFSET))(this, scheduleId);
		}

		::System::Void Gacha(::System::UInt32 times)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_GACHA_OFFSET))(this, times);
		}

		::System::Void CheckExtraTipsAndGacha(::System::UInt32 times)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_CHECKEXTRATIPSANDGACHA_OFFSET))(this, times);
		}

		::System::Void DoGacha(::System::UInt32 times)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_DOGACHA_OFFSET))(this, times);
		}

		::System::Void RefreshMaterialsCost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHMATERIALSCOST_OFFSET))(this);
		}

		::System::Void RefreshSpecialPanel(::Class_3_AE02BC8285203464_17* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHSPECIALPANEL_OFFSET))(this, gacha);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_BACKTOMAIN_OFFSET))(this);
		}

		::System::Void OpenExchange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENEXCHANGE_OFFSET))(this);
		}

		::System::Void OpenPerformPage(::System::Int32 gachaID, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0*>* dropItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENPERFORMPAGE_OFFSET))(this, gachaID, dropItems);
		}

		::System::Void OpenRewardPopWindow(::System::Int32 gachaID, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0*>* dropItems, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* pointItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENREWARDPOPWINDOW_OFFSET))(this, gachaID, dropItems, pointItems);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnDailyRefresh(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONDAILYREFRESH_OFFSET))(this, args);
		}

		::System::Void RequestDataAndRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REQUESTDATAANDREFRESH_OFFSET))(this);
		}

		::System::Void RefreshGachaBtnEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHABTNEFFECT_OFFSET))(this);
		}

		::System::Void SetTimer(::UnityEngine::UI::Extension::UITimeWidget* timer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SETTIMER_OFFSET))(this, timer);
		}

		::System::Void RefreshNameWidget(::System::Boolean show, ::System::String* nameText, ::System::String* nameEFText, ::System::Boolean showBtn, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNAMEWIDGET_OFFSET))(this, show, nameText, nameEFText, showBtn, onClick);
		}

		::System::Void ForceSetGachaUIGroupScheduleIdLocal(::System::Int32 gachaId, ::System::Int32 scheduleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_FORCESETGACHAUIGROUPSCHEDULEIDLOCAL_OFFSET))(this, gachaId, scheduleId);
		}

		::System::Void TriggerNewBie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRIGGERNEWBIE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* AvatarScrollViewCreateFunc(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_AVATARSCROLLVIEWCREATEFUNC_OFFSET))(this, arg);
		}

		::System::Void OnAvatarScrollViewClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONAVATARSCROLLVIEWCLICK_OFFSET))(this, index);
		}

		::System::Void OnActivityAdded(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_ONACTIVITYADDED_OFFSET))(this, obj);
		}

		::System::Void _OnClickBangbooSwitchBtn_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__ONCLICKBANGBOOSWITCHBTN_B__9_0_OFFSET))(this);
		}

		::System::Void _OnPaymentGachaChooseGroup_b__26_0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__ONPAYMENTGACHACHOOSEGROUP_B__26_0_OFFSET))(this, msg);
		}

		::System::Void _OpenInfoWebView_b__33_0(::System::String* convertUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_0_OFFSET))(this, convertUrl);
		}

		::System::Void _OpenInfoWebView_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_1_OFFSET))(this);
		}

		::System::Void _TryRefreshInfoWebView_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__TRYREFRESHINFOWEBVIEW_B__35_0_OFFSET))(this);
		}

		::System::Void _InitView_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_0_OFFSET))(this);
		}

		::System::Void _InitView_b__52_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_1_OFFSET))(this);
		}

		::System::Void _DoGacha_b__60_0(::Class_0_16E4307DCC419505_11* gachaMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_0_OFFSET))(this, gachaMessage);
		}

		::System::Void _DoGacha_b__60_1(::Class_0_16E4307DCC419505_11* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_1_OFFSET))(this, errorMessage);
		}

		::System::Void _RequestDataAndRefresh_b__69_0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__REQUESTDATAANDREFRESH_B__69_0_OFFSET))(this, msg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
