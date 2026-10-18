#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_FINDTEXTUREPARAMBYNAMEORTAG_OFFSET UNITYSDK_OFFSET(0x1B945E10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCHOICE_OFFSET UNITYSDK_OFFSET(0x1B95C0F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B95D270)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOATS_OFFSET UNITYSDK_OFFSET(0x1B959410)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B958C50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x1B95CD80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x1B957CF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERCOLOR3VALUE_OFFSET UNITYSDK_OFFSET(0x1B9469C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1B946EB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAMEORTAG_OFFSET UNITYSDK_OFFSET(0x1B947000)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETPARAMETERINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0x1B95DC40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B95AA60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_GETTOGGLE_OFFSET UNITYSDK_OFFSET(0x1B957350)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x1B95B9D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B95D750)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x1B95A180)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B9599C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x1B95C810)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETINT_OFFSET UNITYSDK_OFFSET(0x1B9584A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1B95B220)
#define HOUDINIENGINEUNITY_HEU_PARAMETERUTILITY_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x1B957820)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterUtility_TypeDefinitionIndex = 40551;

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
