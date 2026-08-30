#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_9;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceGameGuessParticipantData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9C9850)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GETWINRATETYPE_OFFSET UNITYSDK_OFFSET(0xC9CA0C0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATCONFIGID_OFFSET UNITYSDK_OFFSET(0xC9C9780)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0xC9C9760)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_GUESSPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0xC9C97D0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_ODDS_OFFSET UNITYSDK_OFFSET(0xC9C97E0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC9C9830)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0xC9C9AC0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0xC9C9770)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC9C9840)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C9920)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INITPLAYERIDTOBETCOINMAP_OFFSET UNITYSDK_OFFSET(0xC9C9B10)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC9C9980)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessCatData_TypeDefinitionIndex = 63109;

	class CakeRaceGameGuessCatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessParticipantData*>* _GuessParticipantDataList_k__BackingField; // 0x10
		::Class_1_10F56A639581CEB1_9* _GuessCatData; // 0x18
		::RPG::Client::CakeRaceCatDataItem* _CatDataItem_k__BackingField; // 0x20
		::System::UInt32 _Rank_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_10F56A639581CEB1_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDataItem()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATDATAITEM_OFFSET))(this);
		}

		::System::Void set_CatDataItem(::RPG::Client::CakeRaceCatDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_CATDATAITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CatConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATCONFIGID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessParticipantData*>* get_GuessParticipantDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_GUESSPARTICIPANTDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_Odds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_ODDS_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_RANK_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceGameGuessCatData* Create(::Class_1_10F56A639581CEB1_9* a1)
		{
			return ((::RPG::Client::CakeRaceGameGuessCatData*(*)(::Class_1_10F56A639581CEB1_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SETRANK_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitPlayerIdToBetCoinMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INITPLAYERIDTOBETCOINMAP_OFFSET))(this);
		}

		::System::Int32 GetWinRateType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GETWINRATETYPE_OFFSET))(this);
		}
	};
}
