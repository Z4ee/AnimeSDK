#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x819590)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8195E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_Accessor_WeatherVoxelData_TypeDefinitionIndex = 42877;

	struct alignas(8) MonoTerrainZoneVoxel_Accessor_WeatherVoxelData
	{
		::MoleMole::Config::WeatherType weatherType; // 0x10
		::System::String* weatherPrefabPath; // 0x18
		::UnityEngine::GameObject* weatherObject; // 0x20

		::System::Void _ctor(::System::String* a1, ::MoleMole::Config::WeatherType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATA_GET_ISVALID_OFFSET))(this);
		}
	};
}
