#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_TERRIANSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET UNITYSDK_OFFSET(0xCA16500)
#define RPG_CLIENT_TERRIANSURFACEINFO_GET_ISWATERSURFACE_OFFSET UNITYSDK_OFFSET(0xCA16590)
#define RPG_CLIENT_TERRIANSURFACEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCA165F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrianSurfaceInfo_TypeDefinitionIndex = 64428;

	class TerrianSurfaceInfo : public ::System::Object
	{
	public:
		::System::Boolean IsEnable; // 0x10
		::RPG::GameCore::SurfaceType surfaceType; // 0x14
		::System::Single terrainThreadhold; // 0x18
		::System::Boolean UseSeaLevelAltitude; // 0x1C
		::System::Single SeaLevelAltitude; // 0x20
		::UnityEngine::Color WaterColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRIANSURFACEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableSeaLevelAltitude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRIANSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET))(this);
		}

		::System::Boolean get_IsWaterSurface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRIANSURFACEINFO_GET_ISWATERSURFACE_OFFSET))(this);
		}
	};
}
