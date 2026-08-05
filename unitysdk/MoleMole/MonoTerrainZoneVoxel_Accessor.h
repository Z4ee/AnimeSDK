#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_Accessor_WeatherVoxelData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHER_OFFSET UNITYSDK_OFFSET(0x191AF1D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_METHOD_5_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x191AF2E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_METHOD_5_16927007B37EA735_OFFSET UNITYSDK_OFFSET(0x191AF510)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_START_OFFSET UNITYSDK_OFFSET(0x191AF290)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x191AF6F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_Accessor_TypeDefinitionIndex = 43927;

	class MonoTerrainZoneVoxel_Accessor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelData>* SceneWeatherVoxelData; // 0x18
		::MoleMole::Config::WeatherType _currentTerrainWeatherType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelData GetDataByWeather(::MoleMole::Config::WeatherType a1)
		{
			return ((::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelData(*)(::PVOID, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHER_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_START_OFFSET))(this);
		}

		::System::Void Method_5_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_METHOD_5_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_5_16927007B37EA735()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_METHOD_5_16927007B37EA735_OFFSET))(this);
		}
	};
}
