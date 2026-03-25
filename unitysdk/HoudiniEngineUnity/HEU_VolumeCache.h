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

#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_APPLYPRESET_OFFSET UNITYSDK_OFFSET(0x84A7CE0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYDETAILPROPERTIES_OFFSET UNITYSDK_OFFSET(0x84A8890)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYLAYER_OFFSET UNITYSDK_OFFSET(0x84A5930)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x84A88C0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYVALUESTO_OFFSET UNITYSDK_OFFSET(0x84A86C0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_FINISHUPDATELAYERS_OFFSET UNITYSDK_OFFSET(0x84A57D0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GENERATETERRAINWITHALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x84A63B0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETLAYER_OFFSET UNITYSDK_OFFSET(0x84A5A30)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETPARTLAYERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x84A5B70)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x84A4970)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x84A4930)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x84A4960)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_TILEINDEX_OFFSET UNITYSDK_OFFSET(0x84A4950)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_UIEXPANDED_OFFSET UNITYSDK_OFFSET(0x84A4980)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x84A5780)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADASSETTEXTURE_OFFSET UNITYSDK_OFFSET(0x84A5DA0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADDEFAULTSPLATTEXTURE_OFFSET UNITYSDK_OFFSET(0x84A7FA0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERCOLORFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A6010)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERFLOATFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A5EA0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERPROPERTIESFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x84A7FD0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERTEXTUREFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A5CF0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x84A6230)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEDETAILPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x84A84C0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEPRESET_OFFSET UNITYSDK_OFFSET(0x84A84F0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATESCATTERTREES_OFFSET UNITYSDK_OFFSET(0x84A8490)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84A57F0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x84A4940)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_UIEXPANDED_OFFSET UNITYSDK_OFFSET(0x84A4990)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_STARTUPDATELAYERS_OFFSET UNITYSDK_OFFSET(0x84A53A0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATELAYERFROMPART_OFFSET UNITYSDK_OFFSET(0x84A53F0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATEVOLUMECACHESFROMPARTS_OFFSET UNITYSDK_OFFSET(0x84A49A0)
#define HOUDINIENGINEUNITY_HEU_VOLUMECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x84A8910)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeCache_TypeDefinitionIndex = 37870;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_ISDIRTY_OFFSET))(this, value);
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

		::System::Boolean get_UIExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GET_UIEXPANDED_OFFSET))(this);
		}

		::System::Void set_UIExpanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_SET_UIEXPANDED_OFFSET))(this, value);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* UpdateVolumeCachesFromParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoNode* ownerNode, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* volumeCaches)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoNode*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATEVOLUMECACHESFROMPARTS_OFFSET))(session, ownerNode, volumeParts, volumeCaches);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_GeoNode* ownerNode, ::System::Int32 tileIndex)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeoNode*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_INITIALIZE_OFFSET))(this, ownerNode, tileIndex);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_RESETPARAMETERS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_VolumeLayer* GetLayer(::System::String* layerName)
		{
			return ((::HoudiniEngineUnity::HEU_VolumeLayer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETLAYER_OFFSET))(this, layerName);
		}

		::System::Void StartUpdateLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_STARTUPDATELAYERS_OFFSET))(this);
		}

		::System::Void FinishUpdateLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_FINISHUPDATELAYERS_OFFSET))(this);
		}

		::System::Void GetPartLayerAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GETPARTLAYERATTRIBUTES_OFFSET))(this, session, geoID, partID, layer);
		}

		::System::Boolean LoadLayerTextureFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Texture2D*& outTexture)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERTEXTUREFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, outTexture);
		}

		::System::Boolean LoadLayerFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Single& floatValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERFLOATFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, floatValue);
		}

		::System::Boolean LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Color& colorValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERCOLORFROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, colorValue);
		}

		::System::Boolean LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Vector2& vectorValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERVECTOR2FROMATTRIBUTE_OFFSET))(this, session, geoID, partID, attrName, vectorValue);
		}

		::System::Void UpdateLayerFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_PartData* part)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_UPDATELAYERFROMPART_OFFSET))(this, session, part);
		}

		::System::Void GenerateTerrainWithAlphamaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, ::System::Boolean bRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_GENERATETERRAINWITHALPHAMAPS_OFFSET))(this, session, houdiniAsset, bRebuild);
		}

		::System::Void LoadLayerPropertiesFromAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::TerrainLayer* terrainLayer, ::System::Boolean bNewTerrainLayer, ::UnityEngine::Texture2D* defaultTexture)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::TerrainLayer*, ::System::Boolean, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADLAYERPROPERTIESFROMATTRIBUTES_OFFSET))(this, session, geoID, partID, terrainLayer, bNewTerrainLayer, defaultTexture);
		}

		::System::Void PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Int32 pointCount)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATESCATTERTREES_OFFSET))(this, session, geoID, partID, pointCount);
		}

		::System::Void PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEDETAILPROTOTYPE_OFFSET))(this, session, geoID, partID, layer);
		}

		::System::Void PopulatePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* cachePreset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCachePreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_POPULATEPRESET_OFFSET))(this, cachePreset);
		}

		::System::Boolean ApplyPreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* volumeCachePreset)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCachePreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_APPLYPRESET_OFFSET))(this, volumeCachePreset);
		}

		::System::Void CopyValuesTo(::HoudiniEngineUnity::HEU_VolumeCache* destCache)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeCache*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYVALUESTO_OFFSET))(this, destCache);
		}

		static ::System::Void CopyDetailProperties(::HoudiniEngineUnity::HEU_DetailProperties* srcProp, ::HoudiniEngineUnity::HEU_DetailProperties* destProp)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_DetailProperties*, ::HoudiniEngineUnity::HEU_DetailProperties*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYDETAILPROPERTIES_OFFSET))(srcProp, destProp);
		}

		static ::System::Void CopyLayer(::HoudiniEngineUnity::HEU_VolumeLayer* srcLayer, ::HoudiniEngineUnity::HEU_VolumeLayer* destLayer)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_VolumeLayer*, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYLAYER_OFFSET))(srcLayer, destLayer);
		}

		static ::System::Void CopyPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* srcProto, ::HoudiniEngineUnity::HEU_DetailPrototype* destProto)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_DetailPrototype*, ::HoudiniEngineUnity::HEU_DetailPrototype*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_COPYPROTOTYPE_OFFSET))(srcProto, destProto);
		}

		static ::UnityEngine::Texture2D* LoadDefaultSplatTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADDEFAULTSPLATTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* LoadAssetTexture(::System::String* path)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMECACHE_LOADASSETTEXTURE_OFFSET))(path);
		}
	};
}
