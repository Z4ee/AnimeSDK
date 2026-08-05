#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_300;

#define MOLEMOLE_UISUMMERTIDETREASUREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA77C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureItemWidgetController_Data_TypeDefinitionIndex = 89245;

	class UISummerTideTreasureItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_5DA2E7556103D5A3_300* ToolConfig; // 0x10
		::System::Boolean IsRecommended; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
