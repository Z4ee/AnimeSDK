#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"

class Class_1_0AC327AA661D91B2;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x12437910)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x124379F0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12437AC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleInitialModuleConfig_TypeDefinitionIndex = 44319;

	class HollowParticleInitialModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Boolean Loop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_0AC327AA661D91B2* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
