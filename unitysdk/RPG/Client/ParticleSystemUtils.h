#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET UNITYSDK_OFFSET(0xAC40300)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0xAC404E0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xAC403C0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0xAC40440)
#define RPG_CLIENT_PARTICLESYSTEMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xAC405B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemUtils_TypeDefinitionIndex = 67111;

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

		::System::Void SetPlaybackSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET))(this, speed);
		}

		::System::Void SetStartColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET))(this, color);
		}

		::UnityEngine::Material* GetParticleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET))(this);
		}
	};
}
