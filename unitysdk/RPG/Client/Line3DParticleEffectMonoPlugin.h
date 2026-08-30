#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Line3DParticleEffectBehavior; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LINE3DPARTICLEEFFECTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C02C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Line3DParticleEffectMonoPlugin_TypeDefinitionIndex = 70607;

	class Line3DParticleEffectMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Line3DParticleEffectBehavior*>
	{
	public:
		::UnityEngine::Transform* ground; // 0x30
		::UnityEngine::Transform* start; // 0x38
		::UnityEngine::Transform* end; // 0x40
		::System::Int32 maxParticle; // 0x48
		::System::Int32 bottomAngle; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINE3DPARTICLEEFFECTMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
