#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9082A0CB4C1635D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONTESTROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168E3C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationTestRootWidgetController_Context_TypeDefinitionIndex = 76254;

	class UIMusicGameGeneralCalibrationTestRootWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_B9082A0CB4C1635D source; // 0x28
		::System::Boolean OpenFromMainLine; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONTESTROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
