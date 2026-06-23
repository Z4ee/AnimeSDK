#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_1EA8435E138F2E03;
class Class_1_7FF04A277F680763;
class Class_2_89050B08CC62D038;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainPageBG3DModelController; }
namespace MoleMole { class UIPartnerDateSelectWidgetController; }
namespace MoleMole { class UIPartnerDateSwitchAvatarWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x16136E30)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16136CE0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_HANDLEFAIRYTIP_OFFSET UNITYSDK_OFFSET(0x161386E0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_INITWIDGETS_OFFSET UNITYSDK_OFFSET(0x16137490)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONBEFOREPLAYSTARTFADEIN_OFFSET UNITYSDK_OFFSET(0x161384D0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONCONFIRMSELECT_OFFSET UNITYSDK_OFFSET(0x161394B0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16136CF0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONDROPDOWNCHANGED_OFFSET UNITYSDK_OFFSET(0x161388C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16138580)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x161381C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16137640)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16136D80)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x161377E0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_OPENREWARDDIALOG_OFFSET UNITYSDK_OFFSET(0x1613A200)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHCONFIRMBTN_OFFSET UNITYSDK_OFFSET(0x16139360)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHGOBTN_OFFSET UNITYSDK_OFFSET(0x16138060)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHHIDEBTNVISIBLE_OFFSET UNITYSDK_OFFSET(0x16139280)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHOTHERPARTNERREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0x16137D30)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHOTHERPARTNERREWARDNOTIFY_STASH_OFFSET UNITYSDK_OFFSET(0x1613A3C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x16139080)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHROLEIMAGE_OFFSET UNITYSDK_OFFSET(0x16138930)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16137C90)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SELECTPARTNER_OFFSET UNITYSDK_OFFSET(0x16139300)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SETIMMERSIVEMODE_OFFSET UNITYSDK_OFFSET(0x16136AD0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SHOWSELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x16138F20)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_UPDATESHOWPARTNERID_OFFSET UNITYSDK_OFFSET(0x16139F10)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_0_OFFSET UNITYSDK_OFFSET(0x1613A8D0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_1_OFFSET UNITYSDK_OFFSET(0x1613A8E0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_2_OFFSET UNITYSDK_OFFSET(0x1613A980)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_4_OFFSET UNITYSDK_OFFSET(0x1613A9C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_5_OFFSET UNITYSDK_OFFSET(0x1613A9F0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_6_OFFSET UNITYSDK_OFFSET(0x1613AA10)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_7_OFFSET UNITYSDK_OFFSET(0x1613AA30)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1613A790)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__HANDLEFAIRYTIP_B__17_0_OFFSET UNITYSDK_OFFSET(0x1613ABC0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__HANDLEFAIRYTIP_B__17_1_OFFSET UNITYSDK_OFFSET(0x1613ABD0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__SETIMMERSIVEMODE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1613A8C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__SETIMMERSIVEMODE_G__SETACTIVEFORIMMERSIVEMODE_0_1_OFFSET UNITYSDK_OFFSET(0x16136BE0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONBEFOREPLAYSTARTFADEIN_OFFSET UNITYSDK_OFFSET(0x1613ABE0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1613AC70)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1613AD00)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1613AD10)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1613AD40)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1613AD50)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1613AD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController_TypeDefinitionIndex = 61892;

	class UIPartnerDatePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _inImmersiveMode; // 0x318
		::Class_2_89050B08CC62D038* _view; // 0x320
		::System::Int32 _selectedPartnerID; // 0x328
		::System::Int32 _showPartnerID; // 0x32C
		::MoleMole::UIMainPageBG3DModelController* _bgController; // 0x330
		::MoleMole::UIPartnerDateSelectWidgetController* _selectWidget; // 0x338
		::MoleMole::UIPartnerDateSwitchAvatarWidgetController* _switchControlAvatarWidget; // 0x340
		::System::Boolean _showSelect; // 0x348
		::Class_1_7FF04A277F680763* _dropDownWrapper; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* _partnerList; // 0x358
		::System::Collections::Generic::List_1<::System::Int32>* _filteredPartnerList; // 0x360
		::System::Int32 _validTipCount; // 0x368
		::Class_1_1EA8435E138F2E03* _otherRewardNotificationNode; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetImmersiveMode(::System::Boolean enter, ::System::Boolean force, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SETIMMERSIVEMODE_OFFSET))(this, enter, force, playAnim);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnBeforePlayStartFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONBEFOREPLAYSTARTFADEIN_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void OnDropDownChanged(::System::Collections::Generic::List_1<::System::Int32>* filterPartners, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONDROPDOWNCHANGED_OFFSET))(this, filterPartners, index);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void InitWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_INITWIDGETS_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean refreshRoleImage, ::System::Boolean playImmersiveAnim, ::System::Boolean playSelectAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, refreshRoleImage, playImmersiveAnim, playSelectAnim);
		}

		::System::Void RefreshRoleImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHROLEIMAGE_OFFSET))(this);
		}

		::System::Void HandleFairyTip(::System::Collections::Generic::List_1<::System::Int32>* fairyIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_HANDLEFAIRYTIP_OFFSET))(this, fairyIDs);
		}

		::System::Void ShowSelectWidget(::System::Boolean show, ::System::Boolean force, ::System::Boolean playAnim, ::System::Action* changeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SHOWSELECTWIDGET_OFFSET))(this, show, force, playAnim, changeState);
		}

		::System::Void RefreshHideBtnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHHIDEBTNVISIBLE_OFFSET))(this);
		}

		::System::Void SelectPartner(::System::Int32 partnerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_SELECTPARTNER_OFFSET))(this, partnerID);
		}

		::System::Void RefreshConfirmBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHCONFIRMBTN_OFFSET))(this);
		}

		::System::Void OnConfirmSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_ONCONFIRMSELECT_OFFSET))(this);
		}

		::System::Void UpdateShowPartnerID(::System::Int32 partnerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_UPDATESHOWPARTNERID_OFFSET))(this, partnerID);
		}

		::System::Void OpenRewardDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_OPENREWARDDIALOG_OFFSET))(this);
		}

		::System::Void RefreshRewardState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHREWARDSTATE_OFFSET))(this);
		}

		::System::Void RefreshOtherPartnerRewardNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHOTHERPARTNERREWARDNOTIFY_OFFSET))(this);
		}

		::System::Void RefreshOtherPartnerRewardNotify_Stash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHOTHERPARTNERREWARDNOTIFY_STASH_OFFSET))(this);
		}

		::System::Void RefreshGoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER_REFRESHGOBTN_OFFSET))(this);
		}

		::System::Void _SetImmersiveMode_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__SETIMMERSIVEMODE_B__0_0_OFFSET))(this);
		}

		::System::Void _SetImmersiveMode_g__SetActiveForImmersiveMode_0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__SETIMMERSIVEMODE_G__SETACTIVEFORIMMERSIVEMODE_0_1_OFFSET))(this);
		}

		::System::Void _Bind_b__13_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_0_OFFSET))(this, args);
		}

		::System::Void _Bind_b__13_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_1_OFFSET))(this, _);
		}

		::System::Void _Bind_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_2_OFFSET))(this);
		}

		::System::Void _Bind_b__13_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_4_OFFSET))(this);
		}

		::System::Void _Bind_b__13_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_5_OFFSET))(this);
		}

		::System::Void _Bind_b__13_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_6_OFFSET))(this);
		}

		::System::Void _Bind_b__13_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__BIND_B__13_7_OFFSET))(this);
		}

		::System::Void _HandleFairyTip_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__HANDLEFAIRYTIP_B__17_0_OFFSET))(this);
		}

		::System::Void _HandleFairyTip_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER__HANDLEFAIRYTIP_B__17_1_OFFSET))(this);
		}

		::System::Void __base_OnBeforePlayStartFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONBEFOREPLAYSTARTFADEIN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
