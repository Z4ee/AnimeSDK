#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/Terrain/TerrainGridBlockEntry.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x19D4A3D0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19D4A690)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_CREATEORIGIN_OFFSET UNITYSDK_OFFSET(0x19D4A380)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLMIN_OFFSET UNITYSDK_OFFSET(0x19D4A350)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLUMNS_OFFSET UNITYSDK_OFFSET(0x19D4A370)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWMIN_OFFSET UNITYSDK_OFFSET(0x19D4A340)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWS_OFFSET UNITYSDK_OFFSET(0x19D4A360)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x19D4A3C0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINHEIGHT_OFFSET UNITYSDK_OFFSET(0x19D4A3B0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINLATERALSIZE_OFFSET UNITYSDK_OFFSET(0x19D4A3A0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_03E0F1DB854D5804_OFFSET UNITYSDK_OFFSET(0x19D4A5F0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_987AD1B6E19A63AC_OFFSET UNITYSDK_OFFSET(0x19D4A420)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_B6B7014A78386E25_OFFSET UNITYSDK_OFFSET(0x19D4A520)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4A700)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridData_TypeDefinitionIndex = 49437;

	class TerrainGridData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 gridRowMin; // 0x18
		::System::Int32 gridColMin; // 0x1C
		::System::Int32 gridRows; // 0x20
		::System::Int32 gridColumns; // 0x24
		::UnityEngine::Vector3 createOrigin; // 0x28
		::System::Single terrainLateralSize; // 0x34
		::System::Single terrainHeight; // 0x38
		::System::String* rootName; // 0x40
		::System::Collections::Generic::List_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>* blocks; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GridRowMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWMIN_OFFSET))(this);
		}

		::System::Int32 get_GridColMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLMIN_OFFSET))(this);
		}

		::System::Int32 get_GridRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWS_OFFSET))(this);
		}

		::System::Int32 get_GridColumns()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLUMNS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CreateOrigin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_CREATEORIGIN_OFFSET))(this);
		}

		::System::Single get_TerrainLateralSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINLATERALSIZE_OFFSET))(this);
		}

		::System::Single get_TerrainHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINHEIGHT_OFFSET))(this);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Int32 get_BlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKCOUNT_OFFSET))(this);
		}

		::System::String* Method_3_987AD1B6E19A63AC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_987AD1B6E19A63AC_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>* Method_3_B6B7014A78386E25()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_B6B7014A78386E25_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_03E0F1DB854D5804(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_METHOD_3_03E0F1DB854D5804_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_BlockSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKSIZE_OFFSET))(this);
		}
	};
}
