#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_5BD89F1F83F7650C.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_A48B3771FE1DF659;
class Class_1_B1CC8F53861C28C2;
class Class_1_BE6BF7909AD9D940;
class Class_1_E87F7C93CB0CC57E;
class Class_2_01A9580380D362EF;
class Class_2_2F3C7D4EFC74D485;
class Class_2_60638234271CCDB8_110;
class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class UIChatWindowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendChatItemContext; }
namespace MoleMole { class UIFriendChatPopWindowController_Context; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UITabBtn01RowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CHECKTARGETTABISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x15EFCBD0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CLOSEBTNSPOPUP_OFFSET UNITYSDK_OFFSET(0x15EFC640)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_FINDCHATIDXBYBRIEFINFO_OFFSET UNITYSDK_OFFSET(0x15F00870)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_FINDCHATTINGBRIEFINFOBYUID_OFFSET UNITYSDK_OFFSET(0x15F00760)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETCIRCLESHOWTITLETOGGLE_OFFSET UNITYSDK_OFFSET(0x15EFE3D0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETFIRSTAVAILABLETAB_OFFSET UNITYSDK_OFFSET(0x15EFCCC0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETLASTSELECTTABINFO_OFFSET UNITYSDK_OFFSET(0x15EFD9B0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_CURRSELECTTAB_OFFSET UNITYSDK_OFFSET(0x15EFE3B0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISBTNSPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x15EFE3C0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISCIRCLEPANELREADY_OFFSET UNITYSDK_OFFSET(0x15EFFCD0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISFRIENDPANELREADY_OFFSET UNITYSDK_OFFSET(0x15EFE2E0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15EFAE80)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_INITBTNSPOPUP_OFFSET UNITYSDK_OFFSET(0x15EFBB40)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCHATITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15EFF2C0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCIRCLECHATITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15EFF510)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKGOTOCIRCLEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x15EFC270)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKHIDECHATBTN_OFFSET UNITYSDK_OFFSET(0x15F00C40)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKREPORTCIRCLE_OFFSET UNITYSDK_OFFSET(0x15F00110)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EFDFA0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15EFC1E0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONDONTDISTURBTOGGLESWITCH_OFFSET UNITYSDK_OFFSET(0x15EFFBA0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONFRIENDCHATITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15EFF370)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONINITCIRCLEPANEL_OFFSET UNITYSDK_OFFSET(0x15EFC0D0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONINITFRIENDPANEL_OFFSET UNITYSDK_OFFSET(0x15EFBDD0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVECHATHISTORYMSG_OFFSET UNITYSDK_OFFSET(0x15F012F0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVEFRIENDCHATLIST_OFFSET UNITYSDK_OFFSET(0x15F00E60)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVEUNREADCHATLIST_OFFSET UNITYSDK_OFFSET(0x15F01290)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONTABBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15EFC850)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONTOGGLESWITCH_OFFSET UNITYSDK_OFFSET(0x15EFF7C0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EFE030)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EFAE90)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EFD7E0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUPDATEFRIENDINFO_OFFSET UNITYSDK_OFFSET(0x15F009C0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_OPENBTNSPOPUP_OFFSET UNITYSDK_OFFSET(0x15EFC330)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PLAYSWITCHTABANIM_OFFSET UNITYSDK_OFFSET(0x15EFD050)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PREPARECIRCLEPANELDATA_OFFSET UNITYSDK_OFFSET(0x15EFDB90)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PREPAREFRIENDPANELDATA_OFFSET UNITYSDK_OFFSET(0x15EFDA70)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_REALSELECTCHATITEM_OFFSET UNITYSDK_OFFSET(0x15EFEFE0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_REBUILDCHATITEMUI_OFFSET UNITYSDK_OFFSET(0x15F004B0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_RECORDCURRENTSELECTTABINFO_OFFSET UNITYSDK_OFFSET(0x15EFCD30)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SAVECIRCLESHOWTITLETOGGLE_OFFSET UNITYSDK_OFFSET(0x15EFF920)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWCIRCLEITEM_OFFSET UNITYSDK_OFFSET(0x15EFE580)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWCIRCLEPANELUI_OFFSET UNITYSDK_OFFSET(0x15EFD6B0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWFRIENDPANELUI_OFFSET UNITYSDK_OFFSET(0x15EFD0F0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHCHATWINDOWCONTENT_OFFSET UNITYSDK_OFFSET(0x15EFE340)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHCIRCLEPANELUI_OFFSET UNITYSDK_OFFSET(0x15EFCF90)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHFRIENDPANELUI_OFFSET UNITYSDK_OFFSET(0x15EFCEF0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_TRYSHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x15EFE120)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGEBYCIRCLEWHENNEWMSGCOME_OFFSET UNITYSDK_OFFSET(0x15EFFE40)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGEBYCIRCLE_OFFSET UNITYSDK_OFFSET(0x15EFFCE0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGE_OFFSET UNITYSDK_OFFSET(0x15F01360)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__CLOSEBTNSPOPUP_B__10_0_OFFSET UNITYSDK_OFFSET(0x15F01780)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01430)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKGOTOCIRCLEMAINPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15F015A0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_0_OFFSET UNITYSDK_OFFSET(0x15F01940)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_1_OFFSET UNITYSDK_OFFSET(0x15F019F0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_2_OFFSET UNITYSDK_OFFSET(0x15F01A60)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONINITFRIENDPANEL_B__62_0_OFFSET UNITYSDK_OFFSET(0x15F01830)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__OPENBTNSPOPUP_B__9_0_OFFSET UNITYSDK_OFFSET(0x15F016B0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__PREPAREFRIENDPANELDATA_B__63_0_OFFSET UNITYSDK_OFFSET(0x15F01930)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__UPDATECHATPAGE_B__76_0_OFFSET UNITYSDK_OFFSET(0x15F02050)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F02070)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15F02100)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F02110)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F02120)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F02130)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController_TypeDefinitionIndex = 58705;

	class UIFriendChatPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _SWITCH_TAB_ANIM; // 0x0
		// static const ::System::String* OPEN_POPUP_ANIM; // 0x0
		// static const ::System::String* CLOSE_POPUP_ANIM; // 0x0
		::Class_2_60638234271CCDB8_110* _view; // 0x310
		::MoleMole::UIChatWindowWidgetController* _chatWindowController; // 0x318
		::Class_2_2F3C7D4EFC74D485* _model; // 0x320
		::Class_2_01A9580380D362EF* _circleModel; // 0x328
		::System::Boolean _isFirstSelect; // 0x330
		::System::Boolean _isPlayingTabAnim; // 0x331
		::Enum_3_5BD89F1F83F7650C _currSelectTab; // 0x334
		::System::Collections::Generic::Dictionary_2<::Enum_3_5BD89F1F83F7650C, ::System::Boolean>* _chatTabUnlockStateDic; // 0x338
		::System::Collections::Generic::Dictionary_2<::Enum_3_5BD89F1F83F7650C, ::System::String*>* _chatTabUnlockTipsDic; // 0x340
		::System::Int32 _currSelectIdx; // 0x348
		::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* _currChatItemDataList; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIFriendChatItemContext*>* _currUIChatItemList; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn01RowWidgetController*>* _tabsList; // 0x360
		::MoleMole::UIGeneralToggleWidgetController* _dontDisturbToggle; // 0x368
		::System::Boolean _isBtnsPopupOpen; // 0x370
		::MoleMole::UIGeneralToggleWidgetController* _circleToggle; // 0x378
		::System::Boolean _isCirclePanelReady; // 0x380
		::Class_2_DF2C726EEEEC912D* currSelectedCircleData; // 0x388
		::System::Collections::Generic::List_1<::Class_1_A48B3771FE1DF659*>* _currCircleChatItemDataList; // 0x390
		::System::Boolean _isChatReady; // 0x398
		::System::Boolean _isUnreadListReady; // 0x399
		::System::Boolean _isFirstMsgReceived; // 0x39A
		::Class_1_BE6BF7909AD9D940* initSelectedInfo; // 0x3A0
		::Class_1_BE6BF7909AD9D940* currSelectedInfo; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnClickGotoCircleMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKGOTOCIRCLEMAINPAGE_OFFSET))(this);
		}

		::System::Void InitBtnsPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_INITBTNSPOPUP_OFFSET))(this);
		}

