#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15131A70)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingLevelDetailItemRowWidgetController_Data_TypeDefinitionIndex = 69509;

	class UISummerTideTreasureSellingLevelDetailItemRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 SpecialOrderConfigId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
