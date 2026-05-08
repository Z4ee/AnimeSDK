#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PerObjectShadow;

#define PEROBJECTSHADOWDATABLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8540)

inline static constexpr unsigned int PerObjectShadowDataBlock_TypeDefinitionIndex = 29617;

struct alignas(4) PerObjectShadowDataBlock
{
	::UnityEngine::Matrix4x4 shadowUvMatrix; // 0x10
	::UnityEngine::Vector4 perObjectShadowData; // 0x50
	::UnityEngine::Vector4 tillingOffset; // 0x60
	::System::Single receiveShadowValue; // 0x70
	::UnityEngine::Vector4 offsetWS; // 0x74

	/*
	::System::Void _ctor(::System::Boolean entityReceiveShadow, ::System::Boolean receiveShadow, ::System::Int32 shadowIndex, ::System::Int32 resolution, ::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams drawPerObjectShadowParams, ::PerObjectShadow* perObjectShadow, ::UnityEngine::Vector4 offsetWS)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams, ::PerObjectShadow*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWDATABLOCK__CTOR_OFFSET))(this, entityReceiveShadow, receiveShadow, shadowIndex, resolution, drawPerObjectShadowParams, perObjectShadow, offsetWS);
	}
	*/
};
