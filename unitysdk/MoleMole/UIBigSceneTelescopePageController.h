#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityTelescopePageController.h"

namespace MoleMole { class BigSceneTelescopePageContext; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x170A0510)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1709FED0)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170A0550)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_STATE_PHOTOMODE_START_OFFSET UNITYSDK_OFFSET(0x1709FF80)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170A05F0)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x170A0600)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170A0610)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170A0620)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_STATE_PHOTOMODE_START_OFFSET UNITYSDK_OFFSET(0x170A06D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneTelescopePageController_TypeDefinitionIndex = 84696;

	class UIBigSceneTelescopePageController : public ::MoleMole::UIMainCityTelescopePageController
	{
	public:
		::MoleMole::BigSceneTelescopePageContext* _context; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void State_PhotoMode_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_STATE_PHOTOMODE_START_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_State_PhotoMode_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_STATE_PHOTOMODE_START_OFFSET))(this);
		}
	};
}
