#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/MonoSubZone3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINSUBZONE3D_CONTAINS_OFFSET UNITYSDK_OFFSET(0x164222A0)
#define MOLEMOLE_MONOTERRAINSUBZONE3D_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16422330)
#define MOLEMOLE_MONOTERRAINSUBZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16422480)
#define MOLEMOLE_MONOTERRAINSUBZONE3D___BASE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x164224E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainSubZone3D_TypeDefinitionIndex = 40902;

	class MonoTerrainSubZone3D : public ::MoleMole::MonoSubZone3D
	{
	public:
		::MoleMole::Config::TerrainMatType Mat; // 0x20
		::System::Boolean IsAllWeatherWork; // 0x24
		::MoleMole::Config::WeatherType WorkWeather; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean __base_Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D___BASE_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D_METHOD_6_1808E1CF7A125519_OFFSET))(this);
		}
	};
}
