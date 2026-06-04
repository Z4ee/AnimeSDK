#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HoudiniEngineUnity { class HEU_DetailProperties; }
namespace HoudiniEngineUnity { class HEU_DetailPrototype; }
namespace HoudiniEngineUnity { class HEU_GeoNode; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_VolumeCachePreset; }
namespace HoudiniEngineUnity { class HEU_VolumeLayer; }
namespace HoudiniEngineUnity { class HEU_VolumeScatterTrees; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class TerrainLayer; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_APPLYPRESET_OFFSET UNITYSDK_OFFSET(0x17F6E570)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYDETAILPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17F71FE0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYLAYER_OFFSET UNITYSDK_OFFSET(0x17F6E0A0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x17F72010)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYVALUESTO_OFFSET UNITYSDK_OFFSET(0x17F71DE0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_FINISHUPDATELAYERS_OFFSET UNITYSDK_OFFSET(0x17F6F790)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GENERATETERRAINWITHALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x17F70100)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETLAYER_OFFSET UNITYSDK_OFFSET(0x17F6E1B0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETPARTLAYERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17F6F7B0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETSESSION_OFFSET UNITYSDK_OFFSET(0x17F6DF00)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_DETAILPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17F6DEA0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x17F6DE70)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x17F6DEC0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x17F6DE40)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x17F6DE60)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x17F6DEB0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_SCATTERTREES_OFFSET UNITYSDK_OFFSET(0x17F6DE90)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x17F6DE80)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_TILEINDEX_OFFSET UNITYSDK_OFFSET(0x17F6DE50)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_UIEXPANDED_OFFSET UNITYSDK_OFFSET(0x17F6DEE0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17F6F720)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F72070)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADASSETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17F6F8A0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADDEFAULTSPLATTEXTURE_OFFSET UNITYSDK_OFFSET(0x17F71830)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERCOLORFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17F6FBC0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERFLOATFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17F6F970)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERPROPERTIESFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17F718D0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERTEXTUREFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17F6F800)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17F6FEA0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEDETAILPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x17F71DB0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEPRESET_OFFSET UNITYSDK_OFFSET(0x17F6E310)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATESCATTERTREES_OFFSET UNITYSDK_OFFSET(0x17F71D70)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RECOOK_OFFSET UNITYSDK_OFFSET(0x17F6DF70)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17F6DF80)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x17F6DED0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_UIEXPANDED_OFFSET UNITYSDK_OFFSET(0x17F6DEF0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_STARTUPDATELAYERS_OFFSET UNITYSDK_OFFSET(0x17F6F210)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATELAYERFROMPART_OFFSET UNITYSDK_OFFSET(0x17F6F260)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATEVOLUMECACHESFROMPARTS_OFFSET UNITYSDK_OFFSET(0x17F6E7C0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F72310)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeCache_TypeDefinitionIndex = 37811;

	class HEU_VolumeCache : public ::UnityEngine::ScriptableObject
	{
	public:
		::HoudiniEngineUnity::HEU_GeoNode* _ownerNode; // 0x18
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _layers; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* _updatedLayers; // 0x28
		::System::Int32 _tileIndex; // 0x30
		::System::Boolean _isDirty; // 0x34
		::System::String* _geoName; // 0x38
		::System::String* _objName; // 0x40
		::System::Boolean _uiExpanded; // 0x48
		::UnityEngine::TerrainData* _terrainData; // 0x50
		::HoudiniEngineUnity::HEU_VolumeScatterTrees* _scatterTrees; // 0x58
		::HoudiniEngineUnity::HEU_DetailProperties* _detailProperties; // 0x60
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_LAYERS_OFFSET))(this);
		}

		::System::Int32 get_TileIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_TILEINDEX_OFFSET))(this);
		}

		::System::String* get_ObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_OBJECTNAME_OFFSET))(this);
		}

		::System::String* get_GeoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_GEONAME_OFFSET))(this);
		}

		::UnityEngine::TerrainData* get_TerrainData()
		{
			return ((::UnityEngine::TerrainData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_TERRAINDATA_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_VolumeScatterTrees* get_ScatterTrees()
		{
			return ((::HoudiniEngineUnity::HEU_VolumeScatterTrees*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_SCATTERTREES_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_DetailProperties* get_DetailProperties()
		{
			return ((::HoudiniEngineUnity::HEU_DetailProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_DETAILPROPERTIES_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::System::Boolean get_UIExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_UIEXPANDED_OFFSET))(this);
		}

		::System::Void set_UIExpanded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_UIEXPANDED_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RECOOK_OFFSET))(this);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RESETPARAMETERS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_VolumeLayer* GetLayer(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_VolumeLayer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETLAYER_OFFSET))(this, a1);
		}

		::System::Void PopulatePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCachePreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEPRESET_OFFSET))(this, a1);
		}

		::System::Boolean ApplyPreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCachePreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_APPLYPRESET_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* UpdateVolumeCachesFromParts(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_GeoNode* a2, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* a4)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoNode*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATEVOLUMECACHESFROMPARTS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_GeoNode* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeoNode*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void StartUpdateLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_STARTUPDATELAYERS_OFFSET))(this);
		}

		::System::Void FinishUpdateLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_FINISHUPDATELAYERS_OFFSET))(this);
		}

		::System::Void GetPartLayerAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_VolumeLayer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETPARTLAYERATTRIBUTES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LoadLayerTextureFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Texture2D*& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERTEXTUREFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean LoadLayerFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERFLOATFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Color& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERCOLORFROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UpdateLayerFromPart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_PartData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATELAYERFROMPART_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateTerrainWithAlphamaps(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GENERATETERRAINWITHALPHAMAPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadLayerPropertiesFromAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TerrainLayer* a4, ::System::Boolean a5, ::UnityEngine::Texture2D* a6)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainLayer*, ::System::Boolean, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERPROPERTIESFROMATTRIBUTES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATESCATTERTREES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_VolumeLayer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEDETAILPROTOTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopyValuesTo(::HoudiniEngineUnity::HEU_VolumeCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCache*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYVALUESTO_OFFSET))(this, a1);
		}

		static ::System::Void CopyDetailProperties(::HoudiniEngineUnity::HEU_DetailProperties* a1, ::HoudiniEngineUnity::HEU_DetailProperties* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_DetailProperties*, ::HoudiniEngineUnity::HEU_DetailProperties*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYDETAILPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Void CopyLayer(::HoudiniEngineUnity::HEU_VolumeLayer* a1, ::HoudiniEngineUnity::HEU_VolumeLayer* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_VolumeLayer*, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void CopyPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* a1, ::HoudiniEngineUnity::HEU_DetailPrototype* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_DetailPrototype*, ::HoudiniEngineUnity::HEU_DetailPrototype*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYPROTOTYPE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2D* LoadDefaultSplatTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADDEFAULTSPLATTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* LoadAssetTexture(::System::String* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADASSETTEXTURE_OFFSET))(a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeCache* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCache*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
