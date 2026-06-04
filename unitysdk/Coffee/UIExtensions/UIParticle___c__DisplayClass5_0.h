#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1466F520)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__DISPLAYCLASS5_0__PAUSEONTIME_B__0_OFFSET UNITYSDK_OFFSET(0x14675270)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c__DisplayClass5_0_TypeDefinitionIndex = 41537;

	class UIParticle___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::UInt32 randomSeed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseOnTime_b__0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__DISPLAYCLASS5_0__PAUSEONTIME_B__0_OFFSET))(this, a1);
		}
	};
}
