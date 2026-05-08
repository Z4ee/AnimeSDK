#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseDayTabWidgetController_State.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1CC0E2699D5FB1A6_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE467010)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE4670A0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE466F40)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE466FA0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0xE467120)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0xE467620)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE4675D0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0xE467570)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0xE467410)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE467CF0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE467D50)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE467DE0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE467E70)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE467F00)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseDayTabWidgetController_TypeDefinitionIndex = 74308;

	class UITowerDefenseDayTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1CC0E2699D5FB1A6_1* _view; // 0x2B8
		::MoleMole::UITowerDefenseDayTabWidgetController_State state; // 0x2C0
		::System::Boolean isLock; // 0x2C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshEntry(::System::Int32 entryid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET))(this, entryid);
		}

		::System::Void SetState(::MoleMole::UITowerDefenseDayTabWidgetController_State state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseDayTabWidgetController_State))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETSTATE_OFFSET))(this, state);
		}

		::System::Void SetLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETLOCKSTATE_OFFSET))(this);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_UPDATESTATE_OFFSET))(this);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
