#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLBEHAVIOR_PARTICLECONTROLCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F6500)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleVelocityControlBehavior_ParticleControlContent_TypeDefinitionIndex = 65016;

	class Effect_ParticleVelocityControlBehavior_ParticleControlContent : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* ParticleSystem; // 0x10
		::System::Single Velocity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLBEHAVIOR_PARTICLECONTROLCONTENT__CTOR_OFFSET))(this);
		}
	};
}
