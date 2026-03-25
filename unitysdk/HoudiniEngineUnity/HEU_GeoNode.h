#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectNode; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_VolumeCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_GEONODE_APPLYHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x8435A50)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x8436FA0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATEVISIBLITY_OFFSET UNITYSDK_OFFSET(0x8436D10)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CLEAROBJECTINSTANCES_OFFSET UNITYSDK_OFFSET(0x8435900)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x8432DE0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYVOLUMECACHE_OFFSET UNITYSDK_OFFSET(0x84331A0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DISABLEALLCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x8437040)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DOESTHISREQUIREPOTENTIALCOOK_OFFSET UNITYSDK_OFFSET(0x84335D0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x8435670)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEGEOCURVENAME_OFFSET UNITYSDK_OFFSET(0x84359B0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTFULLNAME_OFFSET UNITYSDK_OFFSET(0x84352F0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x84355C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x8436230)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETCURVES_OFFSET UNITYSDK_OFFSET(0x8436890)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x8435B70)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8436680)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x84363C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x8436520)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTFROMPARTID_OFFSET UNITYSDK_OFFSET(0x8436800)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTSBYOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x84353D0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTS_OFFSET UNITYSDK_OFFSET(0x8436A20)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETVOLUMECACHEBYTILEINDEX_OFFSET UNITYSDK_OFFSET(0x84379C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_DISPLAYABLE_OFFSET UNITYSDK_OFFSET(0x8432B60)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_EDITABLE_OFFSET UNITYSDK_OFFSET(0x8432B50)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x841C720)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x8432B30)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOTYPE_OFFSET UNITYSDK_OFFSET(0x8432B40)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_OBJECTNODE_OFFSET UNITYSDK_OFFSET(0x8432BF0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x8432C00)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_VOLUMECACHES_OFFSET UNITYSDK_OFFSET(0x8432C20)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HASATTRIBINSTANCER_OFFSET UNITYSDK_OFFSET(0x8436A30)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HASGEONODECHANGED_OFFSET UNITYSDK_OFFSET(0x84359C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HIDEALLGEOMETRY_OFFSET UNITYSDK_OFFSET(0x8436F00)
#define HOUDINIENGINEUNITY_HEU_GEONODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8433480)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOCURVETYPE_OFFSET UNITYSDK_OFFSET(0x8432BE0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x8432BC0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATEOREDITABLE_OFFSET UNITYSDK_OFFSET(0x8432BA0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATE_OFFSET UNITYSDK_OFFSET(0x8432B90)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x84360F0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x8432B70)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8432D40)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8432D30)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSGEOCURVE_OFFSET UNITYSDK_OFFSET(0x8433E00)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSPART_OFFSET UNITYSDK_OFFSET(0x8434220)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSUNITYSCRIPTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8434EE0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSVOLUMEPARTS_OFFSET UNITYSDK_OFFSET(0x8437100)
#define HOUDINIENGINEUNITY_HEU_GEONODE_REMOVEANDDESTROYPART_OFFSET UNITYSDK_OFFSET(0x8433410)
#define HOUDINIENGINEUNITY_HEU_GEONODE_RESET_OFFSET UNITYSDK_OFFSET(0x8432CB0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETATTRIBUTEMODIFIERSONPARTOUTPUTS_OFFSET UNITYSDK_OFFSET(0x8436B50)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETGEOINFO_OFFSET UNITYSDK_OFFSET(0x8435980)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGAMEOBJECTANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8435060)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGEOCURVEGAMEOBJECTANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8435760)
#define HOUDINIENGINEUNITY_HEU_GEONODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8437A60)
#define HOUDINIENGINEUNITY_HEU_GEONODE_UPDATEGEO_OFFSET UNITYSDK_OFFSET(0x8433620)
#define HOUDINIENGINEUNITY_HEU_GEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8432C30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoNode_TypeDefinitionIndex = 37619;

	class HEU_GeoNode : public ::UnityEngine::ScriptableObject
	{
	public:
		::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo; // 0x18
		::System::String* _geoName; // 0x38
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* _parts; // 0x40
		::HoudiniEngineUnity::HEU_ObjectNode* _containerObjectNode; // 0x48
		::HoudiniEngineUnity::HEU_InputNode* _inputNode; // 0x50
		::HoudiniEngineUnity::HEU_Curve* _geoCurve; // 0x58
		::HoudiniEngineUnity::HEU_VolumeCache* _volumeCache; // 0x60
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* _volumeCaches; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOID_OFFSET))(this);
		}

		::System::String* get_GeoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEONAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_GeoType get_GeoType()
		{
			return ((::HoudiniEngineUnity::HAPI_GeoType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOTYPE_OFFSET))(this);
		}

		::System::Boolean get_Editable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_EDITABLE_OFFSET))(this);
		}

		::System::Boolean get_Displayable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_DISPLAYABLE_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsIntermediate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATE_OFFSET))(this);
		}

		::System::Boolean IsIntermediateOrEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATEOREDITABLE_OFFSET))(this);
		}

		::System::Boolean IsGeoInputType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOINPUTTYPE_OFFSET))(this);
		}

		::System::Boolean IsGeoCurveType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOCURVETYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ObjectNode* get_ObjectNode()
		{
			return ((::HoudiniEngineUnity::HEU_ObjectNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_OBJECTNODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* get_VolumeCaches()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_VOLUMECACHES_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void DestroyAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYALLDATA_OFFSET))(this);
		}

		::System::Void RemoveAndDestroyPart(::HoudiniEngineUnity::HEU_PartData* part)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_REMOVEANDDESTROYPART_OFFSET))(this, part);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_RESET_OFFSET))(this);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo, ::HoudiniEngineUnity::HEU_ObjectNode* containerObjectNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo, ::HoudiniEngineUnity::HEU_ObjectNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_INITIALIZE_OFFSET))(this, session, geoInfo, containerObjectNode);
		}

		::System::Boolean DoesThisRequirePotentialCook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DOESTHISREQUIREPOTENTIALCOOK_OFFSET))(this);
		}

		::System::Void UpdateGeo(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_UPDATEGEO_OFFSET))(this, session);
		}

		::System::Void ProcessUnityScriptAttribute(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSUNITYSCRIPTATTRIBUTE_OFFSET))(this, session);
		}

		::System::Void ProcessPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 partID, ::HoudiniEngineUnity::HAPI_PartInfo& partInfo, ::HoudiniEngineUnity::HEU_PartData*& partData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo&, ::HoudiniEngineUnity::HEU_PartData*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSPART_OFFSET))(this, session, partID, partInfo, partData);
		}

		::System::Void SetupGameObjectAndTransform(::HoudiniEngineUnity::HEU_PartData* partData, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PartData*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGAMEOBJECTANDTRANSFORM_OFFSET))(this, partData, parentAsset);
		}

		::System::Void GetPartsByOutputType(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* meshParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTSBYOUTPUTTYPE_OFFSET))(this, meshParts, volumeParts);
		}

		::System::Void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTINSTANCES_OFFSET))(this, session);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEATTRIBUTESSTORE_OFFSET))(this, session);
		}

		::System::Void ProcessGeoCurve(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSGEOCURVE_OFFSET))(this, session);
		}

		::System::Void SetupGeoCurveGameObjectAndTransform(::HoudiniEngineUnity::HEU_Curve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGEOCURVEGAMEOBJECTANDTRANSFORM_OFFSET))(this, curve);
		}

		::System::Void ClearObjectInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CLEAROBJECTINSTANCES_OFFSET))(this);
		}

		::System::Void SetGeoInfo(::HoudiniEngineUnity::HAPI_GeoInfo geoInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETGEOINFO_OFFSET))(this, geoInfo);
		}

		::System::String* GeneratePartFullName(::System::String* partName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTFULLNAME_OFFSET))(this, partName);
		}

		::System::String* GenerateGeoCurveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEGEOCURVENAME_OFFSET))(this);
		}

		::System::Boolean HasGeoNodeChanged(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HASGEONODECHANGED_OFFSET))(this, session);
		}

		::System::Void ApplyHAPITransform(::HoudiniEngineUnity::HAPI_Transform& hapiTransform)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_APPLYHAPITRANSFORM_OFFSET))(this, hapiTransform);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETDEBUGINFO_OFFSET))(this, sb);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISUSINGMATERIAL_OFFSET))(this, materialData);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETCLONABLEPARTS_OFFSET))(this, clonableParts);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUTGAMEOBJECTS_OFFSET))(this, outputObjects);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUT_OFFSET))(this, outputs);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, outputGameObject);
		}

		::HoudiniEngineUnity::HEU_PartData* GetPartFromPartID(::System::Int32 partID)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTFROMPARTID_OFFSET))(this, partID);
		}

		::System::Void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* curves, ::System::Boolean bEditableOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETCURVES_OFFSET))(this, curves, bEditableOnly);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* GetParts()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTS_OFFSET))(this);
		}

		::System::Boolean HasAttribInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HASATTRIBINSTANCER_OFFSET))(this);
		}

		::System::Void SetAttributeModifiersOnPartOutputs(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETATTRIBUTEMODIFIERSONPARTOUTPUTS_OFFSET))(this, session);
		}

		::System::Void CalculateVisiblity(::System::Boolean bParentVisibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATEVISIBLITY_OFFSET))(this, bParentVisibility);
		}

		::System::Void HideAllGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HIDEALLGEOMETRY_OFFSET))(this);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		::System::Void DisableAllColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DISABLEALLCOLLIDERS_OFFSET))(this);
		}

		::System::Void ProcessVolumeParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts, ::System::Boolean bRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSVOLUMEPARTS_OFFSET))(this, session, volumeParts, bRebuild);
		}

		::HoudiniEngineUnity::HEU_VolumeCache* GetVolumeCacheByTileIndex(::System::Int32 tileIndex)
		{
			return ((::HoudiniEngineUnity::HEU_VolumeCache*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETVOLUMECACHEBYTILEINDEX_OFFSET))(this, tileIndex);
		}

		::System::Void DestroyVolumeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYVOLUMECACHE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_TOSTRING_OFFSET))(this);
		}
	};
}
