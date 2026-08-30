#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CelestialBodyData;
class OrbitData;

#define RPG_CLIENT_CELESTIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85DFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CelestialConfig_TypeDefinitionIndex = 69755;

	class CelestialConfig : public ::System::Object
	{
	public:
		::OrbitData* orbitData; // 0x10
		::CelestialBodyData* celestialData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
