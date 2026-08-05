#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x1B581FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1B581EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B581F40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPlugin_TypeDefinitionIndex = 80969;

	class ESPlugin : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPLUGIN_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
		}
	};
}
