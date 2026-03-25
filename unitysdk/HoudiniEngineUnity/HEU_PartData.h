#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PartData_PartOutputType.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_AttributesStore; }
namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeoNode; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectInstanceInfo; }
namespace HoudiniEngineUnity { class HEU_ObjectNode; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA_APPENDBAKEDCLONENAME_OFFSET UNITYSDK_OFFSET(0x84535E0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_APPLYHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x847A190)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x8453480)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x847FB00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTONEWGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8451E80)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x847C930)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x847C8D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDDATA_OFFSET UNITYSDK_OFFSET(0x847A950)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDMESHOUTPUT_OFFSET UNITYSDK_OFFSET(0x847A970)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDVOLUMEOUTPUT_OFFSET UNITYSDK_OFFSET(0x847AA60)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x846EB30)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINVALIDOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x846EC20)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEAROBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x8479F40)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_COPYCHILDGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x847F580)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_COPYGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x847CC80)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CREATENEWINSTANCEFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x847B8F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CREATEOBJECTINSTANCEINFO_OFFSET UNITYSDK_OFFSET(0x847C400)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x8479E20)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x847A000)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPARTS_OFFSET UNITYSDK_OFFSET(0x8480AD0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPART_OFFSET UNITYSDK_OFFSET(0x846E680)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x847C500)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTIDS_OFFSET UNITYSDK_OFFSET(0x846EEA0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTID_OFFSET UNITYSDK_OFFSET(0x8470990)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x847BE30)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMUNITYASSETPATHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x846F760)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x846E220)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x847AAA0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEOBJECTS_OFFSET UNITYSDK_OFFSET(0x847A710)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x847A770)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCURVE_OFFSET UNITYSDK_OFFSET(0x847C550)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x847A2D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x847A8D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x8480890)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTID_OFFSET UNITYSDK_OFFSET(0x847B860)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x847C2B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x847A800)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x847A860)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETPARTPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x8479900)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETVOLUMELAYERNAME_OFFSET UNITYSDK_OFFSET(0x8479E10)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_GENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x8479990)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_MESHVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x8479980)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OBJECTINSTANCESBEENGENERATED_OFFSET UNITYSDK_OFFSET(0x8479920)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OUTPUTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x84535B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x8479880)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTGEONODE_OFFSET UNITYSDK_OFFSET(0x8479870)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x8479850)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTNAME_OFFSET UNITYSDK_OFFSET(0x8479860)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_HAVEINSTANCESBEENGENERATED_OFFSET UNITYSDK_OFFSET(0x8479970)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8479A90)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISATTRIBINSTANCER_OFFSET UNITYSDK_OFFSET(0x84798C0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISINSTANCERANYTYPE_OFFSET UNITYSDK_OFFSET(0x84798D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISOBJECTINSTANCER_OFFSET UNITYSDK_OFFSET(0x8479910)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTCURVE_OFFSET UNITYSDK_OFFSET(0x8479940)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTEDITABLE_OFFSET UNITYSDK_OFFSET(0x8479960)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCED_OFFSET UNITYSDK_OFFSET(0x84798F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCER_OFFSET UNITYSDK_OFFSET(0x84798B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTMESH_OFFSET UNITYSDK_OFFSET(0x8479950)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTVOLUME_OFFSET UNITYSDK_OFFSET(0x846EB20)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x847A6E0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_POPULATEOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x8470F00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_PROCESSCURVEPART_OFFSET UNITYSDK_OFFSET(0x8480540)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x847C8F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x8479C90)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8479DD0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x8480780)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCER_OFFSET UNITYSDK_OFFSET(0x847A940)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINDATA_OFFSET UNITYSDK_OFFSET(0x84808B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x84808A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETUPATTRIBUTEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x846E7D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETVISIBLITY_OFFSET UNITYSDK_OFFSET(0x847C570)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETVOLUMELAYERNAME_OFFSET UNITYSDK_OFFSET(0x8479E00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SET_OBJECTINSTANCESBEENGENERATED_OFFSET UNITYSDK_OFFSET(0x8479930)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SYNCATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x8480670)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8480A70)
#define HOUDINIENGINEUNITY_HEU_PARTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x84799A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_TypeDefinitionIndex = 37641;

	class HEU_PartData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _partID; // 0x18
		::System::String* _partName; // 0x20
		::System::Int32 _objectNodeID; // 0x28
		::System::Int32 _geoID; // 0x2C
		::HoudiniEngineUnity::HAPI_PartType _partType; // 0x30
		::HoudiniEngineUnity::HEU_GeoNode* _geoNode; // 0x38
		::System::Boolean _isAttribInstancer; // 0x40
		::System::Boolean _isPartInstanced; // 0x41
		::System::Int32 _partPointCount; // 0x44
		::System::Boolean _isObjectInstancer; // 0x48
		::System::Boolean _objectInstancesGenerated; // 0x49
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* _objectInstanceInfos; // 0x50
		::UnityEngine::Vector3 _terrainOffsetPosition; // 0x58
		::UnityEngine::Object* _assetDBTerrainData; // 0x68
		::System::Boolean _isPartEditable; // 0x70
		::HoudiniEngineUnity::HEU_PartData_PartOutputType _partOutputType; // 0x74
		::HoudiniEngineUnity::HEU_Curve* _curve; // 0x78
		::HoudiniEngineUnity::HEU_AttributesStore* _attributesStore; // 0x80
		::System::Boolean _haveInstancesBeenGenerated; // 0x88
		::System::Int32 _meshVertexCount; // 0x8C
		::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput; // 0x90
		::System::String* _volumeLayerName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTID_OFFSET))(this);
		}

		::System::String* get_PartName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTNAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_GeoNode* get_ParentGeoNode()
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTGEONODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean IsPartInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCER_OFFSET))(this);
		}

		::System::Boolean IsAttribInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISATTRIBINSTANCER_OFFSET))(this);
		}

		::System::Boolean IsInstancerAnyType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISINSTANCERANYTYPE_OFFSET))(this);
		}

		::System::Boolean IsPartInstanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCED_OFFSET))(this);
		}

		::System::Int32 GetPartPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETPARTPOINTCOUNT_OFFSET))(this);
		}

		::System::Boolean IsObjectInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISOBJECTINSTANCER_OFFSET))(this);
		}

		::System::Boolean get_ObjectInstancesBeenGenerated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OBJECTINSTANCESBEENGENERATED_OFFSET))(this);
		}

		::System::Void set_ObjectInstancesBeenGenerated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SET_OBJECTINSTANCESBEENGENERATED_OFFSET))(this, value);
		}

		::System::Boolean IsPartVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTVOLUME_OFFSET))(this);
		}

		::System::Boolean IsPartCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTCURVE_OFFSET))(this);
		}

		::System::Boolean IsPartMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTMESH_OFFSET))(this);
		}

		::System::Boolean IsPartEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTEDITABLE_OFFSET))(this);
		}

		::System::Boolean HaveInstancesBeenGenerated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_HAVEINSTANCESBEENGENERATED_OFFSET))(this);
		}

		::System::Int32 get_MeshVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_MESHVERTEXCOUNT_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_GeneratedOutput* get_GeneratedOutput()
		{
			return ((::HoudiniEngineUnity::HEU_GeneratedOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_GENERATEDOUTPUT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_OutputGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OUTPUTGAMEOBJECT_OFFSET))(this);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 partID, ::System::Int32 geoID, ::System::Int32 objectNodeID, ::HoudiniEngineUnity::HEU_GeoNode* geoNode, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo, ::HoudiniEngineUnity::HEU_PartData_PartOutputType partOutputType, ::System::Boolean isEditable, ::System::Boolean isObjectInstancer, ::System::Boolean isAttribInstancer)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_GeoNode*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::HoudiniEngineUnity::HEU_PartData_PartOutputType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_INITIALIZE_OFFSET))(this, session, partID, geoID, objectNodeID, geoNode, partInfo, partOutputType, isEditable, isObjectInstancer, isAttribInstancer);
		}

		::System::Void SetGameObjectName(::System::String* partName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECTNAME_OFFSET))(this, partName);
		}

		::System::Void SetGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECT_OFFSET))(this, gameObject);
		}

		::System::Void SetVolumeLayerName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETVOLUMELAYERNAME_OFFSET))(this, name);
		}

		::System::String* GetVolumeLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETVOLUMELAYERNAME_OFFSET))(this);
		}

		::System::Void DestroyAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYALLDATA_OFFSET))(this);
		}

		::System::Void ApplyHAPITransform(::HoudiniEngineUnity::HAPI_Transform& hapiTransform)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_APPLYHAPITRANSFORM_OFFSET))(this, hapiTransform);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETDEBUGINFO_OFFSET))(this, sb);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISUSINGMATERIAL_OFFSET))(this, materialData);
		}

		::System::Void GetClonableObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* clonableObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEOBJECTS_OFFSET))(this, clonableObjects);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEPARTS_OFFSET))(this, clonableParts);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUTGAMEOBJECTS_OFFSET))(this, outputObjects);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUT_OFFSET))(this, outputs);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* inGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, inGameObject);
		}

		::System::Void SetObjectInstancer(::System::Boolean bObjectInstancer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCER_OFFSET))(this, bObjectInstancer);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Void ClearObjectInstanceInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEAROBJECTINSTANCEINFOS_OFFSET))(this);
		}

		::System::Void ClearInvalidObjectInstanceInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINVALIDOBJECTINSTANCEINFOS_OFFSET))(this);
		}

		::System::Void ClearGeneratedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDDATA_OFFSET))(this);
		}

		::System::Void ClearGeneratedMeshOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDMESHOUTPUT_OFFSET))(this);
		}

		::System::Void ClearGeneratedVolumeOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDVOLUMEOUTPUT_OFFSET))(this);
		}

		::System::Void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEPARTINSTANCES_OFFSET))(this, session);
		}

		::System::Void GenerateInstancesFromObjectID(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 objectNodeID, ::Il2CppArray<::System::String*>* instancePrefixes)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTID_OFFSET))(this, session, objectNodeID, instancePrefixes);
		}

		::System::Void GenerateInstancesFromObject(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_ObjectNode* sourceObject, ::Il2CppArray<::System::String*>* instancePrefixes)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ObjectNode*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECT_OFFSET))(this, session, sourceObject, instancePrefixes);
		}

		::System::Void GenerateInstancesFromObjectIds(::HoudiniEngineUnity::HEU_SessionBase* session, ::Il2CppArray<::System::String*>* instancePrefixes)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTIDS_OFFSET))(this, session, instancePrefixes);
		}

		::System::Void GenerateInstancesFromUnityAssetPathAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* unityInstanceAttr)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMUNITYASSETPATHATTRIBUTE_OFFSET))(this, session, unityInstanceAttr);
		}

		::System::Void CreateNewInstanceFromObject(::UnityEngine::GameObject* sourceObject, ::System::Int32 instanceIndex, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::System::Int32 instancedObjectNodeID, ::System::String* instancedObjectPath, ::UnityEngine::Vector3 rotationOffset, ::UnityEngine::Vector3 scaleOffset, ::Il2CppArray<::System::String*>* instancePrefixes, ::UnityEngine::GameObject* collisionSrcGO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HAPI_Transform&, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::System::String*>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CREATENEWINSTANCEFROMOBJECT_OFFSET))(this, sourceObject, instanceIndex, parentTransform, hapiTransform, instancedObjectNodeID, instancedObjectPath, rotationOffset, scaleOffset, instancePrefixes, collisionSrcGO);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEATTRIBUTESSTORE_OFFSET))(this, session);
		}

		::HoudiniEngineUnity::HEU_Curve* GetCurve(::System::Boolean bEditableOnly)
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCURVE_OFFSET))(this, bEditableOnly);
		}

		::System::Void SetVisiblity(::System::Boolean bVisibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETVISIBLITY_OFFSET))(this, bVisibility);
		}

		::System::Void CalculateVisibility(::System::Boolean bParentVisibility, ::System::Boolean bParentDisplayGeo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATEVISIBILITY_OFFSET))(this, bParentVisibility, bParentDisplayGeo);
		}

		::System::Void SetColliderState(::System::Boolean bEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETCOLLIDERSTATE_OFFSET))(this, bEnabled);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		static ::System::Void CopyGameObjectComponents(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::System::String* assetName, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* sourceToCopiedMaterials, ::System::Boolean bWriteMeshesToAssetDatabase, ::System::String*& bakedAssetPath, ::UnityEngine::Object*& assetDBObject, ::System::String* assetObjectFileName, ::System::Boolean bDeleteExistingComponents, ::System::Boolean bDontDeletePersistantResources, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* lodTransformValues)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::System::Boolean, ::System::String*&, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_COPYGAMEOBJECTCOMPONENTS_OFFSET))(partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources, lodTransformValues);
		}

		static ::System::Void CopyChildGameObjects(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::System::String* assetName, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* sourceToCopiedMaterials, ::System::Boolean bWriteMeshesToAssetDatabase, ::System::String*& bakedAssetPath, ::UnityEngine::Object*& assetDBObject, ::System::String* assetObjectFileName, ::System::Boolean bDeleteExistingComponents, ::System::Boolean bDontDeletePersistantResources, ::System::Boolean bKeepPreviousTransformValues)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::System::Boolean, ::System::String*&, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_COPYCHILDGAMEOBJECTS_OFFSET))(partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources, bKeepPreviousTransformValues);
		}

		::UnityEngine::GameObject* BakePartToNewGameObject(::UnityEngine::Transform* parentTransform, ::System::Boolean bWriteMeshesToAssetDatabase, ::System::String*& bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* sourceToCopiedMaterials, ::UnityEngine::Object*& assetDBObject, ::System::String* assetObjectFileName, ::System::Boolean bReconnectPrefabInstances)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTONEWGAMEOBJECT_OFFSET))(this, parentTransform, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances);
		}

		static ::System::Void BakePartToGameObject(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* targetGO, ::System::String* assetName, ::System::Boolean bIsInstancer, ::System::Boolean bDeleteExistingComponents, ::System::Boolean bDontDeletePersistantResources, ::System::Boolean bWriteMeshesToAssetDatabase, ::System::String*& bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* sourceToCopiedMaterials, ::UnityEngine::Object*& assetDBObject, ::System::String* assetObjectFileName, ::System::Boolean bReconnectPrefabInstances, ::System::Boolean bKeepPreviousTransformValues)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_OFFSET))(partData, srcGO, targetGO, assetName, bIsInstancer, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances, bKeepPreviousTransformValues);
		}

		::System::Void BakePartToGameObject_1(::UnityEngine::GameObject* targetGO, ::System::Boolean bDeleteExistingComponents, ::System::Boolean bDontDeletePersistantResources, ::System::Boolean bWriteMeshesToAssetDatabase, ::System::String*& bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* sourceToCopiedMaterials, ::UnityEngine::Object*& assetDBObject, ::System::String* assetObjectFileName, ::System::Boolean bReconnectPrefabInstances, ::System::Boolean bKeepPreviousTransformValues)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_1_OFFSET))(this, targetGO, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances, bKeepPreviousTransformValues);
		}

		::System::Boolean GenerateMesh(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bUseLODGroups)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEMESH_OFFSET))(this, session, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups);
		}

		::System::Void ProcessCurvePart(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_PROCESSCURVEPART_OFFSET))(this, session);
		}

		::System::Void SyncAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SYNCATTRIBUTESSTORE_OFFSET))(this, session, geoID, partInfo);
		}

		::System::Void SetupAttributeGeometry(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETUPATTRIBUTEGEOMETRY_OFFSET))(this, session);
		}

		::System::Void DestroyAttributesStore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYATTRIBUTESSTORE_OFFSET))(this);
		}

		::System::Void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* objInstanceInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_POPULATEOBJECTINSTANCEINFOS_OFFSET))(this, objInstanceInfos);
		}

		::System::Void SetObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* sourceObjectInstanceInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCEINFOS_OFFSET))(this, sourceObjectInstanceInfos);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* GetObjectInstanceInfos()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* CreateObjectInstanceInfo(::UnityEngine::GameObject* instancedObject, ::System::Int32 instancedObjectNodeID, ::System::String* instancedObjectPath)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CREATEOBJECTINSTANCEINFO_OFFSET))(this, instancedObject, instancedObjectNodeID, instancedObjectPath);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* GetObjectInstanceInfoWithObjectPath(::System::String* path)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTPATH_OFFSET))(this, path);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* GetObjectInstanceInfoWithObjectID(::System::Int32 objNodeID)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTID_OFFSET))(this, objNodeID);
		}

		::System::Void SetTerrainOffsetPosition(::UnityEngine::Vector3 offsetPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINOFFSETPOSITION_OFFSET))(this, offsetPosition);
		}

		::System::Void SetTerrainData(::UnityEngine::TerrainData* terrainData, ::System::String* exportPathRelative, ::System::String* exportPathUser)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINDATA_OFFSET))(this, terrainData, exportPathRelative, exportPathUser);
		}

		static ::System::String* AppendBakedCloneName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_APPENDBAKEDCLONENAME_OFFSET))(name);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_TOSTRING_OFFSET))(this);
		}

		static ::System::Void DestroyParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* parts)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPARTS_OFFSET))(parts);
		}

		static ::System::Void DestroyPart(::HoudiniEngineUnity::HEU_PartData* part)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPART_OFFSET))(part);
		}
	};
}
