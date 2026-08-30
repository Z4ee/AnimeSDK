#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyMeetingCategoryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDF9960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_ISALLCARDUNIQUE_OFFSET UNITYSDK_OFFSET(0x1BDFAC60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_ISFINALPLAY_OFFSET UNITYSDK_OFFSET(0x1BDFAC00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_LEFTCARDNUM_OFFSET UNITYSDK_OFFSET(0x1BDFACC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_SELECTEDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDFABB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_ISPASSENGERSCORED_OFFSET UNITYSDK_OFFSET(0x1BDFA550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF9850)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPreviewInfo_MeetingPreviewContext_TypeDefinitionIndex = 74236;

	class TrainPartyMeetingPreviewInfo_MeetingPreviewContext : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* PreviewSkillInfo; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerData* PreviewPassengerData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* SelectedCards; // 0x20
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x28
		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* MatchCategoryInfo; // 0x30
		::System::Boolean IsAllCardNeedScored; // 0x38

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyMeetingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsPassengerScored(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_ISPASSENGERSCORED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinalPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_ISFINALPLAY_OFFSET))(this);
		}

		::System::Int32 get_SelectedCardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_SELECTEDCARDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_LeftCardNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_LEFTCARDNUM_OFFSET))(this);
		}

		::System::Boolean get_IsAllCardUnique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_MEETINGPREVIEWCONTEXT_GET_ISALLCARDUNIQUE_OFFSET))(this);
		}
	};
}
