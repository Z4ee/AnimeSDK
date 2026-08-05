#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONNOTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x189D0570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationNoteWidgetController_Context_TypeDefinitionIndex = 86549;

	class UIMusicGameGeneralCalibrationNoteWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isNormalNote; // 0x28
		::System::Single fullTrackLength; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONNOTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
