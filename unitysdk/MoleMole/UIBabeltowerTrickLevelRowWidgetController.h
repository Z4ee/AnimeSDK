#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CF29219B64B7B4D4.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B209BD9CC7A9C533_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196FF5C0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196FF650)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196FF4F0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196FF550)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x196FEA00)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196FF6D0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196FF730)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196FF7C0)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196FF850)
#define MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196FF8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerTrickLevelRowWidgetController_TypeDefinitionIndex = 46073;

	class UIBabeltowerTrickLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B209BD9CC7A9C533_3* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Enum_3_CF29219B64B7B4D4 ratingType, ::System::Single percent, ::System::Int32 pointCount)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CF29219B64B7B4D4, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, ratingType, percent, pointCount);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
