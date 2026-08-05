#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABLEVELBOSSTABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18864D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossTabRowWidgetController_Data_TypeDefinitionIndex = 81769;

	class UIRABLevelBossTabRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 bossGroupId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSTABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
