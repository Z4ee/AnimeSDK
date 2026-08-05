#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IPerObjectShadowEntity;
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define PEROBJECTSHADOWCONTEXT_PREPAREFORCULLING_OFFSET UNITYSDK_OFFSET(0xA0D140)
#define PEROBJECTSHADOWCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E240BE0)

inline static constexpr unsigned int PerObjectShadowContext_TypeDefinitionIndex = 27186;

struct alignas(4) PerObjectShadowContext
{
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_EncapsulateBounds()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowContext_TypeDefinitionIndex)->GetStaticField(0x22FA0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleCollectBounds()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowContext_TypeDefinitionIndex)->GetStaticField(0x22FA8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_GetVisibility()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowContext_TypeDefinitionIndex)->GetStaticField(0x22FB0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleFetchBounds()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowContext_TypeDefinitionIndex)->GetStaticField(0x22FB8);
	}
	::UnityEngine::Bounds bounds; // 0x10
	::UnityEngine::Vector3 centerWS; // 0x28
	::UnityEngine::Vector3 extentLS; // 0x34
	::UnityEngine::Vector3 extentWS; // 0x40
	::UnityEngine::Vector4 cullingSphere; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOWCONTEXT__CCTOR_OFFSET))();
	}

	::System::Void PrepareForCulling(::IPerObjectShadowEntity* entity, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
	{
		return ((::System::Void(*)(::PVOID, ::IPerObjectShadowEntity*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWCONTEXT_PREPAREFORCULLING_OFFSET))(this, entity, asset);
	}
};
