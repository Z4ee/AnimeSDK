#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40264A1FD04B14F7;

#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x163FD0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardGetRowWidgetController_Data_TypeDefinitionIndex = 63546;

	class UIHouseRhythmRewardGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_40264A1FD04B14F7* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
