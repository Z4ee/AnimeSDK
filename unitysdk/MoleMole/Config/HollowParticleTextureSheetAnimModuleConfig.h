#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"

class Class_1_0AC327AA661D91B2;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x181D8890)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x181D89C0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x181D8A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleTextureSheetAnimModuleConfig_TypeDefinitionIndex = 71506;

	class HollowParticleTextureSheetAnimModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_0AC327AA661D91B2* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
