#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM_START_OFFSET UNITYSDK_OFFSET(0x16A99EE0)
#define RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16A99C80)
#define RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99F20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogVolumeParticleSystem_TypeDefinitionIndex = 29354;

	class FogVolumeParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM_UPDATEPARAMETERS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEPARTICLESYSTEM_START_OFFSET))(this);
		}
	};
}
