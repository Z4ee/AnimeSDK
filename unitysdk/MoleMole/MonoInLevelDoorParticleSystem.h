#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOINLEVELDOORPARTICLESYSTEM_ONPARTICLESYSTEMSTOPPED_OFFSET UNITYSDK_OFFSET(0x12643A50)
#define MOLEMOLE_MONOINLEVELDOORPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12643BD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelDoorParticleSystem_TypeDefinitionIndex = 46266;

	class MonoInLevelDoorParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* mStopHideObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELDOORPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleSystemStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELDOORPARTICLESYSTEM_ONPARTICLESYSTEMSTOPPED_OFFSET))(this);
		}
	};
}
