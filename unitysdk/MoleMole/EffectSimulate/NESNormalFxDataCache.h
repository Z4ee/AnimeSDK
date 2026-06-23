#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/NESDataCacheBase.h"

namespace MoleMole { class MonoEffectPluginFade; }

#define MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11600370)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NESNormalFxDataCache_TypeDefinitionIndex = 64776;

	class NESNormalFxDataCache : public ::MoleMole::EffectSimulate::NESDataCacheBase
	{
	public:
		::MoleMole::MonoEffectPluginFade* monoEffectFadeCache; // 0x10
		::System::Boolean hasAnyFadeOutControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESNORMALFXDATACACHE__CTOR_OFFSET))(this);
		}
	};
}
