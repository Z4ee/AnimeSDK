#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_19;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceGameGuessParticipantData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x923D890)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GETWINRATETYPE_OFFSET UNITYSDK_OFFSET(0x923DFE0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATCONFIGID_OFFSET UNITYSDK_OFFSET(0x923D7C0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x923D7A0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_GUESSPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x923D810)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_ODDS_OFFSET UNITYSDK_OFFSET(0x923D820)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x923D870)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x923DB00)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x923D7B0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x923D880)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x923D960)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INITPLAYERIDTOBETCOINMAP_OFFSET UNITYSDK_OFFSET(0x923DB50)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INIT_OFFSET UNITYSDK_OFFSET(0x923D9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessCatData_TypeDefinitionIndex = 51154;

	class CakeRaceGameGuessCatData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceCatDataItem* _CatDataItem_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessParticipantData*>* _GuessParticipantDataList_k__BackingField; // 0x18
		::Class_1_99BD961747420BEB_19* _GuessCatData; // 0x20
		::System::UInt32 _Rank_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_99BD961747420BEB_19* guessCatData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET))(this, guessCatData);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDataItem()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATDATAITEM_OFFSET))(this);
		}

		::System::Void set_CatDataItem(::RPG::Client::CakeRaceCatDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_CATDATAITEM_OFFSET))(this, value);
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

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_RANK_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRaceGameGuessCatData* Create(::Class_1_99BD961747420BEB_19* guessCatData)
		{
			return ((::RPG::Client::CakeRaceGameGuessCatData*(*)(::Class_1_99BD961747420BEB_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET))(guessCatData);
		}

		::System::Void SetRank(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SETRANK_OFFSET))(this, index);
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
