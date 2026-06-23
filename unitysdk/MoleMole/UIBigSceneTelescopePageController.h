#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityTelescopePageController.h"

namespace MoleMole { class BigSceneTelescopePageContext; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E65200)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER_STATE_PHOTOMODE_START_OFFSET UNITYSDK_OFFSET(0x15E652B0)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E65820)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E65830)
#define MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_STATE_PHOTOMODE_START_OFFSET UNITYSDK_OFFSET(0x15E65840)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneTelescopePageController_TypeDefinitionIndex = 39759;

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

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_State_PhotoMode_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENETELESCOPEPAGECONTROLLER___BASE_STATE_PHOTOMODE_START_OFFSET))(this);
		}
	};
}
