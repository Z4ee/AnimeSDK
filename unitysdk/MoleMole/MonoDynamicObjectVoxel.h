#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace MoleMole::Voxel { class VoxelArray; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_METHOD_5_64E44A84B2B35D2E_OFFSET UNITYSDK_OFFSET(0x108034E0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_METHOD_5_AFB6F6055EEF24B1_OFFSET UNITYSDK_OFFSET(0x10803270)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10803300)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10803100)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL__CTOR_OFFSET UNITYSDK_OFFSET(0x10803490)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDynamicObjectVoxel_TypeDefinitionIndex = 68905;

	class MonoDynamicObjectVoxel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Config::WeatherType bakedWeatherType; // 0x18
		::MoleMole::Voxel::VoxelArray* weatherVoxelArray; // 0x20
		::UnityEngine::Vector3Int voxelMeta; // 0x28
		::UnityEngine::Vector3 voxelMin; // 0x34
		::UnityEngine::Vector3 voxelMax; // 0x40
		::UnityEngine::Vector2 voxelPrecision; // 0x4C
		::UnityEngine::Coroutine* Field_5_5; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_AFB6F6055EEF24B1(::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_METHOD_5_AFB6F6055EEF24B1_OFFSET))(this, a1);
		}

		::System::Void Method_5_64E44A84B2B35D2E(::MoleMole::MonoTerrainZoneVoxel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_METHOD_5_64E44A84B2B35D2E_OFFSET))(this, a1);
		}
	};
}
