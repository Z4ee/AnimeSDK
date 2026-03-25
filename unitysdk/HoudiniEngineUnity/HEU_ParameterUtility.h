#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCHOICE_OFFSET UNITYSDK_OFFSET(0x8477C50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x8478400)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOATS_OFFSET UNITYSDK_OFFSET(0x84770C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x8476EC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x8478210)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x8476AD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERCOLOR3VALUE_OFFSET UNITYSDK_OFFSET(0x846A790)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x846A670)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAMEORTAG_OFFSET UNITYSDK_OFFSET(0x846A040)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0x8478790)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETSTRING_OFFSET UNITYSDK_OFFSET(0x8477640)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETTOGGLE_OFFSET UNITYSDK_OFFSET(0x8476750)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x8477A30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x84785D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x8477480)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x8477290)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x8477E50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINT_OFFSET UNITYSDK_OFFSET(0x8476CD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETSTRING_OFFSET UNITYSDK_OFFSET(0x8477840)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x8476910)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterUtility_TypeDefinitionIndex = 37759;

	class HEU_ParameterUtility : public ::System::Object
	{
	public:
		static ::System::Boolean GetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Boolean& outValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETTOGGLE_OFFSET))(asset, paramName, outValue);
		}

		static ::System::Boolean SetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Boolean setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETTOGGLE_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Boolean GetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Int32& outValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINT_OFFSET))(asset, paramName, outValue);
		}

		static ::System::Boolean SetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Int32 setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINT_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Boolean GetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Single& outValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOAT_OFFSET))(asset, paramName, outValue);
		}

		static ::System::Boolean GetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::Il2CppArray<::System::Single>*& outValues)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOATS_OFFSET))(asset, paramName, outValues);
		}

		static ::System::Boolean SetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Single setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOAT_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Boolean SetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::Il2CppArray<::System::Single>* setValues)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOATS_OFFSET))(asset, paramName, setValues);
		}

		static ::System::Boolean GetString(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::String*& outValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETSTRING_OFFSET))(asset, paramName, outValue);
		}

		static ::System::Boolean SetString(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::String* setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETSTRING_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Boolean SetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Int32 setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCHOICE_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Boolean GetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Int32& outValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCHOICE_OFFSET))(asset, paramName, outValue);
		}

		static ::System::Boolean SetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::UnityEngine::GameObject* obj, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINPUTNODE_OFFSET))(asset, paramName, obj, index);
		}

		static ::System::Boolean GetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::System::Int32 index, ::UnityEngine::GameObject*& obj)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINPUTNODE_OFFSET))(asset, paramName, index, obj);
		}

		static ::System::Boolean GetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::UnityEngine::Color& getValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCOLOR_OFFSET))(asset, paramName, getValue);
		}

		static ::System::Boolean SetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* paramName, ::UnityEngine::Color setValue)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCOLOR_OFFSET))(asset, paramName, setValue);
		}

		static ::System::Int32 GetParameterIndexFromName(::HoudiniEngineUnity::HEU_SessionBase* session, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* parameters, ::System::String* parameterName)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAME_OFFSET))(session, parameters, parameterName);
		}

		static ::System::Int32 GetParameterIndexFromNameOrTag(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* parameters, ::System::String* parameterName)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAMEORTAG_OFFSET))(session, nodeID, parameters, parameterName);
		}

		static ::System::Single GetParameterFloatValue(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* parameters, ::System::String* parameterName, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERFLOATVALUE_OFFSET))(session, nodeID, parameters, parameterName, defaultValue);
		}

		static ::UnityEngine::Color GetParameterColor3Value(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* parameters, ::System::String* parameterName, ::UnityEngine::Color defaultValue)
		{
			return ((::UnityEngine::Color(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERCOLOR3VALUE_OFFSET))(session, nodeID, parameters, parameterName, defaultValue);
		}
	};
}
