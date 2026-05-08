#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_369;

#define MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D49F90)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardRowWidgetController_Data_TypeDefinitionIndex = 43594;

	class UISummerEventRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_369* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
