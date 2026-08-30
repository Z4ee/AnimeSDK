#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4761B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__REBUILDSURVEYITEMSBYRECOMMENDID_B__0_OFFSET UNITYSDK_OFFSET(0xD4769A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyService___c__DisplayClass2_0_TypeDefinitionIndex = 79008;

	class LimaoNewsOfficeSurveyService___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 recommendSurveyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RebuildSurveyItemsByRecommendID_b__0(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__REBUILDSURVEYITEMSBYRECOMMENDID_B__0_OFFSET))(this, a1);
		}
	};
}
