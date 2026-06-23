#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeInitTransformBehavior.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_METHOD_4_25317D1DD74E2173_OFFSET UNITYSDK_OFFSET(0x18AEDC80)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_METHOD_4_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x18AEDF40)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEDF20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitSetScale_TypeDefinitionIndex = 48837;

	class ESEmptyNodeInitSetScale : public ::MoleMole::EffectSimulate::ESEmptyNodeInitTransformBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_25317D1DD74E2173(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_METHOD_4_25317D1DD74E2173_OFFSET))(this, a1);
		}

		::System::Void Method_4_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_METHOD_4_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}
	};
}
