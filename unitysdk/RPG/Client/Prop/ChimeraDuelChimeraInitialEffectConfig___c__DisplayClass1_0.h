#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelInitialEffectConfig; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC0DD30)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG___C__DISPLAYCLASS1_0__QUERYINITIALEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDC0DD50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraInitialEffectConfig___c__DisplayClass1_0_TypeDefinitionIndex = 77850;

	class ChimeraDuelChimeraInitialEffectConfig___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 chimeraID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _QueryInitialEffect_b__0(::RPG::Client::Prop::ChimeraDuelInitialEffectConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelInitialEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAINITIALEFFECTCONFIG___C__DISPLAYCLASS1_0__QUERYINITIALEFFECT_B__0_OFFSET))(this, a1);
		}
	};
}
