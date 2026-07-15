#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Rendering::Terrain { class TerrainGridData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER_COLLECTBLOCKAUTOTAGS_OFFSET UNITYSDK_OFFSET(0x19D4A240)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER_GET_TERRAINGRIDDATA_OFFSET UNITYSDK_OFFSET(0x19D4A320)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4A330)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainBlockMarker_TypeDefinitionIndex = 49435;

	class TerrainBlockMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Rendering::Terrain::TerrainGridData* terrainGridData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER__CTOR_OFFSET))(this);
		}

		::System::Void CollectBlockAutoTags(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER_COLLECTBLOCKAUTOTAGS_OFFSET))(this, a1);
		}

		::RPG::Rendering::Terrain::TerrainGridData* get_TerrainGridData()
		{
			return ((::RPG::Rendering::Terrain::TerrainGridData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKMARKER_GET_TERRAINGRIDDATA_OFFSET))(this);
		}
	};
}
