#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x151AECB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCustomerRowWidgetController_Data_TypeDefinitionIndex = 84784;

	class UISummerTideTreasureCustomerRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* IsSelect; // 0x10
		::System::Int32 SpecialOrderConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
