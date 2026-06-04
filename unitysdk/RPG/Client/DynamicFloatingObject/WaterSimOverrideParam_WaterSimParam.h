#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM_WATERSIMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB821370)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int WaterSimOverrideParam_WaterSimParam_TypeDefinitionIndex = 68673;

	class WaterSimOverrideParam_WaterSimParam : public ::System::Object
	{
	public:
		::System::Single damping; // 0x10
		::System::Single heightfeildBlendingFactor; // 0x14
		::System::Single maxFloatingHeight; // 0x18
		::System::Single minFloatingHeight; // 0x1C
		::System::Single floatingIntensityScale; // 0x20
		::System::Single floatingRotationIntensity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM_WATERSIMPARAM__CTOR_OFFSET))(this);
		}
	};
}
