#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AFFD5657038E04AA;
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ADDNEWCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xB356360)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETFINALCARDLIST_OFFSET UNITYSDK_OFFSET(0xB35A260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETTRIGGERSKILLANIMINFOLIST_OFFSET UNITYSDK_OFFSET(0xB35A160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GET_OLDRATIO_OFFSET UNITYSDK_OFFSET(0xB35A2D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISCARDDISCARDED_OFFSET UNITYSDK_OFFSET(0xB35A1A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISNEWCARD_OFFSET UNITYSDK_OFFSET(0xB35A200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ONROLLFINISH_OFFSET UNITYSDK_OFFSET(0xB3563C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SETOLDRATIO_OFFSET UNITYSDK_OFFSET(0xB356560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SET_OLDRATIO_OFFSET UNITYSDK_OFFSET(0xB35A2E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3571C0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingRollInfo_TypeDefinitionIndex = 68609;

	class TrainPartyMeetingRollInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCardUniqueIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _TriggerSkillAnimInfoList; // 0x18
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _DiscardCardUniqueIDList; // 0x28
		::System::UInt32 _OldRatio_k__BackingField; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* rollCardInfos, ::RPG::Client::TrainParty::TrainPartyMeetingData* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO__CTOR_OFFSET))(this, rollCardInfos, owner);
		}

		::System::Void OnRollFinish(::Class_1_AFFD5657038E04AA* resultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AFFD5657038E04AA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ONROLLFINISH_OFFSET))(this, resultInfo);
		}

		::System::Void AddNewCardUniqueID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ADDNEWCARDUNIQUEID_OFFSET))(this, id);
		}

		::System::Void SetOldRatio(::System::UInt32 ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SETOLDRATIO_OFFSET))(this, ratio);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* GetTriggerSkillAnimInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETTRIGGERSKILLANIMINFOLIST_OFFSET))(this);
		}

		::System::Boolean IsCardDiscarded(::System::UInt32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISCARDDISCARDED_OFFSET))(this, uniqueID);
		}

		::System::Boolean IsNewCard(::System::UInt32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_ISNEWCARD_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetFinalCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GETFINALCARDLIST_OFFSET))(this);
		}

		::System::UInt32 get_OldRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_GET_OLDRATIO_OFFSET))(this);
		}

		::System::Void set_OldRatio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGROLLINFO_SET_OLDRATIO_OFFSET))(this, value);
		}
	};
}
