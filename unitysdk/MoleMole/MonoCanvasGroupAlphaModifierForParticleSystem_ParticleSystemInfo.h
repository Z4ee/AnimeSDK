#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x7DA160)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo_TypeDefinitionIndex = 43557;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo
	{
		::UnityEngine::ParticleSystem* particleSystem; // 0x10
		::System::Boolean manualShaderConfig; // 0x18
		::Il2CppArray<::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo>* materials; // 0x20

		::System::Void Method_2_57F015DFC718ABA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
		}
	};
}
