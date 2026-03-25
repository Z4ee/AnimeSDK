#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_WATERSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADEA60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WaterSettingsData_TypeDefinitionIndex = 29461;

	class WaterSettingsData : public ::System::Object
	{
	public:
		::System::Boolean EnableReflection; // 0x10
		::System::Boolean EnableRefraction; // 0x11
		::System::Int32 NumSteps; // 0x14
		::System::Single Thickness; // 0x18
		::System::Single MarchingDistance; // 0x1C
		::System::Boolean UsePreviousFrameColor; // 0x20
		::System::Boolean EnableSpatialFilter; // 0x21
		::System::Boolean EnableTemporalFilter; // 0x22
		::System::Boolean HiZEarlyExit; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WATERSETTINGSDATA__CTOR_OFFSET))(this);
		}
	};
}
