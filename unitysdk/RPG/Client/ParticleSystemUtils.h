#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F1B5C0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9F1B7A0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x9F1B680)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x9F1B700)
#define RPG_CLIENT_PARTICLESYSTEMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1B870)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemUtils_TypeDefinitionIndex = 59715;

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
