#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_9;
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xCAA53E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_SKILLBRIEFLIST_OFFSET UNITYSDK_OFFSET(0xCAA5400)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAA53C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0xCAA53F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_SKILLBRIEFLIST_OFFSET UNITYSDK_OFFSET(0xCAA5410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAA53D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCAA51B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA5160)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardAnimInfo_TypeDefinitionIndex = 69418;

	class TrainPartyCardAnimInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _SkillBriefList_k__BackingField; // 0x10
		::System::UInt32 _UniqueId_k__BackingField; // 0x18
		::System::UInt32 _BaseValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_28D410CCE235575F_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BaseValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_BASEVALUE_OFFSET))(this);
		}

		::System::Void set_BaseValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_BASEVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* get_SkillBriefList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_GET_SKILLBRIEFLIST_OFFSET))(this);
		}

		::System::Void set_SkillBriefList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDANIMINFO_SET_SKILLBRIEFLIST_OFFSET))(this, a1);
		}
	};
}
