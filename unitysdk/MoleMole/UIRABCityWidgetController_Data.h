#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABCITYWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B918B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityWidgetController_Data_TypeDefinitionIndex = 58951;

	class UIRABCityWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 MissionId; // 0x10
		::System::Int32 ChallengeId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
