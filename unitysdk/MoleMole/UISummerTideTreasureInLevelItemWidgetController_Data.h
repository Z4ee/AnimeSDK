#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_218;

#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16779D40)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureInLevelItemWidgetController_Data_TypeDefinitionIndex = 60461;

	class UISummerTideTreasureInLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_218* Config; // 0x10
		::System::UInt32 DropItemConfigId; // 0x18
		::System::Boolean IsHidden; // 0x1C
		::System::UInt32 Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
