#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Curve_CurveEditState.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Curve_Interaction.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_CURVE_CREATESETUPCURVE_OFFSET UNITYSDK_OFFSET(0x84187E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x84188F0)
#define HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADASDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x841AD00)
#define HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x8419B10)
#define HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x8418F10)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTS_OFFSET UNITYSDK_OFFSET(0x841A940)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x841A8E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x841AB70)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDPOSITION_OFFSET UNITYSDK_OFFSET(0x841AAF0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETNUMPOINTS_OFFSET UNITYSDK_OFFSET(0x841A950)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_OFFSET UNITYSDK_OFFSET(0x841A5B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINT_OFFSET UNITYSDK_OFFSET(0x841A970)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOSITION_OFFSET UNITYSDK_OFFSET(0x841AA70)
#define HOUDINIENGINEUNITY_HEU_CURVE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x841ABF0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENAME_OFFSET UNITYSDK_OFFSET(0x84187B0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_EDITSTATE_OFFSET UNITYSDK_OFFSET(0x84187D0)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x8418770)
#define HOUDINIENGINEUNITY_HEU_CURVE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x8418790)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISEDITABLE_OFFSET UNITYSDK_OFFSET(0x8418780)
#define HOUDINIENGINEUNITY_HEU_CURVE_ISGEOCURVE_OFFSET UNITYSDK_OFFSET(0x84187C0)
#define HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x8419B70)
#define HOUDINIENGINEUNITY_HEU_CURVE_RESETCURVEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8418BB0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x841AC00)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENAME_OFFSET UNITYSDK_OFFSET(0x8418AA0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x8418C40)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x841A870)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETEDITSTATE_OFFSET UNITYSDK_OFFSET(0x841A860)
#define HOUDINIENGINEUNITY_HEU_CURVE_SETUPLOADPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x84187A0)
#define HOUDINIENGINEUNITY_HEU_CURVE_SYNCFROMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8419470)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVE_OFFSET UNITYSDK_OFFSET(0x8418CC0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPARAMETERPRESET_OFFSET UNITYSDK_OFFSET(0x8418AC0)
#define HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x841ACA0)
#define HOUDINIENGINEUNITY_HEU_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x841AD60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_TypeDefinitionIndex = 37613;

	class HEU_Curve : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::HoudiniEngineUnity::HEU_Curve_Interaction* StaticGet_PreferredNextInteractionMode()
		{
			return (::HoudiniEngineUnity::HEU_Curve_Interaction*)Il2CppClass::FromTypeDefinitionIndex(HEU_Curve_TypeDefinitionIndex)->GetStaticField(0x131D0);
		}
		::System::Int32 _geoID; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _points; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x28
		::System::Boolean _isEditable; // 0x30
		::HoudiniEngineUnity::HEU_Parameters* _parameters; // 0x38
		::System::Boolean _bUploadParameterPreset; // 0x40
		::System::String* _curveName; // 0x48
		::UnityEngine::GameObject* _targetGameObject; // 0x50
		::System::Boolean _isGeoCurve; // 0x58
		::HoudiniEngineUnity::HEU_Curve_CurveEditState _editState; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_GEOID_OFFSET))(this);
		}

		::System::Boolean IsEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISEDITABLE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Parameters* get_Parameters()
		{
			return ((::HoudiniEngineUnity::HEU_Parameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void SetUploadParameterPreset(::System::Boolean bValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETUPLOADPARAMETERPRESET_OFFSET))(this, bValue);
		}

		::System::String* get_CurveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_CURVENAME_OFFSET))(this);
		}

		::System::Boolean IsGeoCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_ISGEOCURVE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Curve_CurveEditState get_EditState()
		{
			return ((::HoudiniEngineUnity::HEU_Curve_CurveEditState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GET_EDITSTATE_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_Curve* CreateSetupCurve(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::System::Boolean isEditable, ::System::String* curveName, ::System::Int32 geoID, ::System::Boolean bGeoCurve)
		{
			return ((::HoudiniEngineUnity::HEU_Curve*(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_CREATESETUPCURVE_OFFSET))(parentAsset, isEditable, curveName, geoID, bGeoCurve);
		}

		::System::Void DestroyAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DESTROYALLDATA_OFFSET))(this);
		}

		::System::Void SetCurveName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVENAME_OFFSET))(this, name);
		}

		::System::Void UploadParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPARAMETERPRESET_OFFSET))(this, session, geoID, parentAsset);
		}

		::System::Void ResetCurveParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_RESETCURVEPARAMETERS_OFFSET))(this, session, parentAsset);
		}

		::System::Void SetCurveParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::Il2CppArray<::System::Byte>* parameterPreset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPARAMETERPRESET_OFFSET))(this, session, parentAsset, parameterPreset);
		}

		::System::Void UpdateCurve(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 partID)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPDATECURVE_OFFSET))(this, session, partID);
		}

		::System::Void GenerateMesh(::UnityEngine::GameObject* inGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GENERATEMESH_OFFSET))(this, inGameObject);
		}

		::System::Void SyncFromParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SYNCFROMPARAMETERS_OFFSET))(this, session, parentAsset);
		}

		::System::Void ProjectToColliders(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::UnityEngine::Vector3 rayDirection, ::System::Single rayDistance)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_PROJECTTOCOLLIDERS_OFFSET))(this, parentAsset, rayDirection, rayDistance);
		}

		static ::System::String* GetPointsString(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETPOINTSSTRING_OFFSET))(points);
		}

		::System::Void SetEditState(::HoudiniEngineUnity::HEU_Curve_CurveEditState editState)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve_CurveEditState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETEDITSTATE_OFFSET))(this, editState);
		}

		::System::Void SetCurvePoint(::System::Int32 pointIndex, ::UnityEngine::Vector3 newPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEPOINT_OFFSET))(this, pointIndex, newPosition);
		}

		::UnityEngine::Vector3 GetCurvePoint(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETCURVEPOINT_OFFSET))(this, pointIndex);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAllPoints()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETALLPOINTS_OFFSET))(this);
		}

		::System::Int32 GetNumPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETNUMPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTransformedPoint(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOINT_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 GetTransformedPosition(::UnityEngine::Vector3 inPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETTRANSFORMEDPOSITION_OFFSET))(this, inPosition);
		}

		::UnityEngine::Vector3 GetInvertedTransformedPosition(::UnityEngine::Vector3 inPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDPOSITION_OFFSET))(this, inPosition);
		}

		::UnityEngine::Vector3 GetInvertedTransformedDirection(::UnityEngine::Vector3 inPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETINVERTEDTRANSFORMEDDIRECTION_OFFSET))(this, inPosition);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetVertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_GETVERTICES_OFFSET))(this);
		}

		::System::Void SetCurveGeometryVisibility(::System::Boolean bVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_SETCURVEGEOMETRYVISIBILITY_OFFSET))(this, bVisible);
		}

		::System::Void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADPRESETDATA_OFFSET))(this, session);
		}

		::System::Void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_UPLOADPRESETDATA_OFFSET))(this, session);
		}

		::System::Void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_DOWNLOADASDEFAULTPRESETDATA_OFFSET))(this, session);
		}
	};
}
