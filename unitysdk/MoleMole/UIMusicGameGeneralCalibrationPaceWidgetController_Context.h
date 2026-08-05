#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9082A0CB4C1635D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPACEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17462F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationPaceWidgetController_Context_TypeDefinitionIndex = 88785;

	class UIMusicGameGeneralCalibrationPaceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_B9082A0CB4C1635D source; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPACEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
