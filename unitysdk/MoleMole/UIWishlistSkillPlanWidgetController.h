#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_08B20007A758AAA9;
class Class_3_8BD9F78F72FAC07C_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x151483C0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151474A0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x151475B0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15147530)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151472D0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15147430)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15147630)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x151484A0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x15148430)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151484F0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15148550)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151485E0)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15148670)
#define MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15148700)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistSkillPlanWidgetController_TypeDefinitionIndex = 56480;

	class UIWishlistSkillPlanWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_08B20007A758AAA9* _view; // 0x2C0
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

		::System::Void RefreshView(::System::Int32 avatarId, ::Class_3_8BD9F78F72FAC07C_3* skillWishlistPlan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_8BD9F78F72FAC07C_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSKILLPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, avatarId, skillWishlistPlan);
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
