#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D257F0D6462A2AD;

#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x188B1DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardGetRowWidgetController_Data_TypeDefinitionIndex = 63715;

	class UIHouseRhythmRewardGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_1D257F0D6462A2AD* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
