#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FlowerRingScatterBehavior; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_FLOWERRINGSCATTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C7700)

namespace RPG::Client
{
	inline static constexpr unsigned int FlowerRingScatterMonoPlugin_TypeDefinitionIndex = 65096;

	class FlowerRingScatterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FlowerRingScatterBehavior*>
	{
	public:
		::UnityEngine::Material* ParticleMaterial; // 0x30
		::UnityEngine::Mesh* ParticleMesh; // 0x38
		::System::Int32 RandomSeed; // 0x40
		::System::Int32 ParticleCount; // 0x44
		::UnityEngine::Vector3 ParticleSizeMin; // 0x48
		::UnityEngine::Vector3 ParticleSizeMax; // 0x54
		::UnityEngine::Vector3 ParticleRotationMin; // 0x60
		::UnityEngine::Vector3 ParticleRotationMax; // 0x6C
		::UnityEngine::Color RandomColor0; // 0x78
		::UnityEngine::Color RandomColor1; // 0x88
		::System::Single RingRadius; // 0x98
		::System::Single RingThickness; // 0x9C
		::System::Single GrowProgress; // 0xA0
		::UnityEngine::Vector2 GrowRandomSpeed; // 0xA4
		::UnityEngine::Texture2D* DissolveTexture; // 0xB0
		::System::Single DissolveTile; // 0xB8
		::System::Single DissolveProgress; // 0xBC
		::System::Single DissolveSmoothness; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
