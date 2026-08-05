#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_1A39E1B51756BF41;
class Class_2_4D6258F71387F95D;
class Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846;
class MonoUIBtnScaleAnim;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ENABLESELECTSCALEANIM_OFFSET UNITYSDK_OFFSET(0x1889AFF0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x18898CC0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1889AC80)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETSUITID_OFFSET UNITYSDK_OFFSET(0x1889ACD0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_HIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x18899820)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18898960)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x18899880)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18898D90)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1889AE70)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18899C90)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x1889A6D0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18899E10)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18899D30)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18898820)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18898D20)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x18898E20)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1889A060)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_1_OFFSET UNITYSDK_OFFSET(0x1889B460)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_OFFSET UNITYSDK_OFFSET(0x18899730)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x188997D0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x188992E0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x1889A370)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETENABLEEMPTYCLICK_OFFSET UNITYSDK_OFFSET(0x1889B2B0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x18899FC0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x1889AC30)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x1889AAC0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x18899380)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSELECTOBJALPHA_OFFSET UNITYSDK_OFFSET(0x1889AD20)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSHOWSELECT_OFFSET UNITYSDK_OFFSET(0x1889AE20)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSUITID_OFFSET UNITYSDK_OFFSET(0x1889A010)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSUITITEMINFO_OFFSET UNITYSDK_OFFSET(0x1889A720)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_TRYCLEARREDDOT_OFFSET UNITYSDK_OFFSET(0x18899920)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x1889A190)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1889B4C0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER__REFRESHVIEW_B__22_0_OFFSET UNITYSDK_OFFSET(0x1889B4D0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1889B4F0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1889B500)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1889B590)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x1889B620)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1889B6B0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1889B750)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1889B7E0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1889B870)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x1889B900)

namespace MoleMole
{
	inline static constexpr unsigned int UISuitIconBtnWidgetController_TypeDefinitionIndex = 65199;

	class UISuitIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::Share::ENotificationBadgeType _badgeType; // 0x0
		// static const ::System::Single NORMAL_ALPHA; // 0x0
		// static const ::System::Single TRANSPARENT_ALPHA; // 0x0
		::Class_2_4D6258F71387F95D* _view; // 0x2F0
		::Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846* _suitViewData; // 0x2F8
		::System::Int32 _suitID; // 0x300
		::System::Int32 _index; // 0x304
		::System::Action_1<::System::Int32>* _itemClickedAct; // 0x308
		::System::Boolean _enableEmptyClick; // 0x310
		::System::Boolean _isShowSelect; // 0x311
		::MoleMole::UIGeneralNewHintWidgetController* _newHintWidgetController; // 0x318
		::MonoUIBtnScaleAnim* _selectScaleComp; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIREUSE_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846* suitViewData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, suitViewData);
		}

		::System::Void SetSuitItemInfo(::Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846* suitViewData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5E8E56AB26D3F10E_Class_1_AA3AA9145D9EE846*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSUITITEMINFO_OFFSET))(this, suitViewData);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetItemClickedAct(::System::Action_1<::System::Int32>* itemClickedAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickedAct);
		}

		::System::Void SetEmptyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETINDEX_OFFSET))(this);
		}

		::System::Void SetSuitID(::System::Int32 suitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSUITID_OFFSET))(this, suitID);
		}

		::System::Int32 GetSuitID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETSUITID_OFFSET))(this);
		}

		::System::Void ResetSelectObjAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETSELECTOBJALPHA_OFFSET))(this);
		}

		::System::Void SetSelectObjAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSELECTOBJALPHA_OFFSET))(this, alpha);
		}

		::System::Void SetShowSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSHOWSELECT_OFFSET))(this, value);
		}

		::System::Void SetSelected(::System::Boolean isselected, ::System::Boolean disableAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, isselected, disableAnimation);
		}

		::MoleMole::MonoGamepadSelectable* GetGamepadSelectable()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET))(this);
		}

		::System::Void OnFocusStateChanged(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, isFocus);
		}

		::System::Void SetEnableEmptyClick(::System::Boolean enable, ::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SETENABLEEMPTYCLICK_OFFSET))(this, enable, onClickEmpty);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SampleAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET))(this);
		}

		::System::Void ResetImageControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_OFFSET))(this);
		}

		::System::Void ResetImageControl_1(::Class_2_1A39E1B51756BF41* controlImage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_RESETIMAGECONTROL_1_OFFSET))(this, controlImage);
		}

		::System::Void EnableSelectScaleAnim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_ENABLESELECTSCALEANIM_OFFSET))(this, enable);
		}

		::System::Void UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void HideRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_HIDEREDDOT_OFFSET))(this);
		}

		::System::Void TryClearRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER_TRYCLEARREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshView_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER__REFRESHVIEW_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET))(this);
		}
	};
}
