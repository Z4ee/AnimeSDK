#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B09A0A3D76C95603.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC3AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListEntrustRowWidgetController_Data_TypeDefinitionIndex = 41623;

	class UIUrbanMapRightListEntrustRowWidgetController_Data : public ::System::Object
	{
	public:
		::Enum_3_B09A0A3D76C95603 entrustType; // 0x10
		::System::Int32 SplitTeamSlotIndex; // 0x14
		::System::Int32 questId; // 0x18
		::System::Int32 Index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
