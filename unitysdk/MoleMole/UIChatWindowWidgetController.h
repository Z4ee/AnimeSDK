#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5BD89F1F83F7650C.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIChatWindowWidgetController_DataRefreshType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/DateTime.h"

class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_1_BE6BF7909AD9D940;
class Class_1_D7C05CE3854E5916;
class Class_2_01A9580380D362EF;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79AE422BA06F6D26_148;
class Class_2_E23E4CB2769CC93F;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendChatEmojiWidgetController; }
namespace MoleMole { class UIFriendChatPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T> class Class_1_8914B0C55B12E9CE;

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_BUILDCHATMSGITEM_OFFSET UNITYSDK_OFFSET(0x19A98190)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x19A9A7A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKCIRCLEALLOWCOMM_OFFSET UNITYSDK_OFFSET(0x19A997C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKFRIENDALLOWCOMM_OFFSET UNITYSDK_OFFSET(0x19A996D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKINSERTDETECTOR_OFFSET UNITYSDK_OFFSET(0x19A99300)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKSENDMOVEVALID_OFFSET UNITYSDK_OFFSET(0x19A995D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHOPNOWMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A98670)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CLEARALLMSGITEMS_OFFSET UNITYSDK_OFFSET(0x19A95C90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATHOLOBOSS_OFFSET UNITYSDK_OFFSET(0x19A96E90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATLOADING_OFFSET UNITYSDK_OFFSET(0x19A96DE0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATMESSAGE_OFFSET UNITYSDK_OFFSET(0x19A96BD0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHAREINTERKNOT_OFFSET UNITYSDK_OFFSET(0x19A96F40)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHARETEAM_OFFSET UNITYSDK_OFFSET(0x19A96D30)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSPECIAL_OFFSET UNITYSDK_OFFSET(0x19A96C80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATZENKOVRECORD_OFFSET UNITYSDK_OFFSET(0x19A96FF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FINISHSCROLL_OFFSET UNITYSDK_OFFSET(0x19A9C120)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FORCESCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0x19A97740)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x19A96890)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0x19A99E00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITCIRCLEINFO_OFFSET UNITYSDK_OFFSET(0x19A9A140)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0x19A96350)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITFRIENDINFO_OFFSET UNITYSDK_OFFSET(0x19A95AA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0x19A936C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITSCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0x19A99340)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19A93BB0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISSENDTEXTVALID_OFFSET UNITYSDK_OFFSET(0x19A99870)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISTIMEINSAMEDAY_OFFSET UNITYSDK_OFFSET(0x19A98870)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_LOOPADD_OFFSET UNITYSDK_OFFSET(0x19A98440)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKCHILDITEM_OFFSET UNITYSDK_OFFSET(0x19A96470)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKEMOJIBTN_OFFSET UNITYSDK_OFFSET(0x19A999A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSCROLLTOBOTTOMBTN_OFFSET UNITYSDK_OFFSET(0x19A976C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDBTN_OFFSET UNITYSDK_OFFSET(0x19A952B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEEMOJI_OFFSET UNITYSDK_OFFSET(0x19A99B80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEMSG_OFFSET UNITYSDK_OFFSET(0x19A99540)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDEMOJI_OFFSET UNITYSDK_OFFSET(0x19A99A90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDMSG_OFFSET UNITYSDK_OFFSET(0x19A994B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A950E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONDESELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x19A97930)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19A95170)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x19A97C20)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLLEND_OFFSET UNITYSDK_OFFSET(0x19A9BFC0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x19A9BCC0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTEMOJI_OFFSET UNITYSDK_OFFSET(0x19A99A10)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x19A977A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A94E00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x19A94820)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHTAB_OFFSET UNITYSDK_OFFSET(0x19A98820)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x19A97B40)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19A94F60)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A95320)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A931D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUPDATECIRCLEHISTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0x19A9A9C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYSWITCHCHATITEMANIM_OFFSET UNITYSDK_OFFSET(0x19A962B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x19A964F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RECOVERLASTINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x19A98AD0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHALLCIRCLEMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A9A830)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLEHISTORYMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A9AB90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLENEWMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A9B1C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESETCIRCLEPARAM_OFFSET UNITYSDK_OFFSET(0x19A9A250)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x19A99F40)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESTORELASTINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x19A95670)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19A94EF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0x19A99E10)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_1_OFFSET UNITYSDK_OFFSET(0x19A99E20)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_OFFSET UNITYSDK_OFFSET(0x19A95570)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCIRCLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19A9A6F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x19A9C0A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCIRCLECONTENT_OFFSET UNITYSDK_OFFSET(0x19A9A2A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0x19A95BE0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x19A98F10)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STAYNOWPOSITION_OFFSET UNITYSDK_OFFSET(0x19A9B990)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STOPVOICE_OFFSET UNITYSDK_OFFSET(0x19A94FB0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCIRCLESHOWTITLESTATE_OFFSET UNITYSDK_OFFSET(0x19A9A390)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCONTENTPANELSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19A95D90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHFRIENDPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x19A948D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHWINDOWUI_OFFSET UNITYSDK_OFFSET(0x19A95E00)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_CIRCLE_OFFSET UNITYSDK_OFFSET(0x19A99FA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_FRIEND_OFFSET UNITYSDK_OFFSET(0x19A95910)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLEHISTORYMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A97E40)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLENEWMESSAGES_OFFSET UNITYSDK_OFFSET(0x19A9B140)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLE_OFFSET UNITYSDK_OFFSET(0x19A970F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECURRENTCHATMESSAGEANDSHOW_OFFSET UNITYSDK_OFFSET(0x19A95970)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATEMAXINPUTHINTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19A97D70)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATESCROLLTOBOTTOMBTN_OFFSET UNITYSDK_OFFSET(0x19A973C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19A970A0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9C220)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__INITEMPTYCIRCLECONTENT_B__80_0_OFFSET UNITYSDK_OFFSET(0x19A9CA80)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__85_0_OFFSET UNITYSDK_OFFSET(0x19A9CB90)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__85_3_OFFSET UNITYSDK_OFFSET(0x19A9CEF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_G__SENDMSG_85_1_OFFSET UNITYSDK_OFFSET(0x19A9CBA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__49_0_OFFSET UNITYSDK_OFFSET(0x19A9C650)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__49_3_OFFSET UNITYSDK_OFFSET(0x19A9C920)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_G__SENDMSG_49_1_OFFSET UNITYSDK_OFFSET(0x19A9C660)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x19A9C370)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x19A9C460)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A9D050)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19A9D0E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A9D110)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19A9D1B0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A9D1C0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A9D250)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_TypeDefinitionIndex = 72751;

