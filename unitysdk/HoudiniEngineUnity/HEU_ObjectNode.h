#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeoNode; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectInstanceInfo; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_APPLYOBJECTTRANSFORMTOGEONODES_OFFSET UNITYSDK_OFFSET(0x11A6F370)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x11A47770)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x11A47570)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CLEAROBJECTINSTANCES_OFFSET UNITYSDK_OFFSET(0x11A41FF0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CREATEGEONODE_OFFSET UNITYSDK_OFFSET(0x11A6DE30)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x11A28070)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_DISABLEALLCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x11A2DBA0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GATHERALLASSETOUTPUTSLEGACY_OFFSET UNITYSDK_OFFSET(0x11A6DED0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x11A41DF0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x11A414B0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEOBJECTINSTANCES_OFFSET UNITYSDK_OFFSET(0x11A422A0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x11A421A0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x11A46510)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCURVES_OFFSET UNITYSDK_OFFSET(0x11A6D970)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x11A6EC20)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETGEONODE_OFFSET UNITYSDK_OFFSET(0x11A490E0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11A2D300)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x11A2BF90)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGEONODES_OFFSET UNITYSDK_OFFSET(0x11A2D020)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x11A2C190)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETSESSION_OFFSET UNITYSDK_OFFSET(0x11A6D8F0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_GEONODES_OFFSET UNITYSDK_OFFSET(0x11A6D8C0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x11A43A40)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTINFO_OFFSET UNITYSDK_OFFSET(0x11A6D8A0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x11A6D890)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A6D8D0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x11A6D880)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_HIDEALLGEOMETRY_OFFSET UNITYSDK_OFFSET(0x11A2D9C0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11A41150)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x11A71DB0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCED_OFFSET UNITYSDK_OFFSET(0x11A464F0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x11A41EF0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x11A46180)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x11A46500)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_POPULATEOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x11A46E40)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_PROCESSUNITYSCRIPTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x11A36BF0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_RECOOK_OFFSET UNITYSDK_OFFSET(0x11A6D960)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_RESET_OFFSET UNITYSDK_OFFSET(0x11A6DBE0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_SETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x11A6EF30)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_SYNCWITHOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x11A6DCE0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A71D50)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_UPDATEOBJECT_OFFSET UNITYSDK_OFFSET(0x11A40420)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6DA80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ObjectNode_TypeDefinitionIndex = 39118;

	class HEU_ObjectNode : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _objName; // 0x18
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x20
		::HoudiniEngineUnity::HAPI_ObjectInfo _objectInfo; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* _geoNodes; // 0x48
		::HoudiniEngineUnity::HAPI_Transform _objectTransform; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* _recentlyDestroyedParts; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Int32 get_ObjectID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTID_OFFSET))(this);
		}

		::System::String* get_ObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTNAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_ObjectInfo get_ObjectInfo()
		{
			return ((::HoudiniEngineUnity::HAPI_ObjectInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* get_GeoNodes()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_GEONODES_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_Transform get_ObjectTransform()
		{
			return ((::HoudiniEngineUnity::HAPI_Transform(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTTRANSFORM_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_RECOOK_OFFSET))(this);
		}

		::System::Boolean IsInstanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCED_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISUSINGMATERIAL_OFFSET))(this, a1);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUT_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_GeoNode* GetGeoNode(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETGEONODE_OFFSET))(this, a1);
		}

		::System::Void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCURVES_OFFSET))(this, a1, a2);
		}

		::System::Void GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGEONODES_OFFSET))(this, a1);
		}

		::System::Void HideAllGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_HIDEALLGEOMETRY_OFFSET))(this);
		}

		::System::Void DisableAllColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_DISABLEALLCOLLIDERS_OFFSET))(this);
		}

		::System::Boolean IsInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_RESET_OFFSET))(this);
		}

		::System::Void SyncWithObjectInfo(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_SYNCWITHOBJECTINFO_OFFSET))(this, a1);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_ObjectInfo a2, ::HoudiniEngineUnity::HAPI_Transform a3, ::HoudiniEngineUnity::HEU_HoudiniAsset* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ObjectInfo, ::HoudiniEngineUnity::HAPI_Transform, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_INITIALIZE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GatherAllAssetOutputsLegacy(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_ObjectInfo a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ObjectInfo, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GATHERALLASSETOUTPUTSLEGACY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyAllData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_GeoNode* CreateGeoNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_GeoInfo a2)
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CREATEGEONODE_OFFSET))(this, a1, a2);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETDEBUGINFO_OFFSET))(this, a1);
		}

		::System::Void SetObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ObjectInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_SETOBJECTINFO_OFFSET))(this, a1);
		}

		::System::Void UpdateObject(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_UPDATEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateGeometry(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEGEOMETRY_OFFSET))(this, a1, a2);
		}

		::System::Void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEPARTINSTANCES_OFFSET))(this, a1);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEATTRIBUTESSTORE_OFFSET))(this, a1);
		}

		::System::Void ApplyObjectTransformToGeoNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_APPLYOBJECTTRANSFORMTOGEONODES_OFFSET))(this);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCLONABLEPARTS_OFFSET))(this, a1);
		}

		::System::Void GenerateObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEOBJECTINSTANCES_OFFSET))(this, a1);
		}

		::System::Void ClearObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CLEAROBJECTINSTANCES_OFFSET))(this, a1);
		}

		::System::Void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_POPULATEOBJECTINSTANCEINFOS_OFFSET))(this, a1);
		}

		::System::Void ProcessUnityScriptAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_PROCESSUNITYSCRIPTATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void CalculateVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATEVISIBILITY_OFFSET))(this);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ObjectNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
