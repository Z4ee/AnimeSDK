#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC078B0)
#define RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER_ONPARTICLETRIGGER_OFFSET UNITYSDK_OFFSET(0xCC07980)
#define RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC07B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankCookieAddController_TypeDefinitionIndex = 72402;

	class ChimeraRankCookieAddController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* ParticleSystem; // 0x18
		::UnityEngine::Transform* NeedEnableNode; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* PJLECGBBKDJ; // 0x28
		::System::Boolean GLGEDJLEOFI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnParticleTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKCOOKIEADDCONTROLLER_ONPARTICLETRIGGER_OFFSET))(this);
		}
	};
}
