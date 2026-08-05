#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FurHelper_RenderMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define FURHELPER_GENERATEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CB01220)
#define FURHELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CAFF150)
#define FURHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CAFF100)
#define FURHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CAFE9B0)
#define FURHELPER_ONINIT_OFFSET UNITYSDK_OFFSET(0x1CAFECD0)
#define FURHELPER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1CAFF1E0)
#define FURHELPER_PREPAREBINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CB00BC0)
#define FURHELPER_REBUILDMATPROP_OFFSET UNITYSDK_OFFSET(0x1CAFFE70)
#define FURHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB01610)
#define FURHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB01560)

inline static constexpr unsigned int FurHelper_TypeDefinitionIndex = 27703;

class FurHelper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_FurHelperUpdateMaterial()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FurHelper_TypeDefinitionIndex)->GetStaticField(0x23860);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_FurHelperOnWillRenderObject()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FurHelper_TypeDefinitionIndex)->GetStaticField(0x23868);
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
	::UnityEngine::MaterialPropertyBlock* m_FurMatPropBlock; // 0x48
	::System::Boolean m_NeedRebuildMatProp; // 0x50
	::System::Boolean m_NeedReComputeProbe; // 0x51
	::System::Int32 m_CachedLayersNum; // 0x54
	::System::Boolean m_CachedFurAdditionalLightsOff; // 0x58
	::System::Boolean m_IsValidFurRenderer; // 0x59
	::Il2CppArray<::UnityEngine::Vector4>* m_CachedLightMapScaleOffsetData; // 0x60
	::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* m_CachedProbesData; // 0x68
	::Il2CppArray<::System::Single>* m_CachedFurSteps; // 0x70
	::UnityEngine::Vector3 m_CachedPosition; // 0x78
	::UnityEngine::Material* m_InstancedFurMaterial; // 0x88
	::UnityEngine::Matrix4x4 m_CachedLocalToWorldMatrix; // 0x90
	::System::Boolean m_CachedIsOddScale; // 0xD0
	::System::Boolean m_CachedDitherSwitchOn; // 0xD1
	::System::Boolean m_CachedLightMapOn; // 0xD2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER__CCTOR_OFFSET))();
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

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURHELPER_ONWILLRENDEROBJECT_OFFSET))(this);
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

	::System::Boolean OnInit(::System::Boolean autoSetMaterialIndex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FURHELPER_ONINIT_OFFSET))(this, autoSetMaterialIndex);
	}
};
