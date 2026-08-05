#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9082A0CB4C1635D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A658B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationPageController_Context_TypeDefinitionIndex = 87791;

	class UIMusicGameGeneralCalibrationPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_B9082A0CB4C1635D source; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
