#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIActivePropsPopWindowController___c__DisplayClass44_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_37531022BA965541;
class Class_1_C5FDB00B12827EE9;
class Class_2_208CC9941471731A_881;
class Class_2_46343FB95C1AD4F6_3;
class Class_2_4DA7BFFCF976F7D7;
class Class_2_C2B4B123B5A9B78A;
class Class_2_DB6917E35D27A2CA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivePropsBangbooWidgetController; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_2_A67757DE8DF470D1;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x1587CB90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKBUDDYCANBESELECTED_OFFSET UNITYSDK_OFFSET(0x1587B230)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKCUSTOMSELECTSTR_OFFSET UNITYSDK_OFFSET(0x1587B320)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CLOSESKILLDETAIL_OFFSET UNITYSDK_OFFSET(0x1587BC50)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOCLOSE_OFFSET UNITYSDK_OFFSET(0x15880260)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOOKCLOSE_OFFSET UNITYSDK_OFFSET(0x1587F990)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYID_OFFSET UNITYSDK_OFFSET(0x15881EE0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYINDEX_OFFSET UNITYSDK_OFFSET(0x1587FE30)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYLISTBYMODE_OFFSET UNITYSDK_OFFSET(0x1587D740)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETMULTISELECTEMPTYPOS_OFFSET UNITYSDK_OFFSET(0x15881000)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_CURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15882D80)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1587BBD0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1587BBC0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x1587C540)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITSELECTBYBUDDYID_OFFSET UNITYSDK_OFFSET(0x1587EFF0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISCHANGE_OFFSET UNITYSDK_OFFSET(0x15880190)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISGACHAOPTIONALITEMSELECTED_OFFSET UNITYSDK_OFFSET(0x1587AFB0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINGACHAOPTIONALSELECTMODE_OFFSET UNITYSDK_OFFSET(0x15879770)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x15879710)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONBUDDYMULTICLICK_OFFSET UNITYSDK_OFFSET(0x15881080)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1587D160)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONFAVORITEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1587FA30)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15880720)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x158808E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1587F0F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x158805A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1587BBE0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONOK_OFFSET UNITYSDK_OFFSET(0x1587F6A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1587F200)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1587F2E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1587BDF0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1587D1F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_OPENSKILLDETAIL_OFFSET UNITYSDK_OFFSET(0x15882810)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x1587F4A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHARROW_OFFSET UNITYSDK_OFFSET(0x15882D10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHBUDDYRT_OFFSET UNITYSDK_OFFSET(0x15881F60)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHGOBTNTEXT_OFFSET UNITYSDK_OFFSET(0x158815C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHSELECTVIEW_OFFSET UNITYSDK_OFFSET(0x15880D10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1587E010)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_RELEASEUIMODELS_OFFSET UNITYSDK_OFFSET(0x1587F1A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTIDXFORSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x15880BC0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x15881910)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SENDFAVORITECSREQ_OFFSET UNITYSDK_OFFSET(0x1587FF20)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETINITMULTISELECT_OFFSET UNITYSDK_OFFSET(0x1587E800)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOKCB_OFFSET UNITYSDK_OFFSET(0x15880500)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOPEN_OFFSET UNITYSDK_OFFSET(0x15880550)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETUPBUDDYATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x158822D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SET_CURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15882D90)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDHANDLEOPTIONALUPITEMNEW_OFFSET UNITYSDK_OFFSET(0x1587AE00)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDSHOWOPTIONALUPITEMNEW_OFFSET UNITYSDK_OFFSET(0x1587F4F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_STABLESORTCOMPARE_OFFSET UNITYSDK_OFFSET(0x15882DA0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_TRIGGERCONFIRMAUDIO_OFFSET UNITYSDK_OFFSET(0x15881B70)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x158825D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15883090)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CLOSESKILLDETAIL_B__50_0_OFFSET UNITYSDK_OFFSET(0x15883540)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15882EF0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_0_OFFSET UNITYSDK_OFFSET(0x15883480)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_1_OFFSET UNITYSDK_OFFSET(0x15883280)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_2_OFFSET UNITYSDK_OFFSET(0x158833C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOOKCLOSE_B__28_0_OFFSET UNITYSDK_OFFSET(0x158830C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__GETBUDDYLISTBYMODE_G__ADDBUDDY_44_0_OFFSET UNITYSDK_OFFSET(0x15881D70)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__ONUIOPEN_B__9_0_OFFSET UNITYSDK_OFFSET(0x158830B0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__REFRESHBUDDYRT_B__54_0_OFFSET UNITYSDK_OFFSET(0x158835D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15883610)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x158836A0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x15883730)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x158837C0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15883850)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15883880)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15883910)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158839D0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158839E0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158839F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController_TypeDefinitionIndex = 71973;

	class UIActivePropsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_IsMultiSelect()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11BB0);
		}
		static ::System::Int32* StaticGet_MIN_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIActivePropsPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11BB4);
		}
		// static const ::System::String* FavoriteBangBooRecordKey; // 0x0
		// static const ::System::String* detailFadeIn; // 0x0
		// static const ::System::String* detailFadeOut; // 0x0
		// static const ::System::String* detailSwitch; // 0x0
		// static const ::System::String* selectFadeIn; // 0x0
		// static const ::System::String* selectFadeOut; // 0x0
		::System::Boolean isShowedSkillDesc; // 0x310
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _curPropertyItemViews; // 0x318
		::System::Collections::Generic::List_1<::Class_1_37531022BA965541*>* _skills; // 0x320
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_881*>* _iniItemTemplates; // 0x328
		::System::Collections::Generic::HashSet_1<::System::Int32>* _banGroups; // 0x330
		::System::Int32 _curSelectId; // 0x338
		::System::Action_1<::System::Int32>* okAction; // 0x340
		::Class_2_46343FB95C1AD4F6_3* _view; // 0x348
		::MoleMole::UIActivePropsBangbooWidgetController* _lastSelectItemCtrl; // 0x350
		::System::Collections::Generic::List_1<::Class_2_4DA7BFFCF976F7D7*>* _battleBuddyDatas; // 0x358
		::System::Collections::Generic::List_1<::Class_2_4DA7BFFCF976F7D7*>* _sortedBattleBuddyDatas; // 0x360
		::Class_2_C2B4B123B5A9B78A* _buddyUnit; // 0x368
		::Class_2_A67757DE8DF470D1<::Class_2_4DA7BFFCF976F7D7*>* _sorter; // 0x370
		::UnityEngine::Animation* detailAnimation; // 0x378
		::System::Int32 _currentSelectIndex_k__BackingField; // 0x380
		::MoleMole::UIActivePropsWindowContext* _context; // 0x388
		::MoleMole::MonoGamepadNavigatableList* buddyGamePadList; // 0x390
		::Il2CppArray<::System::Int32>* multiSelectedBuddys; // 0x398
		::System::Int32 _selectedBuddyID; // 0x3A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _originalIndexMap; // 0x3A8
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _cachedTopBuddyItems; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Boolean IsInPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINPREVIEWMODE_OFFSET))(this);
		}

		::System::Boolean IsInGachaOptionalSelectMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISINGACHAOPTIONALSELECTMODE_OFFSET))(this);
		}

		::System::Boolean IsGachaOptionalItemSelected(::System::Int32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISGACHAOPTIONALITEMSELECTED_OFFSET))(this, uniqueID);
		}

		::System::Boolean ShouldShowOptionalUpItemNew(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDSHOWOPTIONALUPITEMNEW_OFFSET))(this, itemID);
		}

		::System::Boolean ShouldHandleOptionalUpItemNew(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SHOULDHANDLEOPTIONALUPITEMNEW_OFFSET))(this, itemID);
		}

		::System::Boolean CheckBuddyCanBeSelected(::System::Int32 buddyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKBUDDYCANBESELECTED_OFFSET))(this, buddyID);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::String*> CheckCustomSelectStr(::System::Int32 buddyID)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CHECKCUSTOMSELECTSTR_OFFSET))(this, buddyID);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnOk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONOK_OFFSET))(this);
		}

		::System::Void OnFavoriteBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONFAVORITEBTNCLICKED_OFFSET))(this);
		}

		::System::Void SendFavoriteCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SENDFAVORITECSREQ_OFFSET))(this);
		}

		::System::Void DoOKClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOOKCLOSE_OFFSET))(this);
		}

		::System::Boolean IsChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ISCHANGE_OFFSET))(this);
		}

		::System::Void DoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_DOCLOSE_OFFSET))(this);
		}

		::System::Void SetOkCB(::System::Action_1<::System::Int32>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOKCB_OFFSET))(this, cb);
		}

		::System::Void SetOpen(::System::Int32 curSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETOPEN_OFFSET))(this, curSelect);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Int32 GetBuddyIndex(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYINDEX_OFFSET))(this, uniqueID);
		}

		::System::Void InitSelectByBuddyID(::System::Int32 uniqueID, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_INITSELECTBYBUDDYID_OFFSET))(this, uniqueID, isInit);
		}

		::System::Void SelectIdxForScrollView(::System::Int32 idx, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTIDXFORSCROLLVIEW_OFFSET))(this, idx, isInit);
		}

		::System::Void SetInitMultiSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETINITMULTISELECT_OFFSET))(this);
		}

		::System::Int32 GetMultiSelectEmptyPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETMULTISELECTEMPTYPOS_OFFSET))(this);
		}

		::System::Void OnBuddyMultiClick(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_ONBUDDYMULTICLICK_OFFSET))(this, arg);
		}

		::System::Void SelectItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, idx);
		}

		::System::Void TriggerConfirmAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_TRIGGERCONFIRMAUDIO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_4DA7BFFCF976F7D7*>* GetBuddyListByMode()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_4DA7BFFCF976F7D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYLISTBYMODE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isInit, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, isInit, selectIndex);
		}

		::System::Int32 GetBuddyID(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GETBUDDYID_OFFSET))(this, uniqueID);
		}

		::System::Void RefreshSelectView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHSELECTVIEW_OFFSET))(this);
		}

		::System::Void RefreshGoBtnText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHGOBTNTEXT_OFFSET))(this);
		}

		::System::Void OpenSkillDetail(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_OPENSKILLDETAIL_OFFSET))(this, index, force);
		}

		::System::Void CloseSkillDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_CLOSESKILLDETAIL_OFFSET))(this);
		}

		::System::Void SetupBuddyAttributeInfo(::System::Int32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SETUPBUDDYATTRIBUTEINFO_OFFSET))(this, uniqueID);
		}

		::System::Void UpdateFavoriteBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_UPDATEFAVORITEBTNSTATE_OFFSET))(this);
		}

		::System::Void RefreshArrow(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHARROW_OFFSET))(this, moveContext, v);
		}

		::System::Void RefreshBuddyRT(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_REFRESHBUDDYRT_OFFSET))(this, buddyID);
		}

		::System::Void ReleaseUIModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_RELEASEUIMODELS_OFFSET))(this);
		}

		::System::Int32 get_currentSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_GET_CURRENTSELECTINDEX_OFFSET))(this);
		}

		::System::Void set_currentSelectIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_SET_CURRENTSELECTINDEX_OFFSET))(this, value);
		}

		::System::Int32 StableSortCompare(::Class_2_DB6917E35D27A2CA* a, ::Class_2_DB6917E35D27A2CA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_DB6917E35D27A2CA*, ::Class_2_DB6917E35D27A2CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER_STABLESORTCOMPARE_OFFSET))(this, a, b);
		}

		::System::Void _OnUIOpen_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__ONUIOPEN_B__9_0_OFFSET))(this);
		}

		::System::Void _DoOKClose_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOOKCLOSE_B__28_0_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_1_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_2_OFFSET))(this);
		}

		::System::Void _DoClose_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__DOCLOSE_B__30_0_OFFSET))(this);
		}

		::System::Void _GetBuddyListByMode_g__AddBuddy_44_0(::Class_2_4DA7BFFCF976F7D7* buddy, ::MoleMole::UIActivePropsPopWindowController___c__DisplayClass44_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4DA7BFFCF976F7D7*, ::MoleMole::UIActivePropsPopWindowController___c__DisplayClass44_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__GETBUDDYLISTBYMODE_G__ADDBUDDY_44_0_OFFSET))(this, buddy, a2);
		}

		::System::Void _CloseSkillDetail_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__CLOSESKILLDETAIL_B__50_0_OFFSET))(this);
		}

		::System::Void _RefreshBuddyRT_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER__REFRESHBUDDYRT_B__54_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
