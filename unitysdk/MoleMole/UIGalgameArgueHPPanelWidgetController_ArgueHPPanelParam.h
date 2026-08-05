#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ARGUEHPPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x186BF610)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam_TypeDefinitionIndex = 49841;

	class UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam : public ::System::Object
	{
	public:
		::System::Boolean isLeftSide; // 0x10
		::System::Int32 currentHealth; // 0x14
		::System::Int32 maxHealth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ARGUEHPPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
