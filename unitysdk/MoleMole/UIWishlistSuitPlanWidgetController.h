#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_4F0F14F359F48E68;
class Class_3_41A5EEC2FE212567;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x14908A40)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14907F00)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x14908010)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14907F90)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14907C90)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14907E90)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14908090)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x14908B20)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x14908AB0)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14908B70)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14908BD0)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14908C60)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14908CF0)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14908D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistSuitPlanWidgetController_TypeDefinitionIndex = 83721;

	class UIWishlistSuitPlanWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4F0F14F359F48E68* _view; // 0x2C0
		::System::Action* _itemClickAct; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONSELECT_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 avatarId, ::Class_3_41A5EEC2FE212567* equipWishlistPlan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_41A5EEC2FE212567*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, avatarId, equipWishlistPlan);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean bSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETSELECT_OFFSET))(this, bSelect);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
