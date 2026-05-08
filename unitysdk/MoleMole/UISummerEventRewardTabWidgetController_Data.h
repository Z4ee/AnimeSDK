#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_383;

#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C21950)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardTabWidgetController_Data_TypeDefinitionIndex = 77784;

	class UISummerEventRewardTabWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_383* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
