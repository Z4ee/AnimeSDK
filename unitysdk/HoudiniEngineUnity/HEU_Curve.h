#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_CurveType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_CurveDataType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Curve_CurveEditState.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Curve_Interaction.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputCurveInfo; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_CURVE_ADDCURVEPOINTTOEND_1_OFFSET UNITYSDK_OFFSET(0x1B3D5A00)
#define HOUDINIENGINEUNITY_HEU_CURVE_ADDCURVEPOINTTOEND_OFFSET UNITYSDK_OFFSET(0x1B3D58F0)
#define HOUDINIENGINEUNITY_HEU_CURVE_CLEARCURVENODEDATA_OFFSET UNITYSDK_OFFSET(0x1B3D5B40)
#define HOUDINIENGINEUNITY_HEU_CURVE_CREATESETUPCURVE_OFFSET UNITYSDK_OFFSET(0x1B3D6CB0)
#define HOUDINIENGINEUNITY_HEU_CURVE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x1B3D7F40)
#define HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADASDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B3DE5C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B3DDE60)
#define HOUDINIENGINEUNITY_HEU_CURVE_DUPLICATECURVENODEDATA_OFFSET UNITYSDK_OFFSET(0x1B3D6A60)
#define HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESHFORSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3D9820)
#define HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x1B3D8D80)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTS_OFFSET UNITYSDK_OFFSET(0x1B3D5630)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1B3D5620)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETCURVECOUNTINDEXFROMPOSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x1B3DDFF0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETCURVECOUNTS_OFFSET UNITYSDK_OFFSET(0x1B3D8910)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1B3D74E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x1B3D55A0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3DE3C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3DE340)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETNUMPOINTS_OFFSET UNITYSDK_OFFSET(0x1B3D57A0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETORDERFORCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1B3C1D00)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B3DC820)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_OFFSET UNITYSDK_OFFSET(0x1B3DE090)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETSESSION_OFFSET UNITYSDK_OFFSET(0x1B3D5340)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINTS_OFFSET UNITYSDK_OFFSET(0x1B3D6880)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINT_OFFSET UNITYSDK_OFFSET(0x1B3D66D0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3D6800)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1B3DE440)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1B3D5330)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENAME_OFFSET UNITYSDK_OFFSET(0x1B3D52C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENODEDATA_OFFSET UNITYSDK_OFFSET(0x1B3D52A0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_EDITSTATE_OFFSET UNITYSDK_OFFSET(0x1B3D5310)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x1B3D5280)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_INPUTCURVEINFO_OFFSET UNITYSDK_OFFSET(0x1B3D52F0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_ISINPUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B3D52D0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_ISPARTCURVE_OFFSET UNITYSDK_OFFSET(0x1B3D52E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B3D52B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x1B3D5320)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x1B3D5290)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_TARGETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3D5260)
#define HOUDINIENGINEUNITY_HEU_CURVE_INSERTCURVEPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B3D5890)
#define HOUDINIENGINEUNITY_HEU_CURVE_INSERTCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x1B3D57C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISEDITABLE_OFFSET UNITYSDK_OFFSET(0x1B3D53D0)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B3DE720)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISGEOCURVE_OFFSET UNITYSDK_OFFSET(0x1B3D53E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISMESHCURVE_OFFSET UNITYSDK_OFFSET(0x1B3D8CC0)
#define HOUDINIENGINEUNITY_HEU_CURVE_ONPRESYNCPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B3D8380)
#define HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3D5C00)
#define HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1B3D5BB0)
#define HOUDINIENGINEUNITY_HEU_CURVE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B3D53C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_RECOOK_OFFSET UNITYSDK_OFFSET(0x1B3D53B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_REMOVECURVEPOINT_OFFSET UNITYSDK_OFFSET(0x1B3D5AA0)
#define HOUDINIENGINEUNITY_HEU_CURVE_RESETCURVEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B3D83B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3D6630)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B3D6580)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENAME_OFFSET UNITYSDK_OFFSET(0x1B3D53F0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENODEDATA_OFFSET UNITYSDK_OFFSET(0x1B3D5590)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x1B3D84B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B3D5470)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x1B3D5410)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETEDITSTATE_OFFSET UNITYSDK_OFFSET(0x1B3DE330)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETUPLOADPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x1B3D5300)
#define HOUDINIENGINEUNITY_HEU_CURVE_SET_TARGETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3D5270)
#define HOUDINIENGINEUNITY_HEU_CURVE_SHOULDKEEPNODE_OFFSET UNITYSDK_OFFSET(0x1B3D7F00)
#define HOUDINIENGINEUNITY_HEU_CURVE_SYNCFROMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B3DCC00)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATECACHEDCURVEINFO_OFFSET UNITYSDK_OFFSET(0x1B3D76C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVEINPUTFORCURVEPARTS_OFFSET UNITYSDK_OFFSET(0x1B3DBB10)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVEINPUTFORCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B3D9DA0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVE_OFFSET UNITYSDK_OFFSET(0x1B3D85A0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B3DCFB0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x1B3D8160)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B3DE450)
#define HOUDINIENGINEUNITY_HEU_CURVE_USEPREVIOUSCURVEDATA_OFFSET UNITYSDK_OFFSET(0x1B3D7B60)
#define HOUDINIENGINEUNITY_HEU_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DEA20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_TypeDefinitionIndex = 39083;

	class HEU_Curve : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::HoudiniEngineUnity::HEU_Curve_Interaction* StaticGet_PreferredNextInteractionMode()
		{
			return (::HoudiniEngineUnity::HEU_Curve_Interaction*)Il2CppClass::FromTypeDefinitionIndex(HEU_Curve_TypeDefinitionIndex)->GetStaticField(0x156E0);
		}
		::System::Int32 _geoID; // 0x18
		::System::Int32 _partID; // 0x1C
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* _curveNodeData; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x28
		::System::Boolean _isEditable; // 0x30
		::HoudiniEngineUnity::HEU_Parameters* _parameters; // 0x38
		::System::Boolean _bUploadParameterPreset; // 0x40
		::System::String* _curveName; // 0x48
		::UnityEngine::GameObject* _targetGameObject; // 0x50
		::System::Boolean _isGeoCurve; // 0x58
		::HoudiniEngineUnity::HEU_Curve_CurveEditState _editState; // 0x5C
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x60
		::System::Boolean _bIsInputCurve; // 0x68
		::System::Boolean _bIsPartCurve; // 0x69
		::System::Boolean _cachedCurveInfoValid; // 0x6A
		::Il2CppArray<::System::Int32>* _cachedCurveCounts; // 0x70
		::Il2CppArray<::System::Int32>* _cachedCurveCountSums; // 0x78
		::HoudiniEngineUnity::HEU_CurveDataType _curveDataType; // 0x80
		::HoudiniEngineUnity::HEU_InputCurveInfo* _inputCurveInfo; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_TargetGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_TARGETGAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SET_TARGETGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_GEOID_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_PARTID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* get_CurveNodeData()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENODEDATA_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Parameters* get_Parameters()
		{
			return ((::HoudiniEngineUnity::HEU_Parameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::String* get_CurveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENAME_OFFSET))(this);
		}

		::System::Boolean get_IsInputCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_ISINPUTCURVE_OFFSET))(this);
		}

		::System::Boolean get_IsPartCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_ISPARTCURVE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputCurveInfo* get_InputCurveInfo()
		{
			return ((::HoudiniEngineUnity::HEU_InputCurveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_INPUTCURVEINFO_OFFSET))(this);
		}

		::System::Void SetUploadParameterPreset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETUPLOADPARAMETERPRESET_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_Curve_CurveEditState get_EditState()
		{
			return ((::HoudiniEngineUnity::HEU_Curve_CurveEditState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_EDITSTATE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_PARENTASSET_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_CurveDataType get_CurveDataType()
		{
			return ((::HoudiniEngineUnity::HEU_CurveDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVEDATATYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_RECOOK_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_REBUILD_OFFSET))(this);
		}

		::System::Boolean IsEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISEDITABLE_OFFSET))(this);
		}

		::System::Boolean IsGeoCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISGEOCURVE_OFFSET))(this);
		}

		::System::Void SetCurveName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENAME_OFFSET))(this, a1);
		}

		::System::Void SetCurvePoint(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCurvePoint_1(::System::Int32 a1, ::HoudiniEngineUnity::CurveNodeData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::CurveNodeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCurveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENODEDATA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetCurvePoint(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEPOINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* GetAllPointTransforms()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTTRANSFORMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAllPoints()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTS_OFFSET))(this);
		}

		::System::Int32 GetNumPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETNUMPOINTS_OFFSET))(this);
		}

		::System::Void InsertCurvePoint(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_INSERTCURVEPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InsertCurvePoint_1(::System::Int32 a1, ::HoudiniEngineUnity::CurveNodeData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::CurveNodeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_INSERTCURVEPOINT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddCurvePointToEnd(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ADDCURVEPOINTTOEND_OFFSET))(this, a1, a2);
		}

		::System::Void AddCurvePointToEnd_1(::HoudiniEngineUnity::CurveNodeData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ADDCURVEPOINTTOEND_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCurvePoint(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_REMOVECURVEPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearCurveNodeData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_CLEARCURVENODEDATA_OFFSET))(this, a1);
		}

		::System::Void ProjectToColliders(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCurveGeometryVisibility(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetTransformedPoint(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetTransformedPoints()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* DuplicateCurveNodeData()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DUPLICATECURVENODEDATA_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_Curve* CreateSetupCurve(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Boolean a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_CREATESETUPCURVE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void UsePreviousCurveData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_USEPREVIOUSCURVEDATA_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_CurveDataType GetCurveDataType(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::HoudiniEngineUnity::HEU_CurveDataType(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEDATATYPE_OFFSET))(this, a1);
		}

		::System::Boolean ShouldKeepNode(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SHOULDKEEPNODE_OFFSET))(this, a1);
		}

		::System::Void DestroyAllData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::System::Void UploadParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_HoudiniAsset* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPARAMETERPRESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetCurveParameters(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_RESETCURVEPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::Void SetCurveParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPARAMETERPRESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateCurve(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVE_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* GetCurveCounts(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETCURVECOUNTS_OFFSET))(a1, a2, a3);
		}

		::System::Void GenerateMesh(::UnityEngine::GameObject* a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESH_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateMeshForSingleObject(::UnityEngine::GameObject* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESHFORSINGLEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPresyncParameters(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ONPRESYNCPARAMETERS_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 GetOrderForCurveType(::System::Int32 a1, ::HoudiniEngineUnity::HAPI_CurveType a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::HoudiniEngineUnity::HAPI_CurveType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETORDERFORCURVETYPE_OFFSET))(a1, a2);
		}

		::System::Boolean UpdateCurveInputForCurveParts(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVEINPUTFORCURVEPARTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean UpdateCurveInputForCustomAttributes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVEINPUTFORCUSTOMATTRIBUTES_OFFSET))(this, a1, a2);
		}

		::System::Void SyncFromParameters(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SYNCFROMPARAMETERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdatePoints(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATEPOINTS_OFFSET))(this, a1);
		}

		::System::Void ProjectToCollidersInternal(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERSINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* GetPointsString(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_OFFSET))(a1);
		}

		static ::System::String* GetPointsString_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_1_OFFSET))(a1);
		}

		::System::Void SetEditState(::HoudiniEngineUnity::HEU_Curve_CurveEditState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve_CurveEditState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETEDITSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetTransformedPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetInvertedTransformedPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetInvertedTransformedDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDDIRECTION_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetVertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETVERTICES_OFFSET))(this);
		}

		::System::Void SetCurveGeometryVisibilityInternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITYINTERNAL_OFFSET))(this, a1);
		}

		::System::Void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADASDEFAULTPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateCachedCurveInfo(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATECACHEDCURVEINFO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCurveCountIndexFromPositionIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETCURVECOUNTINDEXFROMPOSITIONINDEX_OFFSET))(this, a1);
		}

		static ::System::Boolean IsMeshCurve(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISMESHCURVE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
