#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_PositionMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_JobRendererData_TypeDefinitionIndex = 34872;

	struct alignas(8) UIParticleRenderer_JobRendererData
	{
		::System::Boolean particleSystemConfigCached; // 0x10
		::System::Boolean useUnscaledTime; // 0x11
		::System::Single duration; // 0x14
		::System::Boolean loop; // 0x18
		::System::Boolean rateOverDistance; // 0x19
		::System::Boolean trailWorldSpace; // 0x1A
		::System::Boolean matrixBoundsPrepared; // 0x1B
		::System::Boolean materialPrepared; // 0x1C
		::System::Int32 materialInstanceId; // 0x20
		::System::Int32 rendererInstanceId; // 0x24
		::System::Boolean smoothMaskEnabled; // 0x28
		::UnityEngine::Vector3 scale; // 0x2C
		::UnityEngine::Vector3 psPos; // 0x38
		::UnityEngine::Matrix4x4 canvasWorldToLocalMatrix; // 0x44
		::UnityEngine::Vector3 particleSystemPosition; // 0x84
		::UnityEngine::Vector3 parentPosition; // 0x90
		::Coffee::UIExtensions::UIParticle_PositionMode positionMode; // 0x9C
		::UnityEngine::ParticleSystemSimulationSpace simulationSpace; // 0xA0
		::UnityEngine::Transform* customSimulationSpace; // 0xA8
		::UnityEngine::Vector3 customSimulationSpacePosition; // 0xB0
		::UnityEngine::Bounds psLocalBounds; // 0xBC
	};
}
