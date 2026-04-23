#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ImageInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_MaterialInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialData_Source.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETSUPPORTEDFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x8C92B20)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETTEXTUREFILENAMEFROMMATERIALPARAM_OFFSET UNITYSDK_OFFSET(0x8C921E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEXISTINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x8C91E20)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISTRANSPARENTMATERIAL_OFFSET UNITYSDK_OFFSET(0x8C91E30)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA_UPDATEMATERIALFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x8C7C5E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C92D10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialData_TypeDefinitionIndex = 43639;

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

		::System::Boolean IsExistingMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISEXISTINGMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMaterialFromHoudini(::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::System::String* assetCacheFolderPath)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_UPDATEMATERIALFROMHOUDINI_OFFSET))(this, materialInfo, assetCacheFolderPath);
		}

		static ::System::String* GetTextureFileNameFromMaterialParam(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::HoudiniEngineUnity::HAPI_ParmInfo parmInfo)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETTEXTUREFILENAMEFROMMATERIALPARAM_OFFSET))(session, nodeID, parmInfo);
		}

		static ::System::Boolean IsTransparentMaterial(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>* parameters)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmInfo>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_ISTRANSPARENTMATERIAL_OFFSET))(session, nodeID, parameters);
		}

		static ::System::String* GetSupportedFileFormat(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ImageInfo& imageInfo)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ImageInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALDATA_GETSUPPORTEDFILEFORMAT_OFFSET))(session, imageInfo);
		}
	};
}
