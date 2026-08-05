#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_JobMeshUpdateState_TypeDefinitionIndex = 34871;

	struct alignas(8) UIParticleRenderer_JobMeshUpdateState
	{
		::System::Boolean isPrepared; // 0x10
		::UnityEngine::Camera* bakeCamera; // 0x18
		::UnityEngine::Vector3 scale; // 0x20
		::UnityEngine::Vector3 psPos; // 0x2C
		::System::Boolean simulateParticles; // 0x38
		::System::Boolean runtimeSimulation; // 0x39
		::System::Boolean needsPrimarySimulate; // 0x3A
		::System::Single primarySimulateDeltaTime; // 0x3C
		::UnityEngine::Transform* primarySimulateTransform; // 0x40
		::UnityEngine::Vector3 primarySimulateOriginWorldPosition; // 0x48
		::UnityEngine::Quaternion primarySimulateOriginWorldRotation; // 0x54
		::System::Boolean needsPrimaryTransformRestore; // 0x64
		::System::Boolean needsDelaySimulate; // 0x65
		::System::Boolean enableUIParticleOpt; // 0x66
		::System::Boolean jobRendererSetupPrepared; // 0x67
		::UnityEngine::Material* modifiedMaterial; // 0x68
	};
}
