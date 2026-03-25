#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D16597294F5284D_10;
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xA5F6320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_SKILLBRIEFLIST_OFFSET UNITYSDK_OFFSET(0xA5F6340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA5F6300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xA5F6330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_SKILLBRIEFLIST_OFFSET UNITYSDK_OFFSET(0xA5F6350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA5F6310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA5F6160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F6110)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardAnimInfo_TypeDefinitionIndex = 61119;

	class TrainPartyCardAnimInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _SkillBriefList_k__BackingField; // 0x10
		::System::UInt32 _BaseValue_k__BackingField; // 0x18
		::System::UInt32 _UniqueId_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6D16597294F5284D_10* cardBrief)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6D16597294F5284D_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SYNC_OFFSET))(this, cardBrief);
		}

		::System::UInt32 get_UniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_BASEVALUE_OFFSET))(this);
		}

		::System::Void set_BaseValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_BASEVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* get_SkillBriefList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_SKILLBRIEFLIST_OFFSET))(this);
		}

		::System::Void set_SkillBriefList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_SKILLBRIEFLIST_OFFSET))(this, value);
		}
	};
}