	class UIChatWindowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 _MAX_SCROLLVIEW_ITEM_COUNT_WHEN_FULLSCREEN = 0xF; // 0x0
		// static const ::System::Int32 MAX_RETAIN_COUNT = 0x14; // 0x0
		::Class_2_79AE422BA06F6D26_148* _view; // 0x2C0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C8
		::MoleMole::UIFriendChatEmojiWidgetController* _emojiWidget; // 0x2D0
		::Enum_3_5BD89F1F83F7650C _currChatType; // 0x2D8
		::Class_1_BE6BF7909AD9D940* _currFriendInfo; // 0x2E0
		::Class_1_8914B0C55B12E9CE<::Class_1_9EDE5D0623B668B8*>* scrollViewContextList; // 0x2E8
		::System::Boolean _IsShowingEmptyCircleContent_k__BackingField; // 0x2F0
		::Class_1_D7C05CE3854E5916* handler; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _inputTextCacheDic; // 0x300
		::System::Int32 maxLength; // 0x308
		::System::Boolean _allowSwitchPlatform; // 0x30C
		::System::Boolean _canSwitchPlatform; // 0x30D
		::MoleMole::UIFriendChatPopWindowController* _parentCtrl; // 0x310
		::System::Int32 MAX_SHOW_COUNT; // 0x318
		::System::Boolean _isOpenSync; // 0x31C
		::MoleMole::UIChatWindowWidgetController_DataRefreshType _refreshType; // 0x320
		::System::Single _lastExecute; // 0x324
		::Class_2_01A9580380D362EF* _circleModel; // 0x328
		::Class_2_E23E4CB2769CC93F* _currCircleDataExt; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _circleInputTextCacheDic; // 0x338
		::System::Int32 _waitForRequestingHistory; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowChat(::Class_1_BE6BF7909AD9D940* friendInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_OFFSET))(this, friendInfo);
		}

		::System::Void ShowEmptyContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET))(this);
		}

		::System::Void SwitchContentPanelShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCONTENTPANELSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void PlaySwitchChatItemAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYSWITCHCHATITEMANIM_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickChildItem(::Class_1_9EDE5D0623B668B8* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKCHILDITEM_OFFSET))(this, item);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatMessage(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATMESSAGE_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatSpecial(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSPECIAL_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatShareTeam(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHARETEAM_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatLoading(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATLOADING_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatHoloBoss(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATHOLOBOSS_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatShareInterknot(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATSHAREINTERKNOT_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateChatZenkovRecord(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CREATECHATZENKOVRECORD_OFFSET))(this, arg);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateScrollToBottomBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATESCROLLTOBOTTOMBTN_OFFSET))(this);
		}

		::System::Void OnClickScrollToBottomBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSCROLLTOBOTTOMBTN_OFFSET))(this);
		}

		::System::Void OnSelectInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTINPUTFIELD_OFFSET))(this);
		}

		::System::Void OnDeselectInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONDESELECTINPUTFIELD_OFFSET))(this);
		}

		::System::Char OnTextValidateInput(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::Void OnInputChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET))(this, input);
		}

		::System::Void UpdateMaxInputHintShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATEMAXINPUTHINTSHOWSTATE_OFFSET))(this);
		}

		::System::Void InitFriendInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITFRIENDINFO_OFFSET))(this);
		}

		::System::Void UpdateChatWindowInfo_Friend(::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_FRIEND_OFFSET))(this, isSelectingSameChatItem);
		}

		::System::Void SwitchFriendPlatformName(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHFRIENDPLATFORMNAME_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void UpdateCurrentChatMessageAndShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECURRENTCHATMESSAGEANDSHOW_OFFSET))(this);
		}

		::System::Void UpdateCircleHistoryMessages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* messageList, ::System::Int32 readLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLEHISTORYMESSAGES_OFFSET))(this, messageList, readLen);
		}

		::System::Void LoopAdd(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* messageList, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_LOOPADD_OFFSET))(this, messageList, start, end);
		}

		::System::Int32 ChopNowMessages(::System::Int32 newLen, ::System::Int32& curEndIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHOPNOWMESSAGES_OFFSET))(this, newLen, curEndIndex);
		}

		::System::Void OnSwitchTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSWITCHTAB_OFFSET))(this);
		}

		::System::Void RestoreLastInputText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESTORELASTINPUTTEXT_OFFSET))(this);
		}

		::Class_1_9EDE5D0623B668B8* BuildChatMsgItem(::Class_1_B1CC8F53861C28C2* curMsgData, ::System::Int64 lastMsgTime)
		{
			return ((::Class_1_9EDE5D0623B668B8*(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_BUILDCHATMSGITEM_OFFSET))(this, curMsgData, lastMsgTime);
		}

		::System::Void SwitchWindowUI(::System::Boolean isShow, ::System::Boolean onlySwitchContentRootDisplay, ::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHWINDOWUI_OFFSET))(this, isShow, onlySwitchContentRootDisplay, isSelectingSameChatItem);
		}

		::System::String* RecoverLastInputText(::Enum_3_5BD89F1F83F7650C currChatType)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_5BD89F1F83F7650C))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RECOVERLASTINPUTTEXT_OFFSET))(this, currChatType);
		}

		::System::Void ShowMessage(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWMESSAGE_OFFSET))(this, msgList);
		}

		::System::Void ClearAllMsgItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CLEARALLMSGITEMS_OFFSET))(this);
		}

		::System::Void CheckInsertDetector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKINSERTDETECTOR_OFFSET))(this);
		}

		::System::Boolean IsTimeInSameDay(::System::DateTime lastDateTime, ::System::DateTime currDateTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISTIMEINSAMEDAY_OFFSET))(this, lastDateTime, currDateTime);
		}

		::System::Void OnClickSendBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDBTN_OFFSET))(this);
		}

		::System::Void OnClickSendFriendMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDMSG_OFFSET))(this);
		}

		::System::Void CheckSendMoveValid(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKSENDMOVEVALID_OFFSET))(this, onCallback);
		}

		::System::Void CheckFriendAllowComm(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKFRIENDALLOWCOMM_OFFSET))(this, onCallback);
		}

		::System::Boolean IsSendTextValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ISSENDTEXTVALID_OFFSET))(this);
		}

		::System::Void OnClickEmojiBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKEMOJIBTN_OFFSET))(this);
		}

		::System::Void OnSelectEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSELECTEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Void OnClickSendFriendEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDFRIENDEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Boolean get_IsShowingEmptyCircleContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_GET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void set_IsShowingEmptyCircleContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SET_ISSHOWINGEMPTYCIRCLECONTENT_OFFSET))(this, value);
		}

		::System::Void SetPlatformBtnShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void ShowChat_1(::Class_2_E23E4CB2769CC93F* circleDataExt, ::System::Action* onReady)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E23E4CB2769CC93F*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCHAT_1_OFFSET))(this, circleDataExt, onReady);
		}

		::System::Void InitEmptyCircleContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void ResetCircleParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESETCIRCLEPARAM_OFFSET))(this);
		}

		::System::Void ShowEmptyCircleContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEMPTYCIRCLECONTENT_OFFSET))(this);
		}

		::System::Void InitCircleInfo(::System::Action* onReady)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITCIRCLEINFO_OFFSET))(this, onReady);
		}

		::System::Void UpdateChatWindowInfo_Circle(::System::Boolean isSelectingSameChatItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECHATWINDOWINFO_CIRCLE_OFFSET))(this, isSelectingSameChatItem);
		}

		::System::Void OnClickSendCircleMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEMSG_OFFSET))(this);
		}

		::System::Void OnClickSendCircleEmoji(::System::Int32 emojiKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONCLICKSENDCIRCLEEMOJI_OFFSET))(this, emojiKey);
		}

		::System::Void CheckCircleAllowComm(::System::Action_1<::System::Boolean>* onCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CHECKCIRCLEALLOWCOMM_OFFSET))(this, onCallback);
		}

		::System::Void SwitchCircleShowTitleState(::System::Boolean willShowTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SWITCHCIRCLESHOWTITLESTATE_OFFSET))(this, willShowTitle);
		}

		::System::Void ShowCircleMessage(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWCIRCLEMESSAGE_OFFSET))(this, msgList);
		}

		::System::Void OnUpdateCircleHistoryMessage(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONUPDATECIRCLEHISTORYMESSAGE_OFFSET))(this, args);
		}

		::System::Void UpdateCircleNewMessages(::System::UInt32 circleUId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLENEWMESSAGES_OFFSET))(this, circleUId);
		}

		::System::Void UpdateCircle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_UPDATECIRCLE_OFFSET))(this);
		}

		::System::Boolean CanProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_CANPROCESS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void RefreshCircleHistoryMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLEHISTORYMESSAGES_OFFSET))(this);
		}

		::System::Void RefreshCircleNewMessages(::System::UInt32 circleUId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHCIRCLENEWMESSAGES_OFFSET))(this, circleUId);
		}

		::System::Void InitScrollToBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_INITSCROLLTOBOTTOM_OFFSET))(this);
		}

		::System::Void StayNowPosition(::System::Int32 startIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STAYNOWPOSITION_OFFSET))(this, startIdx);
		}

		::System::Void ForceScrollToBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FORCESCROLLTOBOTTOM_OFFSET))(this);
		}

		::System::Void RefreshAllCircleMessages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_REFRESHALLCIRCLEMESSAGES_OFFSET))(this, msgList);
		}

		::System::Void OnScroll(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLL_OFFSET))(this, moveContext, v);
		}

		::System::Void OnScrollEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_ONSCROLLEND_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ShowEffect()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void FinishScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_FINISHSCROLL_OFFSET))(this);
		}

		::System::Void PlayVoice(::Class_1_9EDE5D0623B668B8* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_PLAYVOICE_OFFSET))(this, item);
		}

		::System::Void StopVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER_STOPVOICE_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__3_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this, args);
		}

		::System::Void _OnClickSendFriendMsg_b__49_0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__49_0_OFFSET))(this, isAllow);
		}

		::System::Void _OnClickSendFriendMsg_g__SendMsg_49_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_G__SENDMSG_49_1_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__49_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDFRIENDMSG_B__49_3_OFFSET))(this);
		}

		::System::Void _InitEmptyCircleContent_b__80_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__INITEMPTYCIRCLECONTENT_B__80_0_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__85_0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__85_0_OFFSET))(this, isAllow);
		}

		::System::Void _OnClickSendCircleMsg_g__SendMsg_85_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_G__SENDMSG_85_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__85_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__ONCLICKSENDCIRCLEMSG_B__85_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
