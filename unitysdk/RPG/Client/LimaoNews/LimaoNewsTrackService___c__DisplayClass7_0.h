#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsTrackService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__BEGINTRACKOFFICE_B__0_OFFSET UNITYSDK_OFFSET(0x19B73000)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B70710)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsTrackService___c__DisplayClass7_0_TypeDefinitionIndex = 75447;

	class LimaoNewsTrackService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* surveyItem; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsTrackService* __4__this; // 0x18

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
