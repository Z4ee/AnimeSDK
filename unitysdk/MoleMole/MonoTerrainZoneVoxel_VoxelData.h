#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET UNITYSDK_OFFSET(0x12647150)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET UNITYSDK_OFFSET(0x12647270)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x12647700)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12647660)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12647400)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x126473A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_VoxelData_TypeDefinitionIndex = 70793;

	class MonoTerrainZoneVoxel_VoxelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* posList; // 0x10
		::System::Byte packData; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* pos; // 0x20
		::System::Random* rnd; // 0x28
		::System::Int32 curIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_baseMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_coverMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET))(this);
		}

		::System::Void Method_1_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Method_1_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_1_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_79830F666EE579C0_OFFSET))(this);
		}
	};
}
