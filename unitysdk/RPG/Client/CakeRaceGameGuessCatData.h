#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_20;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceGameGuessParticipantData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F00E60)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GETWINRATETYPE_OFFSET UNITYSDK_OFFSET(0x9F015B0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATCONFIGID_OFFSET UNITYSDK_OFFSET(0x9F00D90)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x9F00D70)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_GUESSPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x9F00DE0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_ODDS_OFFSET UNITYSDK_OFFSET(0x9F00DF0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9F00E40)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x9F010D0)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x9F00D80)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9F00E50)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F00F30)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INITPLAYERIDTOBETCOINMAP_OFFSET UNITYSDK_OFFSET(0x9F01120)
#define RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F00F90)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessCatData_TypeDefinitionIndex = 58074;

	class CakeRaceGameGuessCatData : public ::System::Object
	{
	public:
		::Class_1_4BC858D7C27E10ED_20* _GuessCatData; // 0x10
		::RPG::Client::CakeRaceCatDataItem* _CatDataItem_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessParticipantData*>* _GuessParticipantDataList_k__BackingField; // 0x20
		::System::UInt32 _Rank_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_4BC858D7C27E10ED_20* guessCatData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA__CTOR_OFFSET))(this, guessCatData);
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

		static ::RPG::Client::CakeRaceGameGuessCatData* Create(::Class_1_4BC858D7C27E10ED_20* guessCatData)
		{
			return ((::RPG::Client::CakeRaceGameGuessCatData*(*)(::Class_1_4BC858D7C27E10ED_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSCATDATA_CREATE_OFFSET))(guessCatData);
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
