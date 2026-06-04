#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_9;
namespace RPG::Client { class CakeRaceGameSettlementTitleData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB49E620)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET UNITYSDK_OFFSET(0xB49E460)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITCOIN_OFFSET UNITYSDK_OFFSET(0xB49E570)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITSCORE_OFFSET UNITYSDK_OFFSET(0xB49E5C0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB49E480)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB4899D0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SETTLEMENTTITLEDATALIST_OFFSET UNITYSDK_OFFSET(0xB49E610)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITCOIN_OFFSET UNITYSDK_OFFSET(0xB49E4D0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITSCORE_OFFSET UNITYSDK_OFFSET(0xB49E520)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET UNITYSDK_OFFSET(0xB49E470)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB49E6F0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET UNITYSDK_OFFSET(0xB49E750)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameSettlementData_TypeDefinitionIndex = 59012;

	class CakeRaceGameSettlementData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameSettlementTitleData*>* _SettlementTitleDataList; // 0x10
		::Class_1_F3CA30716D4FAF92_9* _GameEnd_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_F3CA30716D4FAF92_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_F3CA30716D4FAF92_9* get_GameEnd()
		{
			return ((::Class_1_F3CA30716D4FAF92_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET))(this);
		}

		::System::Void set_GameEnd(::Class_1_F3CA30716D4FAF92_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_RANK_OFFSET))(this);
		}

		::System::Int32 get_TotalProfitCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITCOIN_OFFSET))(this);
		}

		::System::UInt32 get_TotalProfitScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITSCORE_OFFSET))(this);
		}

		::System::Int32 get_MaxProfitCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITCOIN_OFFSET))(this);
		}

		::System::UInt32 get_MaxProfitScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITSCORE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameSettlementTitleData*>* get_SettlementTitleDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameSettlementTitleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SETTLEMENTTITLEDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameSettlementData* Create(::Class_1_F3CA30716D4FAF92_9* a1)
		{
			return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET))(this);
		}
	};
}
