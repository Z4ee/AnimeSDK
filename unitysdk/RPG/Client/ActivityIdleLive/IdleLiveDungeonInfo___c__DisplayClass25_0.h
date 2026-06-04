#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_6;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB135120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0___INITGAMEPLAYCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0xB135600)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo___c__DisplayClass25_0_TypeDefinitionIndex = 70085;

	class IdleLiveDungeonInfo___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::Class_1_36E3880E987172D7_6* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitGamePlayContext_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0___INITGAMEPLAYCONTEXT_B__0_OFFSET))(this, a1);
		}
	};
}
