#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_4F0F14F359F48E68;
class Class_3_41A5EEC2FE212567;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x10D73A50)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10D73000)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x10D73110)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D73090)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10D72D90)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10D72F90)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x10D73190)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x10D73B30)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x10D73AC0)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D73B80)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10D73BE0)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D73C70)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10D73D00)
#define MOLEMOLE_UIWISHLISTSUITPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10D73D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistSuitPlanWidgetController_TypeDefinitionIndex = 43812;

	class UIWishlistSuitPlanWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4F0F14F359F48E68* _view; // 0x2B8
		::System::Action* _itemClickAct; // 0x2C0

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
