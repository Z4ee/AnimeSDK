#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6_11;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB134D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS23_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB1355C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo___c__DisplayClass23_0_TypeDefinitionIndex = 70084;

	class IdleLiveDungeonInfo___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Class_1_C821CB457FB5EBC6_11* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS23_0__UPDATE_B__0_OFFSET))(this, a1);
		}
	};
}
