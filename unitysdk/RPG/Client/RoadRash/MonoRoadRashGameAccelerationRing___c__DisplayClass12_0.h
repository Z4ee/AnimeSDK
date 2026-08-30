#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameAccelerationRing; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE7EFD0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING___C__DISPLAYCLASS12_0__TRIGGEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDE7F160)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameAccelerationRing___c__DisplayClass12_0_TypeDefinitionIndex = 75434;

	class MonoRoadRashGameAccelerationRing___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGameAccelerationRing* __4__this; // 0x10
		::System::UInt32 effectID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING___C__DISPLAYCLASS12_0__TRIGGEREFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
