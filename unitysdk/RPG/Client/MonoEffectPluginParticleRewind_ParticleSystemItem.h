#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_PARTICLESYSTEMITEM_METHOD_1_44A9D72A4ECE8005_OFFSET UNITYSDK_OFFSET(0x9CD7AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_PARTICLESYSTEMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD7AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleRewind_ParticleSystemItem_TypeDefinitionIndex = 57355;

	class MonoEffectPluginParticleRewind_ParticleSystemItem : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* particleSystem; // 0x10
		::System::Single startTime; // 0x18
		::System::Single speedScale; // 0x1C
		::System::Boolean applyToChildren; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_PARTICLESYSTEMITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_44A9D72A4ECE8005(::UnityEngine::ParticleSystem* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_PARTICLESYSTEMITEM_METHOD_1_44A9D72A4ECE8005_OFFSET))(this, a1, a2, a3);
		}
	};
}
