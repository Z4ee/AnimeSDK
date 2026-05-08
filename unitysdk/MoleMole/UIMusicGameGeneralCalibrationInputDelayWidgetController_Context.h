#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_59_Enum_3_EF803B0EBE3E5C11.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONINPUTDELAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147DD4E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationInputDelayWidgetController_Context_TypeDefinitionIndex = 81313;

	class UIMusicGameGeneralCalibrationInputDelayWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnFinishAllChecker; // 0x28
		::Class_1_43BD383C98B4C0C5_59_Enum_3_EF803B0EBE3E5C11 GameType; // 0x30
		::System::Int32 checkerCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONINPUTDELAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
