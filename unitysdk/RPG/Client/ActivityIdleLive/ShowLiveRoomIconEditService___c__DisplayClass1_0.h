#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class LiveRoomIconUiData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB17B200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0___FINDDEFAULTICONIDBYHEROAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xB17B240)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditService___c__DisplayClass1_0_TypeDefinitionIndex = 70238;

	class ShowLiveRoomIconEditService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* itemIconPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindDefaultIconIdByHeroAvatar_b__0(::RPG::Client::ActivityIdleLive::LiveRoomIconUiData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0___FINDDEFAULTICONIDBYHEROAVATAR_B__0_OFFSET))(this, a1);
		}
	};
}
