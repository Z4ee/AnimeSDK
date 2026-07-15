#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/VortexParticlesBehavior_ParticleAttributes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VortexParticlesBehavior; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_VORTEXPARTICLESMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x174158C0)

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesMonoPlugin_TypeDefinitionIndex = 67556;

	class VortexParticlesMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::VortexParticlesBehavior*>
	{
	public:
		::UnityEngine::ComputeShader* spawnCS; // 0x30
		::System::Single coneRadius; // 0x38
		::System::Single circleAngle; // 0x3C
		::System::Single coneThickness; // 0x40
		::System::Single coneAngle; // 0x44
		::System::Int32 burstCount; // 0x48
		::System::Int32 spawnRate; // 0x4C
		::System::Int32 capacity; // 0x50
		::System::Int32 randomSeed; // 0x54
		::System::Boolean prewarm; // 0x58
		::System::Single prewarmFrameRate; // 0x5C
		::System::Boolean prewarmDataCached; // 0x60
		::Il2CppArray<::RPG::Client::VortexParticlesBehavior_ParticleAttributes>* prewarmData; // 0x68
		::UnityEngine::Mesh* renderMesh; // 0x70
		::UnityEngine::Material* renderMaterial; // 0x78
		::System::Single drag; // 0x80
		::UnityEngine::Vector3 gravity; // 0x84
		::UnityEngine::Vector2 sizeMinMax; // 0x90
		::UnityEngine::Vector2 lifeTimeMinMax; // 0x98
		::UnityEngine::Vector2 velocityMinMax; // 0xA0
		::UnityEngine::Vector2 orbitSpeedMinMax; // 0xA8
		::UnityEngine::Vector2 selfRotSpeedMinMax; // 0xB0
		::UnityEngine::Vector3 positionRandomMin; // 0xB8
		::UnityEngine::Vector3 positionRandomMax; // 0xC4
		::UnityEngine::AnimationCurve* sizeOverLifeTime; // 0xD0
		::UnityEngine::AnimationCurve* velocityOverLifeTime; // 0xD8
		::UnityEngine::AnimationCurve* orbitSpeedOverLifeTime; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
