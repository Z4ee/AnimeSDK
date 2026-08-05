#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_562;

#define MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A5B030)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardRowWidgetController_Data_TypeDefinitionIndex = 68133;

	class UISummerEventRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_562* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
