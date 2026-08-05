#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A862B1AB621733B6;

#define MOLEMOLE_UINEWBIEGUIDEGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4A0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideGetRowWidgetController_Data_TypeDefinitionIndex = 43314;

	class UINewbieGuideGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_A862B1AB621733B6* AccessData; // 0x10
		::System::Boolean IsLast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
