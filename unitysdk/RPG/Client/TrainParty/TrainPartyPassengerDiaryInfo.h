#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerDiaryData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_GET_DIARYDATALIST_OFFSET UNITYSDK_OFFSET(0xB35C5B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_RESET_OFFSET UNITYSDK_OFFSET(0xB35C5D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SET_DIARYDATALIST_OFFSET UNITYSDK_OFFSET(0xB35C5C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB35B630)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB35B340)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryInfo_TypeDefinitionIndex = 68612;

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

		::System::Void set_DiaryDataList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerDiaryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SET_DIARYDATALIST_OFFSET))(this, value);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::System::UInt32>* diaryList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_SYNC_OFFSET))(this, diaryList);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERDIARYINFO_RESET_OFFSET))(this);
		}
	};
}
