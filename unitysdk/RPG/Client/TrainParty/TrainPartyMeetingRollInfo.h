#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98F510457EDFDB86;
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ADDNEWCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BDF7800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETFINALCARDLIST_OFFSET UNITYSDK_OFFSET(0x1BDFBAA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETTRIGGERSKILLANIMINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BDFB8E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GET_OLDRATIO_OFFSET UNITYSDK_OFFSET(0x1BDFBB10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISCARDDISCARDED_OFFSET UNITYSDK_OFFSET(0x1BDFB920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISNEWCARD_OFFSET UNITYSDK_OFFSET(0x1BDFB9E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ONROLLFINISH_OFFSET UNITYSDK_OFFSET(0x1BDF7890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SETOLDRATIO_OFFSET UNITYSDK_OFFSET(0x1BDF7AA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SET_OLDRATIO_OFFSET UNITYSDK_OFFSET(0x1BDFBB20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF86E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingRollInfo_TypeDefinitionIndex = 74241;

	class TrainPartyMeetingRollInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _TriggerSkillAnimInfoList; // 0x10
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DiscardCardUniqueIDList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCardUniqueIDList; // 0x28
		::System::UInt32 _OldRatio_k__BackingField; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* a1, ::RPG::Client::TrainParty::TrainPartyMeetingData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnRollFinish(::Class_1_98F510457EDFDB86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98F510457EDFDB86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ONROLLFINISH_OFFSET))(this, a1);
		}

		::System::Void AddNewCardUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ADDNEWCARDUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void SetOldRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SETOLDRATIO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* GetTriggerSkillAnimInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETTRIGGERSKILLANIMINFOLIST_OFFSET))(this);
		}

		::System::Boolean IsCardDiscarded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISCARDDISCARDED_OFFSET))(this, a1);
		}

		::System::Boolean IsNewCard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISNEWCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetFinalCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETFINALCARDLIST_OFFSET))(this);
		}

		::System::UInt32 get_OldRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GET_OLDRATIO_OFFSET))(this);
		}

		::System::Void set_OldRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SET_OLDRATIO_OFFSET))(this, a1);
		}
	};
}
