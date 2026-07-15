#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_CLEARALLRECORD_OFFSET UNITYSDK_OFFSET(0x1988CAD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1988CC40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1988CBE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_PUSHRECORD_OFFSET UNITYSDK_OFFSET(0x1988C9B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_SORT_OFFSET UNITYSDK_OFFSET(0x1988CB60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1988C9A0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyRecordGroup_TypeDefinitionIndex = 70959;

	class TrainPartyRecordGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* _TrainRecordInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP__CTOR_OFFSET))(this);
		}

		::System::Void PushRecord(::RPG::Client::TrainParty::TrainPartyRecordInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDGROUP_PUSHRECORD_OFFSET))(this, a1);
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
