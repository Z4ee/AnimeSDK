#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsTrackService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__BEGINTRACKOFFICE_B__0_OFFSET UNITYSDK_OFFSET(0xBDB4110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB2060)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsTrackService___c__DisplayClass7_0_TypeDefinitionIndex = 73796;

	class LimaoNewsTrackService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsTrackService* __4__this; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* surveyItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginTrackOffice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__BEGINTRACKOFFICE_B__0_OFFSET))(this);
		}
	};
}
