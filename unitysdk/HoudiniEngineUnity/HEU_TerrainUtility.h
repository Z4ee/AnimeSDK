#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_VolumeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_DetailProperties; }
namespace HoudiniEngineUnity { class HEU_DetailPrototype; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_TreePrototypeInfo; }
namespace HoudiniEngineUnity { class HEU_VolumeScatterTrees; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPENDCONVERTEDHEIGHTFIELDTOALPHAMAP_OFFSET UNITYSDK_OFFSET(0x8CC1440)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYDETAILLAYERS_OFFSET UNITYSDK_OFFSET(0x8CC3B90)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYSCATTERTREES_OFFSET UNITYSDK_OFFSET(0x8CC2EF0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTFIELDTOALPHAMAP_OFFSET UNITYSDK_OFFSET(0x8CC1230)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTMAPHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x8CC0AD0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GENERATETERRAINFROMVOLUME_OFFSET UNITYSDK_OFFSET(0x8CBF280)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDETAILMAPFROMPART_OFFSET UNITYSDK_OFFSET(0x8CC0E20)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTFIELDLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x8CC4570)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTMAPFROMPART_OFFSET UNITYSDK_OFFSET(0x8CC0C00)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTRANGEFROMHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x8CC0DC0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETNORMALIZEDHEIGHTMAPFROMPARTWITHMINMAX_OFFSET UNITYSDK_OFFSET(0x8CC02C0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINDATAEXPORTPATHFROMHEIGHTFIELDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8CC46C0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x8CC4120)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x8CC4280)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTREEPROTOTYPEINFOSFROMPART_OFFSET UNITYSDK_OFFSET(0x8CC1980)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETVOLUMEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x8CC17D0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8CC37E0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x8CC3440)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATESCATTERTREES_OFFSET UNITYSDK_OFFSET(0x8CC1CD0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_SETTERRAINMATERIAL_OFFSET UNITYSDK_OFFSET(0x8CC0190)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_VOLUMELAYERHASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x8CC4320)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TerrainUtility_TypeDefinitionIndex = 43737;

	class HEU_TerrainUtility : public ::System::Object
	{
	public:
		static ::System::Boolean GenerateTerrainFromVolume(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_VolumeInfo& volumeInfo, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::GameObject* gameObject, ::UnityEngine::TerrainData*& terrainData, ::UnityEngine::Vector3& volumePositionOffset, ::UnityEngine::Terrain*& terrain)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_VolumeInfo&, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*, ::UnityEngine::TerrainData*&, ::UnityEngine::Vector3&, ::UnityEngine::Terrain*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GENERATETERRAINFROMVOLUME_OFFSET))(session, volumeInfo, geoID, partID, gameObject, terrainData, volumePositionOffset, terrain);
		}

		static ::System::Void SetTerrainMaterial(::UnityEngine::Terrain* terrain, ::System::String* specifiedMaterialName)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_SETTERRAINMATERIAL_OFFSET))(terrain, specifiedMaterialName);
		}

		static ::Il2CppArray<::System::Single>* GetNormalizedHeightmapFromPartWithMinMax(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Int32 heightMapWidth, ::System::Int32 heightMapHeight, ::System::Single& minHeight, ::System::Single& maxHeight, ::System::Single& heightRange, ::System::Boolean bUseHeightRangeOverride)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETNORMALIZEDHEIGHTMAPFROMPARTWITHMINMAX_OFFSET))(session, geoID, partID, heightMapWidth, heightMapHeight, minHeight, maxHeight, heightRange, bUseHeightRangeOverride);
		}

		static ::Il2CppArray<::System::Int32>* GetDetailMapFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Int32& detailResolution)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDETAILMAPFROMPART_OFFSET))(session, geoID, partID, detailResolution);
		}

		static ::System::Boolean GetHeightmapFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 xLength, ::System::Int32 yLength, ::System::Int32 geoID, ::System::Int32 partID, ::Il2CppArray<::System::Single>*& heightValues, ::System::Single& minHeight, ::System::Single& maxHeight)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTMAPFROMPART_OFFSET))(session, xLength, yLength, geoID, partID, heightValues, minHeight, maxHeight);
		}

		static ::Il2CppArray<::System::Single>* ConvertHeightMapHoudiniToUnity(::System::Int32 heightMapWidth, ::System::Int32 heightMapHeight, ::Il2CppArray<::System::Single>* heightValues)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTMAPHOUDINITOUNITY_OFFSET))(heightMapWidth, heightMapHeight, heightValues);
		}

		static ::Il2CppArray<::System::Single>* ConvertHeightFieldToAlphaMap(::System::Int32 heightMapWidth, ::System::Int32 heightMapHeight, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* heightFields)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTFIELDTOALPHAMAP_OFFSET))(heightMapWidth, heightMapHeight, heightFields);
		}

		static ::Il2CppArray<::System::Single>* AppendConvertedHeightFieldToAlphaMap(::System::Int32 heightMapWidth, ::System::Int32 heightMapHeight, ::Il2CppArray<::System::Single>* existingAlphaMaps, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* heightFields, ::Il2CppArray<::System::Single>* strengths, ::System::Collections::Generic::List_1<::System::Int32>* alphaMapIndices)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPENDCONVERTEDHEIGHTFIELDTOALPHAMAP_OFFSET))(heightMapWidth, heightMapHeight, existingAlphaMaps, heightFields, strengths, alphaMapIndices);
		}

		static ::UnityEngine::Vector3 GetVolumePositionOffset(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::Vector3 volumePosition, ::System::Single terrainSizeX, ::System::Single heightMapSize, ::System::Int32 mapWidth, ::System::Int32 mapHeight, ::System::Single minHeight)
		{
			return ((::UnityEngine::Vector3(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETVOLUMEPOSITIONOFFSET_OFFSET))(session, geoID, partID, volumePosition, terrainSizeX, heightMapSize, mapWidth, mapHeight, minHeight);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* GetTreePrototypeInfosFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTREEPROTOTYPEINFOSFROMPART_OFFSET))(session, geoID, partID);
		}

		static ::System::Void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Int32 pointCount, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& scatterTrees)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATESCATTERTREES_OFFSET))(session, geoID, partID, pointCount, scatterTrees);
		}

		static ::System::Void ApplyScatterTrees(::UnityEngine::TerrainData* terrainData, ::HoudiniEngineUnity::HEU_VolumeScatterTrees* scatterTrees)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYSCATTERTREES_OFFSET))(terrainData, scatterTrees);
		}

		static ::System::Void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_DetailPrototype*& detailPrototype)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_DetailPrototype*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROTOTYPE_OFFSET))(session, geoID, partID, detailPrototype);
		}

		static ::System::Void PopulateDetailProperties(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_DetailProperties*& detailProperties)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_DetailProperties*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROPERTIES_OFFSET))(session, geoID, partID, detailProperties);
		}

		static ::System::Void ApplyDetailLayers(::UnityEngine::Terrain* terrain, ::UnityEngine::TerrainData* terrainData, ::HoudiniEngineUnity::HEU_DetailProperties* detailProperties, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* heuDetailPrototypes, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* convertedDetailMaps)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::TerrainData*, ::HoudiniEngineUnity::HEU_DetailProperties*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYDETAILLAYERS_OFFSET))(terrain, terrainData, detailProperties, heuDetailPrototypes, convertedDetailMaps);
		}

		static ::System::Int32 GetTerrainLayerIndexByName(::System::String* layerName, ::Il2CppArray<::UnityEngine::TerrainLayer*>* terrainLayers)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEXBYNAME_OFFSET))(layerName, terrainLayers);
		}

		static ::System::Int32 GetTerrainLayerIndex(::UnityEngine::TerrainLayer* layer, ::Il2CppArray<::UnityEngine::TerrainLayer*>* terrainLayers)
		{
			return ((::System::Int32(*)(::UnityEngine::TerrainLayer*, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEX_OFFSET))(layer, terrainLayers);
		}

		static ::System::Boolean VolumeLayerHasAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_VOLUMELAYERHASATTRIBUTES_OFFSET))(session, geoID, partID);
		}

		static ::HoudiniEngineUnity::HFLayerType GetHeightfieldLayerType(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* volumeName)
		{
			return ((::HoudiniEngineUnity::HFLayerType(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTFIELDLAYERTYPE_OFFSET))(session, geoID, partID, volumeName);
		}

		static ::System::Single GetHeightRangeFromHeightfield(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::Single(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTRANGEFROMHEIGHTFIELD_OFFSET))(session, geoID, partID);
		}

		static ::System::String* GetTerrainDataExportPathFromHeightfieldAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINDATAEXPORTPATHFROMHEIGHTFIELDATTRIBUTE_OFFSET))(session, geoID, partID);
		}
	};
}
