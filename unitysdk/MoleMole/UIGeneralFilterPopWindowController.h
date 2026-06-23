#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_532;
class Class_1_709BB9A644D884B9;
class Class_1_754E7605A8C1951A;
class Class_1_90858D70BEDD91CA;
class Class_2_79AE422BA06F6D26_242;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIForceSetOwnToggleWidgetController; }
namespace MoleMole { class UIGeneralFilterToggleWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x175E0A50)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETADVANCEDOPTIONMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x175E1050)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETFILTERITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x175E15D0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETFILTEROPTIONSTATE_OFFSET UNITYSDK_OFFSET(0x175E12E0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETOWNFILTERGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x175DF1B0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x175DD500)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x175DD4F0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0x175E0870)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x175DD5C0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x175E0DF0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKPOPUPBTN_OFFSET UNITYSDK_OFFSET(0x175E0D60)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKPOPUP_OFFSET UNITYSDK_OFFSET(0x175E0C80)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKRESET_OFFSET UNITYSDK_OFFSET(0x175E0B50)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x175E1A70)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175DFB30)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONGROUPITEMCLICK_OFFSET UNITYSDK_OFFSET(0x175E0E50)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x175DFBC0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x175DFD90)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x175DDB50)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x175E1900)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONSORTINVERSECLICK_OFFSET UNITYSDK_OFFSET(0x175E1840)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONSORTOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x175E1790)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175DFD10)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175DD510)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175DDCC0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_REFRESHADVANCEDMATCHITEMSLANGUAGECONTENT_OFFSET UNITYSDK_OFFSET(0x175DDBA0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x175DF4C0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x175DFF50)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SETFILTERSTATEANDREFRESH_OFFSET UNITYSDK_OFFSET(0x175E1110)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0x175E0D00)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E1C60)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175E1BD0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__HIDEPOPUP_B__34_0_OFFSET UNITYSDK_OFFSET(0x175E1E00)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x175E1DC0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_1_OFFSET UNITYSDK_OFFSET(0x175E1DD0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_2_OFFSET UNITYSDK_OFFSET(0x175E1DE0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_3_OFFSET UNITYSDK_OFFSET(0x175E1DF0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175E1EA0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x175E1F30)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x175E1FC0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175E1FF0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175E2000)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175E2010)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopWindowController_TypeDefinitionIndex = 74841;

	class UIGeneralFilterPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_RESET_TEXT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBF0);
		}
		static ::System::String** StaticGet_CONFIRM_TEXT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_advancedMatchItems()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3CC00);
		}
		// static const ::System::String* BtnsPopupAniFadeOut; // 0x0
		::Class_2_79AE422BA06F6D26_242* _view; // 0x318
		::Class_0_16E4307DCC419505_532* _filterInstance; // 0x320
		::System::Action* _onChanged; // 0x328
		::System::Action_1<::System::Int32>* _onDeleteClick; // 0x330
		::System::Collections::Generic::List_1<::Class_1_90858D70BEDD91CA*>* _filterGroups; // 0x338
		::Class_1_709BB9A644D884B9* _sortWidgetData; // 0x340
		::Class_1_754E7605A8C1951A* _sortOptionsDropDown; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralFilterToggleWidgetController*>* _generalToggleWidget; // 0x350
		::MoleMole::UIForceSetOwnToggleWidgetController* _forceSetOwnToggle; // 0x358
		::System::UInt32 _splitScreenHandler; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnLanguageChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONLANGUAGECHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshAdvancedMatchItemsLanguageContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_REFRESHADVANCEDMATCHITEMSLANGUAGECONTENT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 GetOwnFilterGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETOWNFILTERGROUPINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ScrollToTarget(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SCROLLTOTARGET_OFFSET))(this, rectTransform);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_CREATEITEM_OFFSET))(this, arg);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKRESET_OFFSET))(this);
		}

		::System::Void OnClickPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKPOPUP_OFFSET))(this);
		}

		::System::Void OnClickPopupBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLICKPOPUPBTN_OFFSET))(this, index);
		}

		::System::Void ShowPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SHOWPOPUP_OFFSET))(this);
		}

		::System::Void HidePopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_HIDEPOPUP_OFFSET))(this);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCANCEL_OFFSET))(this);
		}

		::System::Void OnGroupItemClick(::Enum_3_9BD6D4E5A68CB9EF type, ::System::Int32 groupIdx, ::System::Int32 dataIdx)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONGROUPITEMCLICK_OFFSET))(this, type, groupIdx, dataIdx);
		}

		::System::Int32 GetAdvancedOptionMatchCount(::System::Int32 dataIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETADVANCEDOPTIONMATCHCOUNT_OFFSET))(this, dataIdx);
		}

		::System::Void SetFilterStateAndRefresh(::System::Int32 groupIdx, ::System::Int32 dataIdx, ::System::Boolean state, ::Enum_3_9BD6D4E5A68CB9EF type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::Enum_3_9BD6D4E5A68CB9EF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_SETFILTERSTATEANDREFRESH_OFFSET))(this, groupIdx, dataIdx, state, type);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::Boolean> GetFilterOptionState(::System::Int32 groupIdx, ::System::Int32 dataIdx, ::Enum_3_9BD6D4E5A68CB9EF type)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_9BD6D4E5A68CB9EF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETFILTEROPTIONSTATE_OFFSET))(this, groupIdx, dataIdx, type);
		}

		::System::Int32 GetFilterItemCount(::System::Int32 groupIdx, ::System::Int32 filterIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_GETFILTERITEMCOUNT_OFFSET))(this, groupIdx, filterIdx);
		}

		::System::Void OnSortOptionSelected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONSORTOPTIONSELECTED_OFFSET))(this, index);
		}

		::System::Void OnSortInverseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONSORTINVERSECLICK_OFFSET))(this);
		}

		::System::Void OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void _InitView_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_0_OFFSET))(this);
		}

		::System::Void _InitView_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_1_OFFSET))(this);
		}

		::System::Void _InitView_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_2_OFFSET))(this);
		}

		::System::Void _InitView_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__INITVIEW_B__26_3_OFFSET))(this);
		}

		::System::Void _HidePopup_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER__HIDEPOPUP_B__34_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
