#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A862B1AB621733B6;

#define MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E97FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPopGetRowWidgetController_Data_TypeDefinitionIndex = 77616;

	class UISummerEventPopGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_A862B1AB621733B6* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPOPGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
