#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournAreaGroupData; }

#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISGUIDE_OFFSET UNITYSDK_OFFSET(0x198405F0)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISREGULAR_OFFSET UNITYSDK_OFFSET(0x19840D30)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISWEEKCHALLENGE_OFFSET UNITYSDK_OFFSET(0x19841270)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaGroupDataExt_TypeDefinitionIndex = 64501;

	class RogueTournAreaGroupDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsGuide(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISGUIDE_OFFSET))(a1);
		}

		static ::System::Boolean IsRegular(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISREGULAR_OFFSET))(a1);
		}

		static ::System::Boolean IsWeekChallenge(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISWEEKCHALLENGE_OFFSET))(a1);
		}
	};
}
