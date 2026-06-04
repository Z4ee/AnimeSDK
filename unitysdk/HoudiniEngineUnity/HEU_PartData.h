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

#define HOUDINIENGINEUNITY_HEU_PARTDATA_APPENDBAKEDCLONENAME_OFFSET UNITYSDK_OFFSET(0x17EE5B70)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_APPLYHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F3F3B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17EE5A00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F44150)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTONEWGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17EE5BB0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x17F41CE0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x17F3E900)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDDATA_OFFSET UNITYSDK_OFFSET(0x17F3F9B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDMESHOUTPUT_OFFSET UNITYSDK_OFFSET(0x17F3F9D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARGENERATEDVOLUMEOUTPUT_OFFSET UNITYSDK_OFFSET(0x17F3FAC0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x17F278A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINVALIDOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F279F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CLEAROBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F3E4F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_COMPOSEUNITYINSTANCESPLITHIERARCHY_OFFSET UNITYSDK_OFFSET(0x17F40A30)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_COPYCHILDGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F43A90)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_COPYGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17F42030)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CREATENEWINSTANCEFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17F40F00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_CREATEOBJECTINSTANCEINFO_OFFSET UNITYSDK_OFFSET(0x17F41AF0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x17F3E3B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x17F3E610)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPARTS_OFFSET UNITYSDK_OFFSET(0x17F451D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPART_OFFSET UNITYSDK_OFFSET(0x17F25140)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x17F41C90)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTIDS_OFFSET UNITYSDK_OFFSET(0x17F25330)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTID_OFFSET UNITYSDK_OFFSET(0x17F27150)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17F41560)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMUNITYASSETPATHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17F25DA0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x17F24D70)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x17F3FB00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F3F820)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x17F3F8D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETCURVE_OFFSET UNITYSDK_OFFSET(0x17F3EC60)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x17F3F4C0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F3E890)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F45160)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTID_OFFSET UNITYSDK_OFFSET(0x17F3EE20)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x17F3ECC0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F3E730)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x17F3E7E0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETPARTPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x17F3E150)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETSESSION_OFFSET UNITYSDK_OFFSET(0x17F3E060)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GETVOLUMELAYERNAME_OFFSET UNITYSDK_OFFSET(0x17F3E3A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x17F3DF40)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_GENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x17F3DF60)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x17F3DF00)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_MESHVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x17F3DF50)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F3DF30)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OUTPUTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17EE5B40)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x17EE59D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTGEONODE_OFFSET UNITYSDK_OFFSET(0x17F3DF20)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x17F3DEE0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTNAME_OFFSET UNITYSDK_OFFSET(0x17F3DEF0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0x17F3DF10)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_HAVEINSTANCESBEENGENERATED_OFFSET UNITYSDK_OFFSET(0x17F3E1A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17F3F0D0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISATTRIBINSTANCER_OFFSET UNITYSDK_OFFSET(0x17F3E110)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F452E0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISINSTANCERANYTYPE_OFFSET UNITYSDK_OFFSET(0x17F3E120)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISOBJECTINSTANCER_OFFSET UNITYSDK_OFFSET(0x17F3E160)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTCURVE_OFFSET UNITYSDK_OFFSET(0x17F3E170)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTEDITABLE_OFFSET UNITYSDK_OFFSET(0x17F3E190)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCED_OFFSET UNITYSDK_OFFSET(0x17F3E140)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTINSTANCER_OFFSET UNITYSDK_OFFSET(0x17F3E100)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTMESH_OFFSET UNITYSDK_OFFSET(0x17F3E180)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISPARTVOLUME_OFFSET UNITYSDK_OFFSET(0x17F25320)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F3E700)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_POPULATEOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F27C60)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_PROCESSCURVEPART_OFFSET UNITYSDK_OFFSET(0x17F44D40)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_RECOOK_OFFSET UNITYSDK_OFFSET(0x17F3E0F0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x17F3EC80)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x17F3E1B0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F3E360)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x17F44FA0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCER_OFFSET UNITYSDK_OFFSET(0x17F3F9A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINDATA_OFFSET UNITYSDK_OFFSET(0x17F3EEC0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x17F3EEB0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETUPATTRIBUTEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x17F25290)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETVISIBLITY_OFFSET UNITYSDK_OFFSET(0x17F3E930)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SETVOLUMELAYERNAME_OFFSET UNITYSDK_OFFSET(0x17F3E390)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_SYNCATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x17F44E90)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F45170)
#define HOUDINIENGINEUNITY_HEU_PARTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3DF70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_TypeDefinitionIndex = 37452;

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

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTID_OFFSET))(this);
		}

		::System::String* get_PartName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTNAME_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_GEOID_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_PartType get_PartType()
		{
			return ((::HoudiniEngineUnity::HAPI_PartType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARTTYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_GeoNode* get_ParentGeoNode()
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_PARENTGEONODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* get_ObjectInstanceInfos()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_OBJECTINSTANCEINFOS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Curve* get_Curve()
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GET_CURVE_OFFSET))(this);
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

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_RECOOK_OFFSET))(this);
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

		::System::Void SetGameObjectName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECTNAME_OFFSET))(this, a1);
		}

		::System::Void SetGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void SetVolumeLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETVOLUMELAYERNAME_OFFSET))(this, a1);
		}

		::System::String* GetVolumeLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETVOLUMELAYERNAME_OFFSET))(this);
		}

		::System::Void DestroyAllData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISUSINGMATERIAL_OFFSET))(this, a1);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUTGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOUTPUT_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void CalculateVisibility(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATEVISIBILITY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CLEARINSTANCES_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Curve* GetCurve(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCURVE_OFFSET))(this, a1);
		}

		::System::Void SetVisiblity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETVISIBLITY_OFFSET))(this, a1);
		}

		::System::Void SetColliderState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETCOLLIDERSTATE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* GetObjectInstanceInfoWithObjectPath(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTPATH_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* GetObjectInstanceInfoWithObjectID(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOWITHOBJECTID_OFFSET))(this, a1);
		}

		::System::Void SetTerrainOffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINOFFSETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetTerrainData(::UnityEngine::TerrainData* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETTERRAINDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::HoudiniEngineUnity::HEU_GeoNode* a5, ::HoudiniEngineUnity::HAPI_PartInfo& a6, ::HoudiniEngineUnity::HEU_PartData_PartOutputType a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_GeoNode*, ::HoudiniEngineUnity::HAPI_PartInfo&, ::HoudiniEngineUnity::HEU_PartData_PartOutputType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_INITIALIZE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void ApplyHAPITransform(::HoudiniEngineUnity::HAPI_Transform& a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_APPLYHAPITRANSFORM_OFFSET))(this, a1);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETDEBUGINFO_OFFSET))(this, a1);
		}

		::System::Void GetClonableObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETCLONABLEPARTS_OFFSET))(this, a1);
		}

		::System::Void SetObjectInstancer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCER_OFFSET))(this, a1);
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

		::System::Boolean GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEPARTINSTANCES_OFFSET))(this, a1);
		}

		::System::Void GenerateInstancesFromObjectID(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenerateInstancesFromObject(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_ObjectNode* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ObjectNode*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenerateInstancesFromObjectIds(::HoudiniEngineUnity::HEU_SessionBase* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMOBJECTIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GenerateInstancesFromUnityAssetPathAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEINSTANCESFROMUNITYASSETPATHATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Void CreateNewInstanceFromObject(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::HoudiniEngineUnity::HAPI_Transform& a4, ::System::Int32 a5, ::System::String* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::Il2CppArray<::System::String*>* a9, ::Il2CppArray<::System::String*>* a10, ::UnityEngine::GameObject* a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HAPI_Transform&, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CREATENEWINSTANCEFROMOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEATTRIBUTESSTORE_OFFSET))(this, a1);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		static ::System::Void CopyGameObjectComponents(::HoudiniEngineUnity::HEU_PartData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* a5, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a6, ::System::Boolean a7, ::System::String*& a8, ::UnityEngine::Object*& a9, ::System::String* a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* a13)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::System::Boolean, ::System::String*&, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_COPYGAMEOBJECTCOMPONENTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void CopyChildGameObjects(::HoudiniEngineUnity::HEU_PartData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* a5, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a6, ::System::Boolean a7, ::System::String*& a8, ::UnityEngine::Object*& a9, ::System::String* a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Boolean a13)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::System::Boolean, ::System::String*&, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_COPYCHILDGAMEOBJECTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::UnityEngine::GameObject* BakePartToNewGameObject(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::String*& a3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* a4, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a5, ::UnityEngine::Object*& a6, ::System::String* a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTONEWGAMEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void BakePartToGameObject(::HoudiniEngineUnity::HEU_PartData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::String*& a9, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* a10, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a11, ::UnityEngine::Object*& a12, ::System::String* a13, ::System::Boolean a14, ::System::Boolean a15)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Void BakePartToGameObject_1(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String*& a5, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>* a6, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* a7, ::UnityEngine::Object*& a8, ::System::String* a9, ::System::Boolean a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*, ::UnityEngine::Object*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_BAKEPARTTOGAMEOBJECT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean GenerateMesh(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GENERATEMESH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ProcessCurvePart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_PROCESSCURVEPART_OFFSET))(this, a1, a2);
		}

		::System::Void SyncAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_PartInfo& a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SYNCATTRIBUTESSTORE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetupAttributeGeometry(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETUPATTRIBUTEGEOMETRY_OFFSET))(this, a1);
		}

		::System::Void DestroyAttributesStore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYATTRIBUTESSTORE_OFFSET))(this);
		}

		::System::Void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_POPULATEOBJECTINSTANCEINFOS_OFFSET))(this, a1);
		}

		::System::Void SetObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_SETOBJECTINSTANCEINFOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* GetObjectInstanceInfos()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_GETOBJECTINSTANCEINFOS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ObjectInstanceInfo* CreateObjectInstanceInfo(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::HoudiniEngineUnity::HEU_ObjectInstanceInfo*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_CREATEOBJECTINSTANCEINFO_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* AppendBakedCloneName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_APPENDBAKEDCLONENAME_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_TOSTRING_OFFSET))(this);
		}

		static ::System::Void DestroyParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPARTS_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyPart(::HoudiniEngineUnity::HEU_PartData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_PartData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_DESTROYPART_OFFSET))(a1, a2);
		}

		static ::System::Boolean ComposeUnityInstanceSplitHierarchy(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Transform* a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::Transform*>*& a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*, ::System::Int32, ::Il2CppArray<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_COMPOSEUNITYINSTANCESPLITHIERARCHY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_PartData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
