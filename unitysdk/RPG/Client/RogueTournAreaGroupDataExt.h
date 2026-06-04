#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournAreaGroupData; }

#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xC7F0BC0)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISREGULAR_OFFSET UNITYSDK_OFFSET(0xC7F1300)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATAEXT_ISWEEKCHALLENGE_OFFSET UNITYSDK_OFFSET(0xC7F18B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaGroupDataExt_TypeDefinitionIndex = 63134;

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
