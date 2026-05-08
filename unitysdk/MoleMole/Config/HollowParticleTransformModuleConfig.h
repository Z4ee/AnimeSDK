#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AC327AA661D91B2;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x12437B40)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x12437CE0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12437DB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleTransformModuleConfig_TypeDefinitionIndex = 61672;

	class HollowParticleTransformModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::UnityEngine::Vector3 LocalRotOffset; // 0x18
		::UnityEngine::Vector3 LocalPosOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_0AC327AA661D91B2* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
