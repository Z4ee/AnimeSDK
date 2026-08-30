#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class MatchThreeModule; }

#define RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISENTRYFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xDE71320)
#define RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xDE71260)
#define RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDE712C0)
#define RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE711F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentMatchThreeActivityData_TypeDefinitionIndex = 66029;

	class ResidentMatchThreeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::MatchThreeModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsEntryFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMATCHTHREEACTIVITYDATA_ISENTRYFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}
	};
}
