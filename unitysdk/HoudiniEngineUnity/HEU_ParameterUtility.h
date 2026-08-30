#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_FINDTEXTUREPARAMBYNAMEORTAG_OFFSET UNITYSDK_OFFSET(0x1B444B00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCHOICE_OFFSET UNITYSDK_OFFSET(0x1B45A9D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B45B9D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOATS_OFFSET UNITYSDK_OFFSET(0x1B458080)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B457960)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x1B45B550)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x1B456B50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERCOLOR3VALUE_OFFSET UNITYSDK_OFFSET(0x1B4456B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1B445BA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAMEORTAG_OFFSET UNITYSDK_OFFSET(0x1B445CF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0x1B45C2C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B459520)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETTOGGLE_OFFSET UNITYSDK_OFFSET(0x1B456280)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x1B45A350)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B45BE40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x1B458CE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B4585D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x1B45B050)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINT_OFFSET UNITYSDK_OFFSET(0x1B457260)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1B459C40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x1B4566E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterUtility_TypeDefinitionIndex = 39254;

	class HEU_ParameterUtility : public ::System::Object
	{
	public:
		static ::System::Boolean GetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Boolean& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETTOGGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETTOGGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetInt(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::Il2CppArray<::System::Single>*& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOATS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOATS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetString(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetString(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCHOICE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCHOICE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINPUTNODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::Int32 a3, ::UnityEngine::GameObject*& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINPUTNODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetColor(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetParameterIndexFromName(::HoudiniEngineUnity::HEU_SessionBase* a1, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetParameterIndexFromNameOrTag(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3, ::System::String* a4)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAMEORTAG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindTextureParamByNameOrTag(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_FINDTEXTUREPARAMBYNAMEORTAG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetParameterFloatValue(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3, ::System::String* a4, ::System::Single a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERFLOATVALUE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean GetParameterColor3Value(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3, ::System::String* a4, ::UnityEngine::Color a5, ::UnityEngine::Color& a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERCOLOR3VALUE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