		::System::Void OpenBtnsPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_OPENBTNSPOPUP_OFFSET))(this);
		}

		::System::Void CloseBtnsPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CLOSEBTNSPOPUP_OFFSET))(this);
		}

		::System::Void OnTabBtnClicked(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONTABBTNCLICKED_OFFSET))(this, index);
		}

		::System::Void PlaySwitchTabAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PLAYSWITCHTABANIM_OFFSET))(this);
		}

		::System::Boolean CheckTargetTabIsAvailable(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CHECKTARGETTABISAVAILABLE_OFFSET))(this, index);
		}

		::System::Int32 GetFirstAvailableTab()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETFIRSTAVAILABLETAB_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TryShowElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_TRYSHOWELEMENTS_OFFSET))(this);
		}

		::System::Void RecordCurrentSelectTabInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_RECORDCURRENTSELECTTABINFO_OFFSET))(this);
		}

		::System::Void GetLastSelectTabInfo(::Class_1_BE6BF7909AD9D940* initFriendInfo, ::Class_2_DF2C726EEEEC912D* circleDataExt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*, ::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETLASTSELECTTABINFO_OFFSET))(this, initFriendInfo, circleDataExt);
		}

		::System::Void SwitchChatWindowContent(::System::Boolean isChatPanelEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHCHATWINDOWCONTENT_OFFSET))(this, isChatPanelEmpty);
		}

		::Enum_3_5BD89F1F83F7650C get_CurrSelectTab()
		{
			return ((::Enum_3_5BD89F1F83F7650C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_CURRSELECTTAB_OFFSET))(this);
		}

		::System::Boolean get_IsBtnsPopupOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISBTNSPOPUPOPEN_OFFSET))(this);
		}

		::System::Void OnInitCirclePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONINITCIRCLEPANEL_OFFSET))(this);
		}

		::System::Void PrepareCirclePanelData(::MoleMole::UIFriendChatPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PREPARECIRCLEPANELDATA_OFFSET))(this, context);
		}

		::System::Void SwitchCirclePanelUI(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHCIRCLEPANELUI_OFFSET))(this, isShow);
		}

		::System::Void ShowCirclePanelUI(::System::UInt32 lastSelectedCircleUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWCIRCLEPANELUI_OFFSET))(this, lastSelectedCircleUID);
		}

		::System::Void ShowCircleItem(::System::UInt32 lastSelectedCircleUID, ::System::Boolean needTriggerClickItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWCIRCLEITEM_OFFSET))(this, lastSelectedCircleUID, needTriggerClickItem);
		}

		::System::Void OnChatItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCHATITEMSELECT_OFFSET))(this, index);
		}

		::System::Void OnCircleChatItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCIRCLECHATITEMSELECT_OFFSET))(this, index);
		}

		::System::Void OnToggleSwitch(::System::Boolean willToggleOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONTOGGLESWITCH_OFFSET))(this, willToggleOn, isInit);
		}

		::System::Void SaveCircleShowTitleToggle(::System::UInt32 circleUID, ::System::Boolean isToggleOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SAVECIRCLESHOWTITLETOGGLE_OFFSET))(this, circleUID, isToggleOn);
		}

		::System::Boolean GetCircleShowTitleToggle(::System::UInt32 circleUID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GETCIRCLESHOWTITLETOGGLE_OFFSET))(this, circleUID);
		}

		::System::Void OnDontDisturbToggleSwitch(::System::Boolean willToggleOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONDONTDISTURBTOGGLESWITCH_OFFSET))(this, willToggleOn, isInit);
		}

		::System::Boolean get_IsCirclePanelReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISCIRCLEPANELREADY_OFFSET))(this);
		}

		::System::Void UpdateChatPageByCircle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGEBYCIRCLE_OFFSET))(this, args);
		}

		::System::Void UpdateChatPageByCircleWhenNewMsgCome(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGEBYCIRCLEWHENNEWMSGCOME_OFFSET))(this, args);
		}

		::System::Void OnClickReportCircle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKREPORTCIRCLE_OFFSET))(this);
		}

		::System::Void OnInitFriendPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONINITFRIENDPANEL_OFFSET))(this);
		}

		::System::Void PrepareFriendPanelData(::MoleMole::UIFriendChatPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_PREPAREFRIENDPANELDATA_OFFSET))(this, context);
		}

		::System::Void SwitchFriendPanelUI(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SWITCHFRIENDPANELUI_OFFSET))(this, isShow);
		}

		::System::Void ShowFriendPanelUI(::System::UInt32 lastSelectedFriendUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_SHOWFRIENDPANELUI_OFFSET))(this, lastSelectedFriendUID);
		}

		::System::Void RealSelectChatItem(::System::Int32 selectIdx, ::System::Boolean needTriggerClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_REALSELECTCHATITEM_OFFSET))(this, selectIdx, needTriggerClick);
		}

		::System::Void OnFriendChatItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONFRIENDCHATITEMSELECT_OFFSET))(this, index);
		}

		::System::Void OnUpdateFriendInfo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONUPDATEFRIENDINFO_OFFSET))(this, obj);
		}

		::System::Void OnClickHideChatBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONCLICKHIDECHATBTN_OFFSET))(this);
		}

		::System::Void OnReceiveFriendChatList(::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* dataList, ::System::Boolean isFirstTime, ::System::Boolean needShowUI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVEFRIENDCHATLIST_OFFSET))(this, dataList, isFirstTime, needShowUI);
		}

		::System::Void OnReceiveUnreadChatList(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::Boolean, ::System::Int32>*>* dataDic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::Boolean, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVEUNREADCHATLIST_OFFSET))(this, dataDic);
		}

		::System::Void OnReceiveChatHistoryMsg(::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>* dataList, ::System::Boolean needShowUI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_ONRECEIVECHATHISTORYMSG_OFFSET))(this, dataList, needShowUI);
		}

		::System::Int32 FindChatIdxByBriefInfo(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_FINDCHATIDXBYBRIEFINFO_OFFSET))(this, info);
		}

		::Class_1_BE6BF7909AD9D940* FindChattingBriefInfoByUID(::System::UInt32 friendUID)
		{
			return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_FINDCHATTINGBRIEFINFOBYUID_OFFSET))(this, friendUID);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIFriendChatItemContext*>* RebuildChatItemUI(::Class_1_BE6BF7909AD9D940* briefinfo, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIFriendChatItemContext*>*(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_REBUILDCHATITEMUI_OFFSET))(this, briefinfo, dataList);
		}

		::System::Void UpdateChatPage(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_UPDATECHATPAGE_OFFSET))(this, obj);
		}

		::System::Boolean get_IsFriendPanelReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_GET_ISFRIENDPANELREADY_OFFSET))(this);
		}

		::System::Void _OnClickGotoCircleMainPage_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKGOTOCIRCLEMAINPAGE_B__7_0_OFFSET))(this);
		}

		::System::Void _OpenBtnsPopup_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__OPENBTNSPOPUP_B__9_0_OFFSET))(this);
		}

		::System::Void _CloseBtnsPopup_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__CLOSEBTNSPOPUP_B__10_0_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONINITFRIENDPANEL_B__62_0_OFFSET))(this);
		}

		::System::Void _PrepareFriendPanelData_b__63_0(::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__PREPAREFRIENDPANELDATA_B__63_0_OFFSET))(this, dataList);
		}

		::System::Void _OnClickHideChatBtn_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_0_OFFSET))(this);
		}

		::System::Void _OnClickHideChatBtn_b__69_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_1_OFFSET))(this);
		}

		::System::Void _OnClickHideChatBtn_b__69_2(::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__ONCLICKHIDECHATBTN_B__69_2_OFFSET))(this, dataList);
		}

		::System::Void _UpdateChatPage_b__76_0(::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E87F7C93CB0CC57E*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER__UPDATECHATPAGE_B__76_0_OFFSET))(this, dataList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
