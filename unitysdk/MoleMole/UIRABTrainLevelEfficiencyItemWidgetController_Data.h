#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_981;

#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0B3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainLevelEfficiencyItemWidgetController_Data_TypeDefinitionIndex = 84012;

	class UIRABTrainLevelEfficiencyItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_981* Config; // 0x10
		::System::Boolean ShowCollectBtn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
