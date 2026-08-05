#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8E01ADA29EAEFAEA;

#define MOLEMOLE_UISUMMERTIDETREASUREREWARDITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1889FC20)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureRewardItemWidgetController_Data_TypeDefinitionIndex = 46901;

	class UISummerTideTreasureRewardItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_8E01ADA29EAEFAEA* SeafoodConfig; // 0x10
		::System::UInt32 SeafoodId; // 0x18
		::System::Boolean ResultPerformInputLocked; // 0x1C
		::System::Boolean ResultPerformHidden; // 0x1D
		::System::Boolean ResultPerformShown; // 0x1E
		::System::Boolean IsCollectPage; // 0x1F
		::System::UInt32 Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREREWARDITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
