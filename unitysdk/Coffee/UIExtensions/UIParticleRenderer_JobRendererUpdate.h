#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace UnityEngine { class Camera; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA111C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA111F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA111A0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_JobRendererUpdate_TypeDefinitionIndex = 34870;

	struct alignas(8) UIParticleRenderer_JobRendererUpdate
	{
		::Coffee::UIExtensions::UIParticleRenderer* renderer; // 0x10
		::UnityEngine::Camera* bakeCamera; // 0x18
		::System::Boolean parentIsValid; // 0x20
		::System::Boolean parentIsReplica; // 0x21
		::System::Boolean visibleScale; // 0x22
		::System::Boolean hasPrecomputedInvalid; // 0x23
		::System::Boolean isInvalid; // 0x24

		::System::Void _ctor(::Coffee::UIExtensions::UIParticleRenderer* renderer, ::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_OFFSET))(this, renderer, bakeCamera);
		}

		::System::Void _ctor_1(::Coffee::UIExtensions::UIParticleRenderer* renderer, ::UnityEngine::Camera* bakeCamera, ::System::Boolean parentIsValid, ::System::Boolean parentIsReplica, ::System::Boolean visibleScale)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_1_OFFSET))(this, renderer, bakeCamera, parentIsValid, parentIsReplica, visibleScale);
		}

		::System::Void _ctor_2(::Coffee::UIExtensions::UIParticleRenderer* renderer, ::UnityEngine::Camera* bakeCamera, ::System::Boolean isInvalid)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_JOBRENDERERUPDATE__CTOR_2_OFFSET))(this, renderer, bakeCamera, isInvalid);
		}
	};
}
