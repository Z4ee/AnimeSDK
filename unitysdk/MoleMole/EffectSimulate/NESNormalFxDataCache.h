#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/NESDataCacheBase.h"

namespace MoleMole { class MonoEffectPluginFade; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE_METHOD_2_E907F5C75FFBA4EA_OFFSET UNITYSDK_OFFSET(0x1426FFF0)
#define MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x14270130)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NESNormalFxDataCache_TypeDefinitionIndex = 46664;

	class NESNormalFxDataCache : public ::MoleMole::EffectSimulate::NESDataCacheBase
	{
	public:
		::MoleMole::MonoEffectPluginFade* monoEffectFadeCache; // 0x10
		::System::Boolean hasAnyFadeOutControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E907F5C75FFBA4EA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE_METHOD_2_E907F5C75FFBA4EA_OFFSET))(this, a1);
		}
	};
}
