#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F683F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__STARTPVEMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x8F68E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__STARTPVEMATCH_B__1_OFFSET UNITYSDK_OFFSET(0x8F68FA0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePlayerProgressInfo___c__DisplayClass6_0_TypeDefinitionIndex = 61445;

	class MarblePlayerProgressInfo___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarbleMatchContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartPVEMatch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__STARTPVEMATCH_B__0_OFFSET))(this);
		}

		::System::Void _StartPVEMatch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPLAYERPROGRESSINFO___C__DISPLAYCLASS6_0__STARTPVEMATCH_B__1_OFFSET))(this);
		}
	};
}
