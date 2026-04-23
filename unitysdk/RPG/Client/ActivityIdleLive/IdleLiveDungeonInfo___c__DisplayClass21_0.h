#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4CDB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS21_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x9B4DB40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo___c__DisplayClass21_0_TypeDefinitionIndex = 69271;

	class IdleLiveDungeonInfo___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_1_36E3880E987172D7_7* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS21_0__UPDATE_B__0_OFFSET))(this, data);
		}
	};
}
