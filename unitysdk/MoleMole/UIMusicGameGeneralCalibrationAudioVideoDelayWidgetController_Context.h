#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONAUDIOVIDEODELAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1610DF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicGameGeneralCalibrationAudioVideoDelayWidgetController_Context_TypeDefinitionIndex = 46810;

	class UIMusicGameGeneralCalibrationAudioVideoDelayWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x28
		::System::Action_1<::System::Int32>* OnDelayTimeMsChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICGAMEGENERALCALIBRATIONAUDIOVIDEODELAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
