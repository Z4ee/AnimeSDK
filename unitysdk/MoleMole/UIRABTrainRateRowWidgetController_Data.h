#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_981;

#define MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2DAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainRateRowWidgetController_Data_TypeDefinitionIndex = 58737;

	class UIRABTrainRateRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_981* Config; // 0x10
		::System::Int32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINRATEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
