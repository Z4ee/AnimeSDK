#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MONOTERRAINZONEVOXEL_WEATHERDEFAULTMAT_GET_TERRAINMATTYPE_OFFSET UNITYSDK_OFFSET(0x3EAC70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_WeatherDefaultMat_TypeDefinitionIndex = 70795;

	struct alignas(4) MonoTerrainZoneVoxel_WeatherDefaultMat
	{
		::MoleMole::Config::WeatherType WeatherType; // 0x10
		::System::Byte PackMatType; // 0x14

		::MoleMole::Config::TerrainMatType get_TerrainMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_WEATHERDEFAULTMAT_GET_TERRAINMATTYPE_OFFSET))(this);
		}
	};
}
