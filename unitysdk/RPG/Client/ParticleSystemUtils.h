#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET UNITYSDK_OFFSET(0xC3500B0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0xC350290)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xC350170)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0xC3501F0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xC350350)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemUtils_TypeDefinitionIndex = 68054;

	class ParticleSystemUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* _ParticleSystem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET))(this);
		}

		::System::Void SetPlaybackSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET))(this, a1);
		}

		::System::Void SetStartColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetParticleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET))(this);
		}
	};
}
