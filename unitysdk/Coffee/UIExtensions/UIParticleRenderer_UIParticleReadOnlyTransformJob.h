#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UIPARTICLEREADONLYTRANSFORMJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA11230)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_UIParticleReadOnlyTransformJob_TypeDefinitionIndex = 34869;

	struct alignas(1) UIParticleRenderer_UIParticleReadOnlyTransformJob
	{
		/*
		::System::Void Execute(::System::Int32 index, ::UnityEngine::Jobs::TransformAccess transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UIPARTICLEREADONLYTRANSFORMJOB_EXECUTE_OFFSET))(this, index, transform);
		}
		*/
	};
}
