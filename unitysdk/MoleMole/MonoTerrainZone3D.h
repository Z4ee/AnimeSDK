#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/MonoZone3D_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoTerrainSubZone3D; }

#define MOLEMOLE_MONOTERRAINZONE3D_GETTERRAINMATTYPE_OFFSET UNITYSDK_OFFSET(0x141994A0)
#define MOLEMOLE_MONOTERRAINZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x14199500)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZone3D_TypeDefinitionIndex = 66988;

	class MonoTerrainZone3D : public ::MoleMole::MonoZone3D_1<::MoleMole::MonoTerrainSubZone3D*>
	{
	public:
		::MoleMole::Config::TerrainMatType DefaultTerrainMat; // 0x20
		::System::Boolean isWorking; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONE3D__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType GetTerrainMatType(::UnityEngine::Vector3 a1)
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONE3D_GETTERRAINMATTYPE_OFFSET))(this, a1);
		}
	};
}
