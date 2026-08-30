#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImageInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_MaterialInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialData_Source.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialSourceWrapper.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETMATERIALALPHA_OFFSET UNITYSDK_OFFSET(0x1B445990)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETSUPPORTEDFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B445DB0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETTEXTUREFILENAMEFROMMATERIALPARAM_OFFSET UNITYSDK_OFFSET(0x1B444DD0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIALKEY_OFFSET UNITYSDK_OFFSET(0x1B444410)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIALSOURCE_OFFSET UNITYSDK_OFFSET(0x1B4443F0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B4443E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B445F90)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEXISTINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B445CE0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISTRANSPARENTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B444430)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_MATERIALSOURCE_WRAPPERTOINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1B444400)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_MATERIALSOURCE_WRAPPERTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B446240)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_SET_MATERIALKEY_OFFSET UNITYSDK_OFFSET(0x1B444420)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_UPDATEMATERIALFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B421D60)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_USELEGACYSHADERS_OFFSET UNITYSDK_OFFSET(0x1B4445D0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446250)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialData_TypeDefinitionIndex = 39281;

	class HEU_MaterialData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Material* _material; // 0x18
		::HoudiniEngineUnity::HEU_MaterialData_Source _materialSource; // 0x20
		::System::Int32 _materialKey; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_Material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIAL_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_MaterialSourceWrapper get_MaterialSource()
		{
			return ((::HoudiniEngineUnity::HEU_MaterialSourceWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIALSOURCE_OFFSET))(this);
		}

		::System::Int32 get_MaterialKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GET_MATERIALKEY_OFFSET))(this);
		}

		::System::Void set_MaterialKey(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_SET_MATERIALKEY_OFFSET))(this, a1);
		}

		::System::Boolean UpdateMaterialFromHoudini(::HoudiniEngineUnity::HAPI_MaterialInfo a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_UPDATEMATERIALFROMHOUDINI_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsExistingMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEXISTINGMATERIAL_OFFSET))(this);
		}

		::System::Boolean UseLegacyShaders(::HoudiniEngineUnity::HAPI_MaterialInfo a1, ::System::String* a2, ::HoudiniEngineUnity::HEU_SessionBase* a3, ::HoudiniEngineUnity::HAPI_NodeInfo a4, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_NodeInfo, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_USELEGACYSHADERS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::String* GetTextureFileNameFromMaterialParam(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_ParmInfo a3)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETTEXTUREFILENAMEFROMMATERIALPARAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsTransparentMaterial(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISTRANSPARENTMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetMaterialAlpha(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* a3, ::System::Single a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETMATERIALALPHA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetSupportedFileFormat(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_ImageInfo& a2)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ImageInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETSUPPORTEDFILEFORMAT_OFFSET))(a1, a2);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_MaterialData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData_Source MaterialSource_WrapperToInternal(::HoudiniEngineUnity::HEU_MaterialSourceWrapper a1)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData_Source(*)(::HoudiniEngineUnity::HEU_MaterialSourceWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_MATERIALSOURCE_WRAPPERTOINTERNAL_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_MaterialSourceWrapper MaterialSource_WrapperToInternal_1(::HoudiniEngineUnity::HEU_MaterialData_Source a1)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialSourceWrapper(*)(::HoudiniEngineUnity::HEU_MaterialData_Source))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_MATERIALSOURCE_WRAPPERTOINTERNAL_1_OFFSET))(a1);
		}
	};
}
