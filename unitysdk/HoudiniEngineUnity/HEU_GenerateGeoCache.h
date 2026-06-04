#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshTopology.h"

namespace HoudiniEngineUnity { class HEU_GenerateGeoCache_HEU_ColliderInfo; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace HoudiniEngineUnity { class HEU_GeoGroup; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_MeshData; }
namespace HoudiniEngineUnity { class HEU_MeshIndexFormat; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_UnityMaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CALCULATEGROUPMESHTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x17ED0D70)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEMESHES_OFFSET UNITYSDK_OFFSET(0x17ED0640)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEQUADMESHES_OFFSET UNITYSDK_OFFSET(0x17ECF720)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMATERIALINFOENTRYFROMATTRIBUTEINDEX_OFFSET UNITYSDK_OFFSET(0x17ECBF40)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMESHFROMMESHDATA_OFFSET UNITYSDK_OFFSET(0x17ECF0D0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEPOINTS_OFFSET UNITYSDK_OFFSET(0x17ED12E0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEVERTICES_OFFSET UNITYSDK_OFFSET(0x17E9EF10)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATELODMESHESFROMGEOGROUPS_OFFSET UNITYSDK_OFFSET(0x17EA1C90)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMGEOGROUP_OFFSET UNITYSDK_OFFSET(0x17ECD620)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0x17EA2C60)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_OFFSET UNITYSDK_OFFSET(0x17ECD210)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETMATERIALKEYFROMATTRIBUTEINDEX_OFFSET UNITYSDK_OFFSET(0x17ECC070)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETPOPULATEDGEOCACHE_OFFSET UNITYSDK_OFFSET(0x17E9EA00)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETSTRINGATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17ECBA30)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETSUBMESHIDFORFACE_OFFSET UNITYSDK_OFFSET(0x17ED1040)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_ASSETID_OFFSET UNITYSDK_OFFSET(0x17EC7A80)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x17EC7A70)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x17EB1860)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_PARSELODTRANSITIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17ECC1E0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEGEOMETRYDATA_OFFSET UNITYSDK_OFFSET(0x17EC83F0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEUNITYMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x17EC7CD0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_SET_ASSETID_OFFSET UNITYSDK_OFFSET(0x17EC7A90)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_TRANSFERREGULARATTRIBUTESTOVERTICES_OFFSET UNITYSDK_OFFSET(0x17ED0980)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x17EB1B20)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDER_OFFSET UNITYSDK_OFFSET(0x17ECC6F0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC7AA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache_TypeDefinitionIndex = 37670;

	class HEU_GenerateGeoCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _materialCache; // 0x10
		::Il2CppArray<::HoudiniEngineUnity::HAPI_AttributeInfo>* _uvsAttrInfo; // 0x18
		::Il2CppArray<::System::Single>* _colorAttr; // 0x20
		::Il2CppArray<::System::Single>* _normalAttr; // 0x28
		::Il2CppArray<::System::Single>* _LODTransitionValues; // 0x30
		::HoudiniEngineUnity::HEU_MeshIndexFormat* _meshIndexFormat; // 0x38
		::Il2CppArray<::System::Int32>* _substanceMaterialAttrIndex; // 0x40
		::Il2CppArray<::System::Int32>* _faceCounts; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _substanceMaterialAttrStringsMap; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* _unityMaterialAttrStringsMap; // 0x58
		::System::String* _partName; // 0x60
		::Il2CppArray<::System::Int32>* _allCollisionVertexList; // 0x68
		::HoudiniEngineUnity::HAPI_PartInfo _partInfo; // 0x70
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _inUseMaterials; // 0xA0
		::Il2CppArray<::System::String*>* _groups; // 0xA8
		::Il2CppArray<::System::Int32>* _unityMaterialAttrName; // 0xB0
		::Il2CppArray<::System::Single>* _alphaAttr; // 0xB8
		::Il2CppArray<::System::Int32>* _allCollisionFaceIndices; // 0xC0
		::Il2CppArray<::System::Int32>* _houdiniMaterialIDs; // 0xC8
		::Il2CppArray<::System::Int32>* _vertexList; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Int32>*>* _groupSplitVertexIndices; // 0xD8
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* _colliderInfos; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>* _materialIDToDataMap; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* _unityMaterialInfos; // 0xF0
		::Il2CppArray<::System::Single>* _posAttr; // 0xF8
		::Il2CppArray<::System::Int32>* _substanceMaterialAttrName; // 0x100
		::Il2CppArray<::Il2CppArray<::System::Single>*>* _uvsAttr; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* _groupSplitFaceIndices; // 0x110
		::Il2CppArray<::System::Single>* _tangentAttr; // 0x118
		::System::String* _assetCacheFolderPath; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* _groupVertexOffsets; // 0x128
		::HoudiniEngineUnity::HAPI_AttributeInfo _posAttrInfo; // 0x130
		::System::Boolean _singleFaceHoudiniMaterial; // 0x158
		::System::Boolean _isMeshReadWrite; // 0x159
		::System::Boolean _hasGroupGeometry; // 0x15A
		::System::Boolean _hasLODGroups; // 0x15B
		::System::Boolean _singleFaceUnityMaterial; // 0x15C
		::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo; // 0x160
		::System::Single _normalCosineThreshold; // 0x184
		::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrNameInfo; // 0x188
		::HoudiniEngineUnity::HAPI_AttributeInfo _normalAttrInfo; // 0x1B0
		::HoudiniEngineUnity::HAPI_AttributeInfo _alphaAttrInfo; // 0x1D8
		::HoudiniEngineUnity::HAPI_AttributeInfo _tangentAttrInfo; // 0x200
		::HoudiniEngineUnity::HAPI_AttributeInfo _colorAttrInfo; // 0x228
		::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrIndexInfo; // 0x250
		::System::Int32 _AssetID_k__BackingField; // 0x278
		::HoudiniEngineUnity::HAPI_AttributeInfo _unityMaterialAttrInfo; // 0x280

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_GEOID_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_PARTID_OFFSET))(this);
		}

		::System::Int32 get_AssetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_ASSETID_OFFSET))(this);
		}

		::System::Void set_AssetID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_SET_ASSETID_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_GenerateGeoCache* GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a6, ::System::String* a7)
		{
			return ((::HoudiniEngineUnity::HEU_GenerateGeoCache*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETPOPULATEDGEOCACHE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetStringAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::HoudiniEngineUnity::HAPI_AttributeInfo& a5, ::Il2CppArray<::System::Int32>*& a6, ::System::Collections::Generic::List_1<::System::String*>*& a7)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::Il2CppArray<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETSTRINGATTRIBUTES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEUNITYMATERIALDATA_OFFSET))(this, a1);
		}

		static ::System::Int32 GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* a1, ::System::Int32 a2, ::System::String*& a3, ::System::String*& a4, ::System::Int32& a5)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32, ::System::String*&, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETMATERIALKEYFROMATTRIBUTEINDEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMATERIALINFOENTRYFROMATTRIBUTEINDEX_OFFSET))(a1, a2);
		}

		::System::Boolean PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEGEOMETRYDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Void ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>*& a4)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_PARSELODTRANSITIONATTRIBUTE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache* a1, ::HoudiniEngineUnity::HEU_GeneratedOutputData* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDERS_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache* a1, ::HoudiniEngineUnity::HEU_GeneratedOutputData* a2, ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo* a3)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Material*>*& a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_GeoGroup* a2, ::HoudiniEngineUnity::HEU_GenerateGeoCache* a3, ::HoudiniEngineUnity::HEU_GeneratedOutput* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMSINGLEGROUP_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* a2, ::HoudiniEngineUnity::HEU_GenerateGeoCache* a3, ::HoudiniEngineUnity::HEU_GeneratedOutput* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATELODMESHESFROMGEOGROUPS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_GeoGroup* a2, ::HoudiniEngineUnity::HEU_GenerateGeoCache* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Mesh*& a9, ::Il2CppArray<::UnityEngine::Material*>*& a10)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Mesh*&, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMGEOGROUP_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::UnityEngine::Mesh* CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEQUADMESHES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* CombineMeshes(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Boolean a4, ::HoudiniEngineUnity::HEU_MeshIndexFormat* a5)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Boolean, ::HoudiniEngineUnity::HEU_MeshIndexFormat*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEMESHES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Mesh* CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData* a1, ::System::Boolean a2, ::System::Boolean a3, ::HoudiniEngineUnity::HEU_MeshIndexFormat* a4)
		{
			return ((::UnityEngine::Mesh*(*)(::HoudiniEngineUnity::HEU_MeshData*, ::System::Boolean, ::System::Boolean, ::HoudiniEngineUnity::HEU_MeshIndexFormat*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMESHFROMMESHDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void TransferRegularAttributesToVertices(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::HoudiniEngineUnity::HAPI_AttributeInfo& a5, ::Il2CppArray<::System::Single>* a6, ::Il2CppArray<::System::Single>*& a7)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_TRANSFERREGULARATTRIBUTESTOVERTICES_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_GenerateGeoCache* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& a8, ::System::Int32& a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEVERTICES_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_GenerateGeoCache* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& a8, ::System::Int32& a9)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEPOINTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void GetSubmeshIDForFace(::HoudiniEngineUnity::HEU_GenerateGeoCache* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5, ::System::Int32 a6, ::System::Int32& a7, ::System::Int32& a8, ::System::Int32& a9)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETSUBMESHIDFORFACE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::MeshTopology CalculateGroupMeshTopology(::System::Collections::Generic::List_1<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::UnityEngine::MeshTopology(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CALCULATEGROUPMESHTOPOLOGY_OFFSET))(a1, a2);
		}
	};
}
