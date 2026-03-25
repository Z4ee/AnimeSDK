#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_HandleInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RSTOrder.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_XYZOrder.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Handle_HEU_HandleType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HandleParamBinding; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HANDLE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x843EA90)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GENERATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x843E260)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETROTATEBINDING_OFFSET UNITYSDK_OFFSET(0x843D390)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETSCALEBINDING_OFFSET UNITYSDK_OFFSET(0x843D3A0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETTRANSLATEBINDING_OFFSET UNITYSDK_OFFSET(0x843D380)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDPOSITION_OFFSET UNITYSDK_OFFSET(0x843EAC0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDROTATION_OFFSET UNITYSDK_OFFSET(0x843EE10)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_CONVERTEDTRANSFORMEULER_OFFSET UNITYSDK_OFFSET(0x843D2C0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLENAME_OFFSET UNITYSDK_OFFSET(0x843D280)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEPOSITION_OFFSET UNITYSDK_OFFSET(0x843D3B0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEROTATION_OFFSET UNITYSDK_OFFSET(0x843D3D0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLESCALE_OFFSET UNITYSDK_OFFSET(0x843D3E0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0x843D290)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_RSTORDER_OFFSET UNITYSDK_OFFSET(0x843D2A0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_XYZORDER_OFFSET UNITYSDK_OFFSET(0x843D2B0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASROTATEHANDLE_OFFSET UNITYSDK_OFFSET(0x843D300)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASSCALEHANDLE_OFFSET UNITYSDK_OFFSET(0x843D310)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASTRANSLATEHANDLE_OFFSET UNITYSDK_OFFSET(0x843D2F0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISROTATEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x843D340)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISSCALEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x843D360)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISSPECIALRSTORDER_OFFSET UNITYSDK_OFFSET(0x843EAA0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISTRANSLATEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x843D320)
#define HOUDINIENGINEUNITY_HEU_HANDLE_SETUPHANDLE_OFFSET UNITYSDK_OFFSET(0x843D400)
#define HOUDINIENGINEUNITY_HEU_HANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x843F1D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Handle_TypeDefinitionIndex = 37741;

	class HEU_Handle : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _handleName; // 0x18
		::HoudiniEngineUnity::HEU_Handle_HEU_HandleType _handleType; // 0x20
		::System::Int32 _handleIndex; // 0x24
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamTranslateBinding; // 0x28
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamRotateBinding; // 0x30
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamScaleBinding; // 0x38
		::UnityEngine::Vector3 _handlePosition; // 0x40
		::UnityEngine::Quaternion _handleRotation; // 0x4C
		::UnityEngine::Vector3 _handleScale; // 0x5C
		::HoudiniEngineUnity::HAPI_RSTOrder _rstOrder; // 0x68
		::HoudiniEngineUnity::HAPI_XYZOrder _xyzOrder; // 0x6C
		::HoudiniEngineUnity::HAPI_TransformEuler _convertedTransformEuler; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE__CTOR_OFFSET))(this);
		}

		::System::String* get_HandleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLENAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_Handle_HEU_HandleType get_HandleType()
		{
			return ((::HoudiniEngineUnity::HEU_Handle_HEU_HandleType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLETYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_RSTOrder get_RSTOrder()
		{
			return ((::HoudiniEngineUnity::HAPI_RSTOrder(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_RSTORDER_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_XYZOrder get_XYZOrder()
		{
			return ((::HoudiniEngineUnity::HAPI_XYZOrder(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_XYZORDER_OFFSET))(this);
		}

		::HoudiniEngineUnity::HAPI_TransformEuler get_ConvertedTransformEuler()
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_CONVERTEDTRANSFORMEULER_OFFSET))(this);
		}

		::System::Boolean HasTranslateHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASTRANSLATEHANDLE_OFFSET))(this);
		}

		::System::Boolean HasRotateHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASROTATEHANDLE_OFFSET))(this);
		}

		::System::Boolean HasScaleHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASSCALEHANDLE_OFFSET))(this);
		}

		::System::Boolean IsTranslateHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISTRANSLATEHANDLEDISABLED_OFFSET))(this);
		}

		::System::Boolean IsRotateHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISROTATEHANDLEDISABLED_OFFSET))(this);
		}

		::System::Boolean IsScaleHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISSCALEHANDLEDISABLED_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetTranslateBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETTRANSLATEBINDING_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetRotateBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETROTATEBINDING_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetScaleBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETSCALEBINDING_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HandlePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_HandleRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HandleScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLESCALE_OFFSET))(this);
		}

		::System::Boolean SetupHandle(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetID, ::System::Int32 handleIndex, ::System::String* handleName, ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType handleType, ::HoudiniEngineUnity::HAPI_HandleInfo& handleInfo, ::HoudiniEngineUnity::HEU_Parameters* parameters)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType, ::HoudiniEngineUnity::HAPI_HandleInfo&, ::HoudiniEngineUnity::HEU_Parameters*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_SETUPHANDLE_OFFSET))(this, session, assetID, handleIndex, handleName, handleType, handleInfo, parameters);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_CLEANUP_OFFSET))(this);
		}

		::System::Void GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_Parameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_Parameters*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GENERATETRANSFORM_OFFSET))(this, session, parameters);
		}

		::System::Boolean GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::UnityEngine::Vector3& inPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDPOSITION_OFFSET))(this, asset, inPosition);
		}

		::System::Boolean GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::UnityEngine::Quaternion& inRotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDROTATION_OFFSET))(this, asset, inRotation);
		}

		static ::System::Boolean IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder rstOrder)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_RSTOrder))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISSPECIALRSTORDER_OFFSET))(rstOrder);
		}
	};
}
