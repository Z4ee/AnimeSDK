#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GameObjectAudio; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE212090)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__UPDATETSCSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xE212920)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__UPDATETSCSTATE_B__1_OFFSET UNITYSDK_OFFSET(0xE212950)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c__DisplayClass66_0_TypeDefinitionIndex = 70169;

	class TimeSpaceCrisscrossGroupBehavior___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Boolean audioState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTsCState_b__0(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__UPDATETSCSTATE_B__0_OFFSET))(this, a1);
		}

		::System::Void _UpdateTsCState_b__1(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS66_0__UPDATETSCSTATE_B__1_OFFSET))(this, a1);
		}
	};
}
