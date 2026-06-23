#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D257F0D6462A2AD;

#define MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16179370)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPopGetRowWidgetController_Data_TypeDefinitionIndex = 67794;

	class UISummerEventPopGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_1D257F0D6462A2AD* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
