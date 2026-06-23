#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIGachaPageController_ERefreshGachaViewReason.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_29;
class Class_1_B9E22E218D2BB16E;
class Class_2_653E3C571518634D_Class_2_638EE22F63887884;
class Class_2_79F6D62CE30E3F8E_105;
class Class_3_4666E61F66433B1E_2;
class Class_3_601FA52CA5E757A0_1;
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

#define MOLEMOLE_UIGACHAPAGECONTROLLER_AVATARSCROLLVIEWCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x186ACFF0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x186AB4C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_CHECKEXTRATIPSANDGACHA_OFFSET UNITYSDK_OFFSET(0x186AA4D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_CONFIRMSELECTOPTIONALBANGBOO_OFFSET UNITYSDK_OFFSET(0x16F38100)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DEALMAINCITYNPC_OFFSET UNITYSDK_OFFSET(0x186A8BE0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DEALOPENTOKENSHOW_OFFSET UNITYSDK_OFFSET(0x186A9360)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DOGACHA_OFFSET UNITYSDK_OFFSET(0x186AA740)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_DOQUICKBUY_OFFSET UNITYSDK_OFFSET(0x16F39EC0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_FORCESETGACHAUIGROUPSCHEDULEIDLOCAL_OFFSET UNITYSDK_OFFSET(0x186ACC60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GACHAQUICKGOBUY_OFFSET UNITYSDK_OFFSET(0x16F39C80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GACHA_OFFSET UNITYSDK_OFFSET(0x186AA2B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GETURLWITHPADTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x16F3C530)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x186A9040)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16F3CAA0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITROLESELECTPOOLBTN_OFFSET UNITYSDK_OFFSET(0x16F38710)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITSCROLLTOSELECTTABBTN_OFFSET UNITYSDK_OFFSET(0x16F3B860)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x186A85D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_INITWEBVIEWINFO_OFFSET UNITYSDK_OFFSET(0x16F3BAC0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONACTIVITYADDED_OFFSET UNITYSDK_OFFSET(0x186AD270)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONAVATARSCROLLVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x186AD0A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x16F37150)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONCLICKBANGBOOSWITCHBTN_OFFSET UNITYSDK_OFFSET(0x16F376A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F3CF10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONDAILYREFRESH_OFFSET UNITYSDK_OFFSET(0x186AC350)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONFISHBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x16F372C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x186AC140)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x186A9050)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHACHOOSEGROUP_OFFSET UNITYSDK_OFFSET(0x16F3B650)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONPAYMENTGACHANEWBIECHOOSEAVATAR_OFFSET UNITYSDK_OFFSET(0x16F38F60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F3CAB0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x186A8340)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186A8E70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186A84F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F3CFA0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENBANGBOOOPTIONALSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0x16F37D60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENEXCHANGE_OFFSET UNITYSDK_OFFSET(0x186AB5E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENGACHAROLESELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x16F387B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENINFOWEBVIEW_OFFSET UNITYSDK_OFFSET(0x16F3BB10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENPERFORMPAGE_OFFSET UNITYSDK_OFFSET(0x186AB7C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_OPENREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x186ABE80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHACTIVITYWATERBTNFORGACHA_OFFSET UNITYSDK_OFFSET(0x16F36930)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALITEMS_OFFSET UNITYSDK_OFFSET(0x16F37430)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALNAME_OFFSET UNITYSDK_OFFSET(0x16F384A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAAME_OFFSET UNITYSDK_OFFSET(0x186A9F70)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHABTNEFFECT_OFFSET UNITYSDK_OFFSET(0x186AAC60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x186A9DD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHATABS_OFFSET UNITYSDK_OFFSET(0x16F3A6D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAVIEW_OFFSET UNITYSDK_OFFSET(0x186A9C20)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHMATERIALSCOST_OFFSET UNITYSDK_OFFSET(0x186AA930)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNAMEWIDGET_OFFSET UNITYSDK_OFFSET(0x186AC830)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHNEWBIECHOOSEAVATARBTN_OFFSET UNITYSDK_OFFSET(0x16F38CB0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHSPECIALPANEL_OFFSET UNITYSDK_OFFSET(0x186AAE30)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x186A9B90)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_REQUESTDATAANDREFRESH_OFFSET UNITYSDK_OFFSET(0x186AC3A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SETGACHATAB_OFFSET UNITYSDK_OFFSET(0x16F3B1C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SETTIMER_OFFSET UNITYSDK_OFFSET(0x186AC5A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWAMEPURCHASETIPS_OFFSET UNITYSDK_OFFSET(0x16F39050)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGACHAQUICK_OFFSET UNITYSDK_OFFSET(0x16F39690)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_SHOWGAMEDIAMONDQUICKBUY_OFFSET UNITYSDK_OFFSET(0x16F3A1C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x186ACDD0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYQUICKBUYMATERIALS_OFFSET UNITYSDK_OFFSET(0x16F38FB0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYREFRESHINFOWEBVIEW_OFFSET UNITYSDK_OFFSET(0x16F3C940)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYFISHBTN_OFFSET UNITYSDK_OFFSET(0x16F369D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYWATERBTN_OFFSET UNITYSDK_OFFSET(0x16F36C80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER_UIGROUPGACHASCHEDULEIDTOSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186AA1F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186AD2E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186AD2D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_0_OFFSET UNITYSDK_OFFSET(0x186AD790)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_1_OFFSET UNITYSDK_OFFSET(0x186AD820)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_0_OFFSET UNITYSDK_OFFSET(0x186AD770)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__INITVIEW_B__52_1_OFFSET UNITYSDK_OFFSET(0x186AD780)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__ONCLICKBANGBOOSWITCHBTN_B__9_0_OFFSET UNITYSDK_OFFSET(0x186AD2F0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__ONPAYMENTGACHACHOOSEGROUP_B__26_0_OFFSET UNITYSDK_OFFSET(0x186AD3D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_0_OFFSET UNITYSDK_OFFSET(0x186AD500)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__OPENINFOWEBVIEW_B__33_1_OFFSET UNITYSDK_OFFSET(0x186AD750)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__REQUESTDATAANDREFRESH_B__69_0_OFFSET UNITYSDK_OFFSET(0x186AD8D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER__TRYREFRESHINFOWEBVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0x186AD760)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186AD990)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x186ADA20)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x186ADAB0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x186ADAC0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186ADB80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186ADB90)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186ADBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController_TypeDefinitionIndex = 64978;

	class UIGachaPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_FirstShowActivityWaterBtn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPageController_TypeDefinitionIndex)->GetStaticField(0x10380);
		}
		// static const ::System::Int32 UIGachaBtnGroupLoopTimerCount = 0x3; // 0x0
		// static const ::System::Int32 MultiplePullTimes = 0xA; // 0x0
		// static const ::System::Int32 RemainTimeThreshold = 0x1E13380; // 0x0
		::MoleMole::UIActivityWaterBtnWidgetController* _btnWidget; // 0x318
		::MoleMole::UIActivityFishBtnWidgetController* _fishBtnWidget; // 0x320
		::MoleMole::UIRoleSelectPoolBtnWidgetController* _roleSelectPoolBtnWidget; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIGachaBtnWidgetController*>* _tabBtns; // 0x330
		::MoleMole::UIGachaBtnWidgetController* _currentTabBtn; // 0x338
		::Class_1_B9E22E218D2BB16E* _loopTimer; // 0x340
		::System::Boolean _isShowingInfoWebView; // 0x348
		::System::String* _cachedWebViewUrl; // 0x350
		::Class_2_79F6D62CE30E3F8E_105* _view; // 0x358
		::Class_2_653E3C571518634D_Class_2_638EE22F63887884* _gachaDataProxy; // 0x360
		::Class_3_4666E61F66433B1E_2* _currentGacha; // 0x368
		::System::Int32 _currentGachaID; // 0x370
		::System::Int32 _selectedTabIdx; // 0x374
		::System::UInt32 _handlerNPC; // 0x378
		::System::Boolean _dirty; // 0x37C
		::System::Collections::Generic::List_1<::MoleMole::ActivityDemoTrialContext*>* _groupGachaList; // 0x380
		::MoleMole::UIGeneralTokenWidgetController* _tokenWidget; // 0x388
		::MoleMole::UIWidgetController* _bgWidget; // 0x390
		::MoleMole::UIWidgetController* _panelWidget; // 0x398
		::MoleMole::UIGachaItemNameWidgetController* _nameWidget; // 0x3A0
		::Foundation::Coroutine::CoroutineHandle _specialWeaponAutoOpenHandle; // 0x3A8
		::MoleMole::UIControllerContextBase* _showControlContext; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void RefreshActivityWaterBtnForGacha(::Class_3_4666E61F66433B1E_2* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHACTIVITYWATERBTNFORGACHA_OFFSET))(this, gacha);
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

		::System::Boolean TryShowActivityWaterBtn(::Class_3_4666E61F66433B1E_2* gacha)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_TRYSHOWACTIVITYWATERBTN_OFFSET))(this, gacha);
		}

		::System::Void RefreshBangbooOptionalItems(::Class_3_4666E61F66433B1E_2* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALITEMS_OFFSET))(this, gacha);
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

		::System::Void RefreshBangbooOptionalName(::Class_3_4666E61F66433B1E_2* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHBANGBOOOPTIONALNAME_OFFSET))(this, gacha);
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

		::System::Void SetGachaTab(::MoleMole::UIGachaBtnWidgetController* btnWidget, ::Class_3_4666E61F66433B1E_2* gacha, ::System::Boolean force, ::System::Boolean playFadeIn, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaBtnWidgetController*, ::Class_3_4666E61F66433B1E_2*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_SETGACHATAB_OFFSET))(this, btnWidget, gacha, force, playFadeIn, reason);
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

		::System::Void RefreshGachaView(::Class_3_4666E61F66433B1E_2* gacha, ::System::Boolean force, ::System::Boolean playFadeIn, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIGachaPageController_ERefreshGachaViewReason))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHGACHAVIEW_OFFSET))(this, gacha, force, playFadeIn, reason);
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

		::System::Void RefreshSpecialPanel(::Class_3_4666E61F66433B1E_2* gacha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_REFRESHSPECIALPANEL_OFFSET))(this, gacha);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_BACKTOMAIN_OFFSET))(this);
		}

		::System::Void OpenExchange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENEXCHANGE_OFFSET))(this);
		}

		::System::Void OpenPerformPage(::System::Int32 gachaID, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0_1*>* dropItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENPERFORMPAGE_OFFSET))(this, gachaID, dropItems);
		}

		::System::Void OpenRewardPopWindow(::System::Int32 gachaID, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0_1*>* dropItems, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* pointItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0_1*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER_OPENREWARDPOPWINDOW_OFFSET))(this, gachaID, dropItems, pointItems);
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

		::System::Void _OnPaymentGachaChooseGroup_b__26_0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__ONPAYMENTGACHACHOOSEGROUP_B__26_0_OFFSET))(this, msg);
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

		::System::Void _DoGacha_b__60_0(::Class_0_16E4307DCC419505_29* gachaMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_0_OFFSET))(this, gachaMessage);
		}

		::System::Void _DoGacha_b__60_1(::Class_0_16E4307DCC419505_29* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__DOGACHA_B__60_1_OFFSET))(this, errorMessage);
		}

		::System::Void _RequestDataAndRefresh_b__69_0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER__REQUESTDATAANDREFRESH_B__69_0_OFFSET))(this, msg);
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
