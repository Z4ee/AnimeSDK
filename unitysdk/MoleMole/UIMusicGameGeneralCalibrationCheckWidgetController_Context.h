#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONCHECKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168E32A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationCheckWidgetController_Context_TypeDefinitionIndex = 62004;

	class UIMusicGameGeneralCalibrationCheckWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONCHECKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
