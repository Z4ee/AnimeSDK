#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class WorldSpaceTileParticlesBehavior; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E6D00)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesMonoPlugin_TypeDefinitionIndex = 65206;

	class WorldSpaceTileParticlesMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::WorldSpaceTileParticlesBehavior*>
	{
	public:
		::UnityEngine::Material* ParticleMaterial; // 0x30
		::UnityEngine::Mesh* ParticleMesh; // 0x38
		::System::Int32 ParticleCount; // 0x40
		::UnityEngine::Color Color; // 0x44
		::UnityEngine::Vector3 Velocity; // 0x54
		::System::Int32 RandomSeed; // 0x60
		::UnityEngine::Vector2 ParticleSizeRandomRange; // 0x64
		::UnityEngine::Vector2 FlickerFrequency; // 0x6C
		::System::Single FogScale; // 0x74
		::System::Boolean FollowCamera; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
