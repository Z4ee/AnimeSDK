#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE40350)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0___FIREEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBE40F70)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLaserView___c__DisplayClass1_0_TypeDefinitionIndex = 71846;

	class PixAirLaserView___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MonoEffect*>* onLoaded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void __FireEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___C__DISPLAYCLASS1_0___FIREEFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
