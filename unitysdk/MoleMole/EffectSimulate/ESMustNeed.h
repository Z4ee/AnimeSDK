#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x16AC2590)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x16AC2680)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x16AC2720)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16AC2530)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16AC27E0)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16AC25F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC2630)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMustNeed_TypeDefinitionIndex = 73703;

	class ESMustNeed : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::System::String* logStr; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_2_2685B6183E614529_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_2685B6183E614529_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_2685B6183E614529_3_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
