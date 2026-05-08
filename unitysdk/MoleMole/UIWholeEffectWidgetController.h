#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWholeEffectWidgetController_FoldType.h"
#include "unitysdk/MoleMole/UIWholeEffectWidgetController_SortType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_2_79F6D62CE30E3F8E_23;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace MoleMole { class UIHollowDamnationWidgetController; }
namespace MoleMole { class UIHollowHotEffectInfoWidgetWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x10A125F0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CLEARCARDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x10A15C40)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CREATESORT_OFFSET UNITYSDK_OFFSET(0x10A14140)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x10A13BC0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x10A15EE0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCARDFOLD_OFFSET UNITYSDK_OFFSET(0x10A15DF0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCURSEFOLD_OFFSET UNITYSDK_OFFSET(0x10A16730)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISEFFECTFOLD_OFFSET UNITYSDK_OFFSET(0x10A16640)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITCARD_OFFSET UNITYSDK_OFFSET(0x10A151B0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITCURSE_OFFSET UNITYSDK_OFFSET(0x10A12AE0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITFOLDBTNSTATE_OFFSET UNITYSDK_OFFSET(0x10A12A70)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITHEAT_OFFSET UNITYSDK_OFFSET(0x10A12F80)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10A13AB0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONFILTERDROPCHANGE_OFFSET UNITYSDK_OFFSET(0x10A14EE0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10A13B40)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10A12390)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10A123F0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_SETFOLDSTATE_OFFSET UNITYSDK_OFFSET(0x10A16100)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_0_OFFSET UNITYSDK_OFFSET(0x10A16B10)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_1_OFFSET UNITYSDK_OFFSET(0x10A16B40)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_2_OFFSET UNITYSDK_OFFSET(0x10A16B70)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CREATESORT_B__7_0_OFFSET UNITYSDK_OFFSET(0x10A16A90)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A16820)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10A16BA0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10A16C30)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10A16CC0)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10A16D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIWholeEffectWidgetController_TypeDefinitionIndex = 39890;

	class UIWholeEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_23* _view; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* itemCtrls; // 0x2C0
		::System::Int32 curBlessCount; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIWholeEffectWidgetController_FoldType, ::System::Boolean>* foldState; // 0x2D0
		::MoleMole::UIWholeEffectWidgetController_FoldType currentType; // 0x2D8
		::MoleMole::UIWholeEffectWidgetController_SortType currentSortType; // 0x2DC
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropdownSelect; // 0x2E0
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* sortParams; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* itemWidgets; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowHotEffectInfoWidgetWidgetController*>* hoteffectWidgets; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowDamnationWidgetController*>* damnationWidgets; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Bounds GetChildBounds(::UnityEngine::RectTransform* childrecttrans)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GETCHILDBOUNDS_OFFSET))(this, childrecttrans);
		}

		::System::Void CreateSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CREATESORT_OFFSET))(this);
		}

		::System::Void OnFilterDropChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_ONFILTERDROPCHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void InitCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITCARD_OFFSET))(this);
		}

		::System::Void InitCurse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITCURSE_OFFSET))(this);
		}

		::System::Void InitFoldBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITFOLDBTNSTATE_OFFSET))(this);
		}

		::System::Void InitHeat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_INITHEAT_OFFSET))(this);
		}

		::System::Void SetFoldState(::MoleMole::UIWholeEffectWidgetController_FoldType type, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWholeEffectWidgetController_FoldType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_SETFOLDSTATE_OFFSET))(this, type, state);
		}

		::System::Boolean get_IsCardFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCARDFOLD_OFFSET))(this);
		}

		::System::Boolean get_IsEffectFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISEFFECTFOLD_OFFSET))(this);
		}

		::System::Boolean get_IsCurseFold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GET_ISCURSEFOLD_OFFSET))(this);
		}

		::MoleMole::UIHollowCardItemBtnWidgetController* GetController()
		{
			return ((::MoleMole::UIHollowCardItemBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_GETCONTROLLER_OFFSET))(this);
		}

		::System::Void ClearCardControllers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER_CLEARCARDCONTROLLERS_OFFSET))(this);
		}

		::System::Void _CreateSort_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__CREATESORT_B__7_0_OFFSET))(this);
		}

		::System::Void _Bind_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_0_OFFSET))(this);
		}

		::System::Void _Bind_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_1_OFFSET))(this);
		}

		::System::Void _Bind_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER__BIND_B__9_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
