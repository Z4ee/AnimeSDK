#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/Terrain/TerrainGridLoader_Struct_2_963C10EA907191D5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Rendering::Terrain { class TerrainGridData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_BEGINSTREAMING_OFFSET UNITYSDK_OFFSET(0xE87CAF0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ISSTREAMINGACTIVE_OFFSET UNITYSDK_OFFSET(0xE87CAE0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xE87CAD0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LOADALLBLOCKS_OFFSET UNITYSDK_OFFSET(0xE87A5F0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_063F564577189A4C_OFFSET UNITYSDK_OFFSET(0xE87C850)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_2747B6E1C570CBE2_OFFSET UNITYSDK_OFFSET(0xE87B350)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_377D2CC1DEAB8813_OFFSET UNITYSDK_OFFSET(0xE87C9C0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0xE87B080)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_92543571E195A33B_OFFSET UNITYSDK_OFFSET(0xE87CD20)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_AD4F6DA9E13A593D_OFFSET UNITYSDK_OFFSET(0xE87AE20)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE87ADD0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE87A590)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STARTSTREAMINGFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE87CC20)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STOPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE87CCD0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE87B1E0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xE87CDE0)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridLoader_TypeDefinitionIndex = 51801;

	class TerrainGridLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Rendering::Terrain::TerrainGridData* gridData; // 0x18
		::UnityEngine::GameObject* CJLFBMEPOPA; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* CHFNFIPFEON; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OIFHMNNFFIK; // 0x30
		::System::Single terrainLoadRadius; // 0x38
		::System::Single streamCheckThreshold; // 0x3C
		::System::Boolean GFFAGFOJEJE; // 0x40
		::RPG::Rendering::Terrain::TerrainGridData* JJGOPAAJJAL; // 0x48
		::System::Collections::Generic::List_1<::RPG::Rendering::Terrain::TerrainGridLoader_Struct_2_963C10EA907191D5>* GOGEOBGHJJL; // 0x50
		::UnityEngine::Vector3 KOHNBHDKNLM; // 0x58
		::System::Single MMBJHOBPHLB; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_UPDATE_OFFSET))(this);
		}

		::System::Void LoadAllBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LOADALLBLOCKS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ROOT_OFFSET))(this);
		}

		::System::Boolean get_IsStreamingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ISSTREAMINGACTIVE_OFFSET))(this);
		}

		::System::Void BeginStreaming(::RPG::Rendering::Terrain::TerrainGridData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::Terrain::TerrainGridData*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_BEGINSTREAMING_OFFSET))(this, a1);
		}

		::System::Void StartStreamingFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STARTSTREAMINGFROMCONFIG_OFFSET))(this);
		}

		::System::Void StopStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STOPSTREAMING_OFFSET))(this);
		}

		::System::Void Method_5_686221D5DF498040()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_686221D5DF498040_OFFSET))(this);
		}

		::System::Void Method_5_2747B6E1C570CBE2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_2747B6E1C570CBE2_OFFSET))(this, a1);
		}

		::System::Void Method_5_92543571E195A33B(::RPG::Rendering::Terrain::TerrainGridLoader_Struct_2_963C10EA907191D5 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::Terrain::TerrainGridLoader_Struct_2_963C10EA907191D5))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_92543571E195A33B_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_377D2CC1DEAB8813(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_377D2CC1DEAB8813_OFFSET))(a1);
		}

		static ::System::Void Method_5_063F564577189A4C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_063F564577189A4C_OFFSET))(a1);
		}

		::System::Void Method_5_AD4F6DA9E13A593D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_METHOD_5_AD4F6DA9E13A593D_OFFSET))(this);
		}
	};
}
