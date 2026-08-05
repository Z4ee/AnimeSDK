#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_570;

#define MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF73F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainRateRowWidgetController_Data_TypeDefinitionIndex = 68594;

	class UIRABTrainRateRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_570* Config; // 0x10
		::System::Int32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
