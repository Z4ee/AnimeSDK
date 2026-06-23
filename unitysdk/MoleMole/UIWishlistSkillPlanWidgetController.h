#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_908AB85B3F7FB97E;
class Class_3_16C92FCFDC4181B6_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x11BE0F70)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11BE0060)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x11BE0170)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11BE00F0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BDFE90)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BDFFF0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11BE01F0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x11BE1050)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x11BE0FE0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE10A0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11BE1100)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11BE1190)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BE1220)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BE12B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistSkillPlanWidgetController_TypeDefinitionIndex = 41590;

	class UIWishlistSkillPlanWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_908AB85B3F7FB97E* _view; // 0x2C0
		::System::Action* _itemClickAct; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONSELECT_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 avatarId, ::Class_3_16C92FCFDC4181B6_1* skillWishlistPlan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_16C92FCFDC4181B6_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, avatarId, skillWishlistPlan);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean bSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETSELECT_OFFSET))(this, bSelect);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
