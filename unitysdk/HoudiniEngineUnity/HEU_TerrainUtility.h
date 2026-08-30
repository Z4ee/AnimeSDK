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

#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPENDCONVERTEDHEIGHTFIELDTOALPHAMAP_OFFSET UNITYSDK_OFFSET(0x1B489830)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYDETAILLAYERS_OFFSET UNITYSDK_OFFSET(0x1B48CAB0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYSCATTERTREES_OFFSET UNITYSDK_OFFSET(0x1B48BBD0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTFIELDTOALPHAMAP_OFFSET UNITYSDK_OFFSET(0x1B489650)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTMAPHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x1B488C40)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GENERATETERRAINFROMVOLUME_OFFSET UNITYSDK_OFFSET(0x1B487060)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETATTRIBUTETILE_OFFSET UNITYSDK_OFFSET(0x1B48D670)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDEFAULTTERRAINMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x1B488DC0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDEFAULTTERRAINSHADERNAME_OFFSET UNITYSDK_OFFSET(0x1B488D40)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDETAILMAPFROMPART_OFFSET UNITYSDK_OFFSET(0x1B489150)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTFIELDLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x1B48D410)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTMAPFROMPART_OFFSET UNITYSDK_OFFSET(0x1B488E40)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTRANGEFROMHEIGHTFIELD_OFFSET UNITYSDK_OFFSET(0x1B4890F0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETNORMALIZEDHEIGHTMAPFROMPARTWITHMINMAX_OFFSET UNITYSDK_OFFSET(0x1B488150)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINDATAEXPORTPATHFROMHEIGHTFIELDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B48D5C0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1B48D010)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1B48D140)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTREEPROTOTYPEINFOSFROMPART_OFFSET UNITYSDK_OFFSET(0x1B489D50)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETVOLUMEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1B489B30)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B48C3F0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1B48C050)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATESCATTERTREES_OFFSET UNITYSDK_OFFSET(0x1B48A050)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_RESAMPLEDATA_OFFSET UNITYSDK_OFFSET(0x1B488970)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_SETTERRAINMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B487EA0)
#define HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_VOLUMELAYERHASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B48D1E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TerrainUtility_TypeDefinitionIndex = 39391;

	class HEU_TerrainUtility : public ::System::Object
	{
	public:
		static ::System::Boolean GenerateTerrainFromVolume(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_VolumeInfo& a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::GameObject* a5, ::UnityEngine::TerrainData*& a6, ::UnityEngine::Vector3& a7, ::UnityEngine::Terrain*& a8, ::System::String* a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_VolumeInfo&, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*, ::UnityEngine::TerrainData*&, ::UnityEngine::Vector3&, ::UnityEngine::Terrain*&, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GENERATETERRAINFROMVOLUME_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void SetTerrainMaterial(::UnityEngine::Terrain* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_SETTERRAINMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetDefaultTerrainShaderName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDEFAULTTERRAINSHADERNAME_OFFSET))();
		}

		static ::System::String* GetDefaultTerrainMaterialPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDEFAULTTERRAINMATERIALPATH_OFFSET))();
		}

		static ::Il2CppArray<::System::Single>* GetNormalizedHeightmapFromPartWithMinMax(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single& a6, ::System::Single& a7, ::System::Single& a8, ::System::Boolean a9)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETNORMALIZEDHEIGHTMAPFROMPARTWITHMINMAX_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::Il2CppArray<::System::Int32>* GetDetailMapFromPart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETDETAILMAPFROMPART_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetHeightmapFromPart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::Il2CppArray<::System::Single>*& a6, ::System::Single& a7, ::System::Single& a8)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTMAPFROMPART_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::Il2CppArray<::System::Single>* ConvertHeightMapHoudiniToUnity(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTMAPHOUDINITOUNITY_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Single>* ConvertHeightFieldToAlphaMap(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_CONVERTHEIGHTFIELDTOALPHAMAP_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Single>* AppendConvertedHeightFieldToAlphaMap(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* a4, ::Il2CppArray<::System::Single>* a5, ::System::Collections::Generic::List_1<::System::Int32>* a6)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPENDCONVERTEDHEIGHTFIELDTOALPHAMAP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 GetVolumePositionOffset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Single a9)
		{
			return ((::UnityEngine::Vector3(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETVOLUMEPOSITIONOFFSET_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* GetTreePrototypeInfosFromPart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTREEPROTOTYPEINFOSFROMPART_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATESCATTERTREES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ApplyScatterTrees(::UnityEngine::TerrainData* a1, ::HoudiniEngineUnity::HEU_VolumeScatterTrees* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::HoudiniEngineUnity::HEU_VolumeScatterTrees*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYSCATTERTREES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_DetailPrototype*& a4)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_DetailPrototype*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROTOTYPE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PopulateDetailProperties(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_DetailProperties*& a4)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_DetailProperties*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_POPULATEDETAILPROPERTIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ApplyDetailLayers(::UnityEngine::Terrain* a1, ::UnityEngine::TerrainData* a2, ::HoudiniEngineUnity::HEU_DetailProperties* a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* a4, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::TerrainData*, ::HoudiniEngineUnity::HEU_DetailProperties*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_APPLYDETAILLAYERS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetTerrainLayerIndexByName(::System::String* a1, ::Il2CppArray<::UnityEngine::TerrainLayer*>* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEXBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetTerrainLayerIndex(::UnityEngine::TerrainLayer* a1, ::Il2CppArray<::UnityEngine::TerrainLayer*>* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::TerrainLayer*, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINLAYERINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean VolumeLayerHasAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_VOLUMELAYERHASATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::HoudiniEngineUnity::HFLayerType GetHeightfieldLayerType(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::HoudiniEngineUnity::HFLayerType(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTFIELDLAYERTYPE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetHeightRangeFromHeightfield(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETHEIGHTRANGEFROMHEIGHTFIELD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetTerrainDataExportPathFromHeightfieldAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETTERRAINDATAEXPORTPATHFROMHEIGHTFIELDATTRIBUTE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Single>* ResampleData(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_RESAMPLEDATA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetAttributeTile(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TERRAINUTILITY_GETATTRIBUTETILE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
