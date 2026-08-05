#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7BEEB90214042948_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15169A30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15169AC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151696D0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_SETSCORE_OFFSET UNITYSDK_OFFSET(0x15169760)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15169B40)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15169BA0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15169C30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15169CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelComboWidgetController_TypeDefinitionIndex = 58723;

	class UIMusicBattleInLevelComboWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_11* _view; // 0x2C0
		::System::Int32 _score; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetScore(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER_SETSCORE_OFFSET))(this, score);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELCOMBOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
