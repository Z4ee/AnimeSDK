#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroParticleProperty_ParticleType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroParticleProperty_EnviroParticleSystem_TypeDefinitionIndex = 47753;

	struct alignas(8) EnviroParticleProperty_EnviroParticleSystem
	{
		::EnviromentSystem::EnviroParticleProperty_ParticleType m_ParticleType; // 0x10
		::System::String* m_Name; // 0x18
		::System::Int32 m_MaxParticle; // 0x20
		::UnityEngine::Vector2 m_ParticleLifeTimeRange; // 0x24
		::UnityEngine::Vector2 m_ParticleSizeRange; // 0x2C
		::UnityEngine::Vector2 m_ParticlePositionRange; // 0x34
		::System::Single m_ParticleSpeed; // 0x3C
		::UnityEngine::Vector2Int m_MaterialSpriteTile; // 0x40
		::UnityEngine::Vector2Int m_MaterialSpriteTileRange; // 0x48
		::System::Single m_SpriteAspectRatio; // 0x50
		::System::Int32 m_RandomSeed; // 0x54
		::System::String* m_MaterialPath; // 0x58
		::UnityEngine::Material* m_Material; // 0x60
		::UnityEngine::Material* m_RenderMaterial; // 0x68
		::UnityEngine::ParticleSystem* _ParticleSystem; // 0x70
		::UnityEngine::ParticleSystemRenderer* _ParticleSystemRenderer; // 0x78
		::UnityEngine::MaterialPropertyBlock* _MatPropBlock; // 0x80
		::System::Int32 _MaterialSpriteTilesCount; // 0x88
	};
}
