#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FurHelper_RenderMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define FURHELPER_CHECKISVALIDFURMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B7E4F40)
#define FURHELPER_CHECKPROPERTYHASMODIFYANDSYNC_OFFSET UNITYSDK_OFFSET(0x1B7E4A00)
#define FURHELPER_GENERATEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B7E1F50)
#define FURHELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7E2850)
#define FURHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B7E2800)
#define FURHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7E2250)
#define FURHELPER_ONINIT_OFFSET UNITYSDK_OFFSET(0x1B7E22A0)
#define FURHELPER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1B7E3F30)
#define FURHELPER_PREPAREBINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7E2920)
#define FURHELPER_REBUILDMATPROP_OFFSET UNITYSDK_OFFSET(0x1B7E2EB0)
#define FURHELPER_REFRESHADDITIONALLIGHTSOFF_OFFSET UNITYSDK_OFFSET(0x1B7E3CA0)
#define FURHELPER_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B7E1DB0)
#define FURHELPER_UINTTOFLOATUNSAFE_OFFSET UNITYSDK_OFFSET(0x1B7E28E0)
#define FURHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7E5390)
#define FURHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E5300)

inline static constexpr unsigned int FurHelper_TypeDefinitionIndex = 26937;

class FurHelper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_FurHelperOnWillRenderObject()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FurHelper_TypeDefinitionIndex)->GetStaticField(0x22080);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_FurHelperUPdateMaterial()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FurHelper_TypeDefinitionIndex)->GetStaticField(0x22088);
	}
	::FurHelper_RenderMode furMaterialRenderMode; // 0x18
	::System::UInt32 furMaterialIndex; // 0x1C
	::System::UInt32 furLayersNum; // 0x20
	::System::Boolean additionalLightsOff; // 0x24
	::System::Boolean LODOff; // 0x25
	::System::Boolean enabledOnDistance; // 0x26
	::System::Boolean LODFadeEnable; // 0x27
	::System::Single furKeepDistance; // 0x28
	::System::Single furDetailDistance; // 0x2C
	::UnityEngine::Renderer* m_FurRenderer; // 0x30
	::System::Boolean m_IsMeshRenderer; // 0x38
	::UnityEngine::MeshFilter* m_MeshFilter; // 0x40
	::UnityEngine::MaterialPropertyBlock* furMatPropBlock; // 0x48
	::System::Single normalizedLOD; // 0x50
	::System::Single updateTime; // 0x54
	::System::Boolean needRebuildMatProp; // 0x58
	::System::Boolean needReComputeProbe; // 0x59
	::System::Int32 lastFurLayersNum; // 0x5C
	::System::Boolean lastFurAdditionalLightsOff; // 0x60
	::Il2CppArray<::UnityEngine::Vector4>* cachedLightMapScaleOffsetData; // 0x68
	::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* cachedProbesData; // 0x70
	::UnityEngine::Material* instancedFurMaterial; // 0x78
	::System::Boolean isValidFurRenderer; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER__CCTOR_OFFSET))();
	}

	::System::Void RefreshMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_REFRESHMATERIAL_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_ONDESTROY_OFFSET))(this);
	}

	static ::System::Single UIntToFloatUnsafe(::System::UInt32 value)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FURHELPER_UINTTOFLOATUNSAFE_OFFSET))(value);
	}

	::System::Void PrepareBindComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_PREPAREBINDCOMPONENT_OFFSET))(this);
	}

	::System::Void GenerateInstancedMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_GENERATEINSTANCEDMATERIAL_OFFSET))(this);
	}

	::System::Void RebuildMatProp(::System::Int32 layersNum)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FURHELPER_REBUILDMATPROP_OFFSET))(this, layersNum);
	}

	::System::Void RefreshAdditionalLightsOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_REFRESHADDITIONALLIGHTSOFF_OFFSET))(this);
	}

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_ONWILLRENDEROBJECT_OFFSET))(this);
	}

	::System::Void CheckPropertyHasModifyAndSync(::UnityEngine::Material* source, ::UnityEngine::Material* target, ::System::String* propertyName, ::UnityEngine::Rendering::ShaderPropertyType type, ::System::String* key)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Rendering::ShaderPropertyType, ::System::String*))((::PBYTE)hIl2Cpp + FURHELPER_CHECKPROPERTYHASMODIFYANDSYNC_OFFSET))(this, source, target, propertyName, type, key);
	}

	::System::Void OnInit(::System::Boolean destroy)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FURHELPER_ONINIT_OFFSET))(this, destroy);
	}

	::System::Boolean CheckIsValidFurMaterial(::UnityEngine::Material* furMaterial)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FURHELPER_CHECKISVALIDFURMATERIAL_OFFSET))(this, furMaterial);
	}
};
