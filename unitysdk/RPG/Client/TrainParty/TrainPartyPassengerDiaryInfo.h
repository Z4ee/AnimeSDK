#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerDiaryData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_GET_DIARYDATALIST_OFFSET UNITYSDK_OFFSET(0xE2700E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_RESET_OFFSET UNITYSDK_OFFSET(0xE270100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SET_DIARYDATALIST_OFFSET UNITYSDK_OFFSET(0xE2700F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xE26EF90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE26ECA0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryInfo_TypeDefinitionIndex = 74245;

	class TrainPartyPassengerDiaryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>* _DiaryDataList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>* get_DiaryDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_GET_DIARYDATALIST_OFFSET))(this);
		}

		::System::Void set_DiaryDataList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SET_DIARYDATALIST_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_RESET_OFFSET))(this);
		}
	};
}
