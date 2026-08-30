#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionVolume.h"

#define RPG_CLIENT_RUNTIMEREGIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x16A34F70)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeRegionVolume_TypeDefinitionIndex = 62273;

	class RuntimeRegionVolume : public ::RPG::Client::RegionVolume
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEREGIONVOLUME__CTOR_OFFSET))(this);
		}
	};
}
