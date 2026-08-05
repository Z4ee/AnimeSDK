#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UIPARTICLEMATRIXBOUNDSJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA11220)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_UIParticleMatrixBoundsJob_TypeDefinitionIndex = 34867;

	struct alignas(1) UIParticleRenderer_UIParticleMatrixBoundsJob
	{
		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UIPARTICLEMATRIXBOUNDSJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
