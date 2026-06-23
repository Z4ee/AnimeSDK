#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15801800)
#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x158017A0)
#define MOLEMOLE_EFFECTSIMULATE_ESRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x158017E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESRenderer_TypeDefinitionIndex = 42251;

	class ESRenderer : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESRENDERER_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
