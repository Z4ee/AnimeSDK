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

#define HOUDINIENGINEUNITY_HEU_GEONODE_APPLYHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x1503F960)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x150406C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATEVISIBLITY_OFFSET UNITYSDK_OFFSET(0x15040410)
#define HOUDINIENGINEUNITY_HEU_GEONODE_CLEAROBJECTINSTANCES_OFFSET UNITYSDK_OFFSET(0x1503F740)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x1503C830)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYVOLUMECACHE_OFFSET UNITYSDK_OFFSET(0x1503CA60)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DISABLEALLCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1503D3F0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_DOESTHISREQUIREPOTENTIALCOOK_OFFSET UNITYSDK_OFFSET(0x1503D6C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x1503F4A0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEGEOCURVENAME_OFFSET UNITYSDK_OFFSET(0x1503F7E0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTFULLNAME_OFFSET UNITYSDK_OFFSET(0x1503EDB0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x1503F100)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x15040030)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETCURVES_OFFSET UNITYSDK_OFFSET(0x1503D100)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1503FA60)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1503CEC0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1503CCC0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1503CDC0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTFROMPARTID_OFFSET UNITYSDK_OFFSET(0x1503D070)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTSBYOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1503EE50)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTS_OFFSET UNITYSDK_OFFSET(0x1503D350)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETSESSION_OFFSET UNITYSDK_OFFSET(0x1503C720)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GETVOLUMECACHEBYTILEINDEX_OFFSET UNITYSDK_OFFSET(0x1503D4A0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_DISPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1503C480)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_EDITABLE_OFFSET UNITYSDK_OFFSET(0x1503C470)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOCURVE_OFFSET UNITYSDK_OFFSET(0x1503C4F0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x150026C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOINFO_OFFSET UNITYSDK_OFFSET(0x1503C430)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x1503C450)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOTYPE_OFFSET UNITYSDK_OFFSET(0x1503C460)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_INPUTNODE_OFFSET UNITYSDK_OFFSET(0x1503C4E0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_OBJECTNODE_OFFSET UNITYSDK_OFFSET(0x1503C4D0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x1503C410)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARTS_OFFSET UNITYSDK_OFFSET(0x1503C4C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_GET_VOLUMECACHES_OFFSET UNITYSDK_OFFSET(0x1503C500)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HASATTRIBINSTANCER_OFFSET UNITYSDK_OFFSET(0x15040130)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HASGEONODECHANGED_OFFSET UNITYSDK_OFFSET(0x1503F7F0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_HIDEALLGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1503D360)
#define HOUDINIENGINEUNITY_HEU_GEONODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1503D540)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x15041030)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1503C820)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISGEOINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1503C800)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATEOREDITABLE_OFFSET UNITYSDK_OFFSET(0x1503C7E0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISINTERMEDIATE_OFFSET UNITYSDK_OFFSET(0x1503C7D0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1503FF00)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1503C7B0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1503C620)
#define HOUDINIENGINEUNITY_HEU_GEONODE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1503C610)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSGEOCURVE_OFFSET UNITYSDK_OFFSET(0x1503DE00)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSPART_OFFSET UNITYSDK_OFFSET(0x1503E050)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSUNITYSCRIPTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1503E9C0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSVOLUMEPARTS_OFFSET UNITYSDK_OFFSET(0x15040740)
#define HOUDINIENGINEUNITY_HEU_GEONODE_RECOOK_OFFSET UNITYSDK_OFFSET(0x1503C7A0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_REMOVEANDDESTROYPART_OFFSET UNITYSDK_OFFSET(0x1503CC30)
#define HOUDINIENGINEUNITY_HEU_GEONODE_RESET_OFFSET UNITYSDK_OFFSET(0x1503C590)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETATTRIBUTEMODIFIERSONPARTOUTPUTS_OFFSET UNITYSDK_OFFSET(0x15040210)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETGEOINFO_OFFSET UNITYSDK_OFFSET(0x1503F7B0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGAMEOBJECTANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1503EB40)
#define HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGEOCURVEGAMEOBJECTANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1503F570)
#define HOUDINIENGINEUNITY_HEU_GEONODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15040FD0)
#define HOUDINIENGINEUNITY_HEU_GEONODE_UPDATEGEO_OFFSET UNITYSDK_OFFSET(0x1503D770)
#define HOUDINIENGINEUNITY_HEU_GEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1503C510)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoNode_TypeDefinitionIndex = 38234;

	class HEU_GeoNode : public ::UnityEngine::ScriptableObject
	{
	public:
		::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo; // 0x18
		::System::String* _geoName; // 0x40
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* _parts; // 0x48
		::HoudiniEngineUnity::HEU_ObjectNode* _containerObjectNode; // 0x50
		::HoudiniEngineUnity::HEU_InputNode* _inputNode; // 0x58
		::HoudiniEngineUnity::HEU_Curve* _geoCurve; // 0x60
		::HoudiniEngineUnity::HEU_VolumeCache* _volumeCache; // 0x68
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* _volumeCaches; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOID_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_GeoInfo get_GeoInfo()
		{
			return ((::HoudiniEngineUnity::HAPI_GeoInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOINFO_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* get_Parts()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_PARTS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ObjectNode* get_ObjectNode()
		{
			return ((::HoudiniEngineUnity::HEU_ObjectNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_OBJECTNODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputNode* get_InputNode()
		{
			return ((::HoudiniEngineUnity::HEU_InputNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_INPUTNODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Curve* get_GeoCurve()
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GET_GEOCURVE_OFFSET))(this);
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

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_RECOOK_OFFSET))(this);
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

		::System::Void DestroyAllData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::System::Void RemoveAndDestroyPart(::HoudiniEngineUnity::HEU_PartData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PartData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_REMOVEANDDESTROYPART_OFFSET))(this, a1);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUTGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETOUTPUT_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_PartData* GetPartFromPartID(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTFROMPARTID_OFFSET))(this, a1);
		}

		::System::Void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETCURVES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* GetParts()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTS_OFFSET))(this);
		}

		::System::Void HideAllGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HIDEALLGEOMETRY_OFFSET))(this);
		}

		::System::Void DisableAllColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DISABLEALLCOLLIDERS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_VolumeCache* GetVolumeCacheByTileIndex(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_VolumeCache*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETVOLUMECACHEBYTILEINDEX_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_RESET_OFFSET))(this);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_GeoInfo a2, ::HoudiniEngineUnity::HEU_ObjectNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo, ::HoudiniEngineUnity::HEU_ObjectNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DoesThisRequirePotentialCook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DOESTHISREQUIREPOTENTIALCOOK_OFFSET))(this);
		}

		::System::Void UpdateGeo(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_UPDATEGEO_OFFSET))(this, a1);
		}

		::System::Void ProcessUnityScriptAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSUNITYSCRIPTATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ProcessPart(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_PartInfo& a3, ::HoudiniEngineUnity::HEU_PartData*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo&, ::HoudiniEngineUnity::HEU_PartData*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSPART_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupGameObjectAndTransform(::HoudiniEngineUnity::HEU_PartData* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PartData*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGAMEOBJECTANDTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void GetPartsByOutputType(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETPARTSBYOUTPUTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTINSTANCES_OFFSET))(this, a1);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEATTRIBUTESSTORE_OFFSET))(this, a1);
		}

		::System::Void ProcessGeoCurve(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSGEOCURVE_OFFSET))(this, a1);
		}

		::System::Void SetupGeoCurveGameObjectAndTransform(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETUPGEOCURVEGAMEOBJECTANDTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void ClearObjectInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CLEAROBJECTINSTANCES_OFFSET))(this);
		}

		::System::Void SetGeoInfo(::HoudiniEngineUnity::HAPI_GeoInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETGEOINFO_OFFSET))(this, a1);
		}

		::System::String* GeneratePartFullName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEPARTFULLNAME_OFFSET))(this, a1);
		}

		::System::String* GenerateGeoCurveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GENERATEGEOCURVENAME_OFFSET))(this);
		}

		::System::Boolean HasGeoNodeChanged(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HASGEONODECHANGED_OFFSET))(this, a1);
		}

		::System::Void ApplyHAPITransform(::HoudiniEngineUnity::HAPI_Transform& a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_APPLYHAPITRANSFORM_OFFSET))(this, a1);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETDEBUGINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISUSINGMATERIAL_OFFSET))(this, a1);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_GETCLONABLEPARTS_OFFSET))(this, a1);
		}

		::System::Boolean HasAttribInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_HASATTRIBINSTANCER_OFFSET))(this);
		}

		::System::Void SetAttributeModifiersOnPartOutputs(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_SETATTRIBUTEMODIFIERSONPARTOUTPUTS_OFFSET))(this, a1);
		}

		::System::Void CalculateVisiblity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATEVISIBLITY_OFFSET))(this, a1);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		::System::Void ProcessVolumeParts(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_PROCESSVOLUMEPARTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DestroyVolumeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_DESTROYVOLUMECACHE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_GeoNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeoNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEONODE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
