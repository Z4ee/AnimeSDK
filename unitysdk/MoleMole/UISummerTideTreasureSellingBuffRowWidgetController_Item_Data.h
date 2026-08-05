#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x140D05E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingBuffRowWidgetController_Item_Data_TypeDefinitionIndex = 52685;

	class UISummerTideTreasureSellingBuffRowWidgetController_Item_Data : public ::System::Object
	{
	public:
		::System::Int32 Num; // 0x10
		::System::Int32 ItemConfigId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_DATA__CTOR_OFFSET))(this);
		}
	};
}
