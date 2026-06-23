#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

#define MOLEMOLE_UIRECYCLEINFODESCWIDGETCONTROLLER_SETINFODESC_OFFSET UNITYSDK_OFFSET(0x1667C810)
#define MOLEMOLE_UIRECYCLEINFODESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667C980)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleInfoDescWidgetController_TypeDefinitionIndex = 74881;

	class UIRecycleInfoDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEINFODESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetInfoDesc(::System::Boolean isWeapon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEINFODESCWIDGETCONTROLLER_SETINFODESC_OFFSET))(this, isWeapon);
		}
	};
}
