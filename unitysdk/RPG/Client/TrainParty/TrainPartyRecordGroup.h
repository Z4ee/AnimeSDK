#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_CLEARALLRECORD_OFFSET UNITYSDK_OFFSET(0xB352C30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0xB352B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_HASRECORD_OFFSET UNITYSDK_OFFSET(0xB351A20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_PUSHRECORD_OFFSET UNITYSDK_OFFSET(0xB352CC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_SORT_OFFSET UNITYSDK_OFFSET(0xB351A80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB352CA0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyRecordGroup_TypeDefinitionIndex = 68626;

	class TrainPartyRecordGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* _TrainRecordInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP__CTOR_OFFSET))(this);
		}

		::System::Void PushRecord(::RPG::Client::TrainParty::TrainPartyRecordInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_PUSHRECORD_OFFSET))(this, info);
		}

		::System::Void ClearAllRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_CLEARALLRECORD_OFFSET))(this);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_SORT_OFFSET))(this);
		}

		::System::Boolean HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_HASRECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* GetRecordInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_GETRECORDINFOLIST_OFFSET))(this);
		}
	};
}
