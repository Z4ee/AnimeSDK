#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Texture2D; }

#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_DUMP_OFFSET UNITYSDK_OFFSET(0x1B507230)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1B507030)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1B507020)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_BLOCKBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B507000)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDCOL_OFFSET UNITYSDK_OFFSET(0x1B506FC0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDROW_OFFSET UNITYSDK_OFFSET(0x1B506FB0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_LOD_OFFSET UNITYSDK_OFFSET(0x1B506FD0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAPHEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1B506FF0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1B506FE0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_TERRAINSHADOWPROXYID_OFFSET UNITYSDK_OFFSET(0x1B507050)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_LOAD_OFFSET UNITYSDK_OFFSET(0x1B507060)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1B5071A0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B507280)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainBlockInfo_TypeDefinitionIndex = 52091;

	class TerrainBlockInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 gridRow; // 0x18
		::System::Int32 gridCol; // 0x1C
		::System::Int32 lod; // 0x20
		::UnityEngine::Texture2D* shadowHeightMap; // 0x28
		::System::Single shadowHeightMapHeightScale; // 0x30
		::UnityEngine::Bounds blockBounds; // 0x34
		::System::UInt64 BFJMNLDLNGN; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GridRow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDROW_OFFSET))(this);
		}

		::System::Int32 get_GridCol()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDCOL_OFFSET))(this);
		}

		::System::Int32 get_Lod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_LOD_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_ShadowHeightMap()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAP_OFFSET))(this);
		}

		::System::Single get_ShadowHeightMapHeightScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAPHEIGHTSCALE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_BlockBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_BLOCKBOUNDS_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::UInt64 get_TerrainShadowProxyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_TERRAINSHADOWPROXYID_OFFSET))(this);
		}

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_DUMP_OFFSET))(this, a1);
		}
	};
}
