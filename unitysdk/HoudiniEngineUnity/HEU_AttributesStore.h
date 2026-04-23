#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_AttributeType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ToolsInfo_PaintMergeMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_AttributeData; }
namespace HoudiniEngineUnity { class HEU_AttributesStore_SetAttributeValueFunc; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ToolsInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x8C36F30)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x8C36640)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_AREATTRIBUTESDIRTY_OFFSET UNITYSDK_OFFSET(0x8C377B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_COPYATTRIBUTEVALUESTO_OFFSET UNITYSDK_OFFSET(0x8C37910)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C32B70)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x8C320E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DISABLEPAINTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x8C357A0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ENABLEPAINTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x8C355E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_FILLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C374F0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_1_OFFSET UNITYSDK_OFFSET(0x8C35430)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_OFFSET UNITYSDK_OFFSET(0x8C32A30)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTENAMES_OFFSET UNITYSDK_OFFSET(0x8C35490)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESETVALUEFUNCTION_OFFSET UNITYSDK_OFFSET(0x8C37590)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESLIST_OFFSET UNITYSDK_OFFSET(0x8C34890)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPAINTMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x8C35A30)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPOSITIONATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x8C378D0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETVERTEXINDICES_OFFSET UNITYSDK_OFFSET(0x8C378E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x8C32080)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x8C320A0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTMESH_OFFSET UNITYSDK_OFFSET(0x8C320D0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C320C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x8C32090)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASCOLORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C320B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASDIRTYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x8C33EB0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASMESHFORPAINTING_OFFSET UNITYSDK_OFFSET(0x8C35A10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HIDEPAINTMESH_OFFSET UNITYSDK_OFFSET(0x8C35950)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISVALIDSTORE_OFFSET UNITYSDK_OFFSET(0x8C37A70)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x8C37270)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x8C36B00)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_PAINTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C35A50)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_POPULATEATTRIBUTEDATA_OFFSET UNITYSDK_OFFSET(0x8C32C10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REFRESHUPSTREAMINPUTS_OFFSET UNITYSDK_OFFSET(0x8C35350)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x8C36D80)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x8C363C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATADIRTY_OFFSET UNITYSDK_OFFSET(0x8C35410)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATASYNCD_OFFSET UNITYSDK_OFFSET(0x8C34870)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x8C36240)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEINT_OFFSET UNITYSDK_OFFSET(0x8C36140)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUESTRING_OFFSET UNITYSDK_OFFSET(0x8C36340)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUESTRING_OFFSET UNITYSDK_OFFSET(0x8C37430)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETUPMESHANDMATERIALS_OFFSET UNITYSDK_OFFSET(0x8C33970)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SHOWPAINTMESH_OFFSET UNITYSDK_OFFSET(0x8C35860)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x8C370D0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x8C368A0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCALLATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x8C32170)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCDIRTYATTRIBUTESTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x8C33FE0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x8C35230)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C34BA0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPLOADATTRIBUTEVIAMESHINPUT_OFFSET UNITYSDK_OFFSET(0x8C340A0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C37AD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributesStore_TypeDefinitionIndex = 43527;

	class HEU_AttributesStore : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _geoID; // 0x18
		::System::Int32 _partID; // 0x1C
		::System::String* _geoName; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* _attributeDatas; // 0x28
		::System::Boolean _hasColorAttribute; // 0x30
		::UnityEngine::Material* _localMaterial; // 0x38
		::UnityEngine::Transform* _outputTransform; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* _positionAttributeValues; // 0x48
		::Il2CppArray<::System::Int32>* _vertexIndices; // 0x50
		::UnityEngine::GameObject* _outputGameObject; // 0x58
		::UnityEngine::Mesh* _outputMesh; // 0x60
		::Il2CppArray<::UnityEngine::Material*>* _outputMaterials; // 0x68
		::UnityEngine::MeshCollider* _outputCollider; // 0x70
		::UnityEngine::Mesh* _outputColliderMesh; // 0x78
		::UnityEngine::MeshCollider* _outputMeshCollider; // 0x80
		::UnityEngine::MeshCollider* _localMeshCollider; // 0x88
		::System::Boolean _outputMeshRendererInitiallyEnabled; // 0x90
		::System::Boolean _outputMeshColliderInitiallyEnabled; // 0x91

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEOID_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_PARTID_OFFSET))(this);
		}

		::System::String* get_GeoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEONAME_OFFSET))(this);
		}

		::System::Boolean HasColorAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASCOLORATTRIBUTE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_OutputTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_OutputMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTMESH_OFFSET))(this);
		}

		::System::Void DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DESTROYALLDATA_OFFSET))(this, asset);
		}

		::System::Void SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Int32 geoID, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo, ::UnityEngine::GameObject* outputGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCALLATTRIBUTESFROM_OFFSET))(this, session, asset, geoID, partInfo, outputGameObject);
		}

		::System::Void SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HAPI_PartType partType, ::UnityEngine::GameObject* outputGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HAPI_PartType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETUPMESHANDMATERIALS_OFFSET))(this, asset, partType, outputGameObject);
		}

		::System::Boolean HasDirtyAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASDIRTYATTRIBUTES_OFFSET))(this);
		}

		::System::Void SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCDIRTYATTRIBUTESTOHOUDINI_OFFSET))(this, session);
		}

		::System::Void PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HAPI_AttributeInfo& attributeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_POPULATEATTRIBUTEDATA_OFFSET))(this, session, geoID, partID, attributeData, attributeInfo);
		}

		::System::Void GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributesList, ::HoudiniEngineUnity::HAPI_AttributeOwner ownerType, ::System::Int32 attributeCount)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESLIST_OFFSET))(this, session, geoID, partID, attributesList, ownerType, attributeCount);
		}

		::System::Void UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTE_OFFSET))(this, session, geoID, partID, attributeData);
		}

		::System::Void UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributeDataList)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTELIST_OFFSET))(this, session, geoID, partID, attributeDataList);
		}

		::System::Void RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REFRESHUPSTREAMINPUTS_OFFSET))(this, session);
		}

		::System::Boolean UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPLOADATTRIBUTEVIAMESHINPUT_OFFSET))(this, session, geoID, partID);
		}

		static ::System::Void SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData* attributeData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATASYNCD_OFFSET))(attributeData);
		}

		static ::System::Void SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData* attributeData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATADIRTY_OFFSET))(attributeData);
		}

		::HoudiniEngineUnity::HEU_AttributeData* CreateAttribute(::System::String* attributeName, ::HoudiniEngineUnity::HAPI_AttributeInfo& attributeInfo)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CREATEATTRIBUTE_OFFSET))(this, attributeName, attributeInfo);
		}

		::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(::System::String* name)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_OFFSET))(this, name);
		}

		::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData_1(::System::Int32 index)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_1_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAttributeNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTENAMES_OFFSET))(this);
		}

		::System::Void EnablePaintCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ENABLEPAINTCOLLIDER_OFFSET))(this);
		}

		::System::Void DisablePaintCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DISABLEPAINTCOLLIDER_OFFSET))(this);
		}

		::System::Void ShowPaintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SHOWPAINTMESH_OFFSET))(this);
		}

		::System::Void HidePaintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HIDEPAINTMESH_OFFSET))(this);
		}

		::System::Boolean HasMeshForPainting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASMESHFORPAINTING_OFFSET))(this);
		}

		::UnityEngine::MeshCollider* GetPaintMeshCollider()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPAINTMESHCOLLIDER_OFFSET))(this);
		}

		::System::Void PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 attributeIndex, ::System::Single paintFactor, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* setAttrFunc)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_PAINTATTRIBUTE_OFFSET))(this, attributeData, sourceTools, attributeIndex, paintFactor, setAttrFunc);
		}

		static ::System::Void SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 startIndex, ::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEINT_OFFSET))(attributeData, startIndex, values);
		}

		static ::System::Void SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 startIndex, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEFLOAT_OFFSET))(attributeData, startIndex, values);
		}

		static ::System::Void SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 startIndex, ::Il2CppArray<::System::String*>* values)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUESTRING_OFFSET))(attributeData, startIndex, values);
		}

		static ::System::Void ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEINT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEINT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEINT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEINT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEFLOAT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEFLOAT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEFLOAT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEFLOAT_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		static ::System::Void SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUESTRING_OFFSET))(attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		::System::Void FillAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_FILLATTRIBUTE_OFFSET))(this, attributeData, sourceTools);
		}

		::System::Boolean AreAttributesDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_AREATTRIBUTESDIRTY_OFFSET))(this);
		}

		::System::Void GetPositionAttributeValues(::Il2CppArray<::UnityEngine::Vector3>*& positionArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPOSITIONATTRIBUTEVALUES_OFFSET))(this, positionArray);
		}

		::System::Void GetVertexIndices(::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETVERTEXINDICES_OFFSET))(this, indices);
		}

		static ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* GetAttributeSetValueFunction(::HoudiniEngineUnity::HEU_AttributeData_AttributeType attrType, ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode paintMergeMode)
		{
			return ((::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*(*)(::HoudiniEngineUnity::HEU_AttributeData_AttributeType, ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESETVALUEFUNCTION_OFFSET))(attrType, paintMergeMode);
		}

		::System::Void CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore* destAttrStore)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributesStore*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_COPYATTRIBUTEVALUESTO_OFFSET))(this, destAttrStore);
		}

		::System::Boolean IsValidStore(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISVALIDSTORE_OFFSET))(this, session);
		}
	};
}
