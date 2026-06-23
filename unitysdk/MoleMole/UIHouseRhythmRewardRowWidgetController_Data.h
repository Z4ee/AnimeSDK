#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind; }

#define MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3890)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardRowWidgetController_Data_TypeDefinitionIndex = 71813;

	class UIHouseRhythmRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::MoleMole::UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
