#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGPRODUCTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA9100)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingProductRowWidgetController_Data_TypeDefinitionIndex = 40724;

	class UISummerTideTreasureSellingProductRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 Num; // 0x10
		::System::Int32 ItemConfigId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGPRODUCTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
