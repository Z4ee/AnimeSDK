#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_5;
namespace RPG::Client { class CakeRaceGameSettlementTitleData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x923F6B0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET UNITYSDK_OFFSET(0x923F4A0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITCOIN_OFFSET UNITYSDK_OFFSET(0x923F5B0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITSCORE_OFFSET UNITYSDK_OFFSET(0x923F600)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x923F4C0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x923F650)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SETTLEMENTTITLEDATALIST_OFFSET UNITYSDK_OFFSET(0x923F6A0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITCOIN_OFFSET UNITYSDK_OFFSET(0x923F510)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITSCORE_OFFSET UNITYSDK_OFFSET(0x923F560)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET UNITYSDK_OFFSET(0x923F4B0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x923F780)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET UNITYSDK_OFFSET(0x923F7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameSettlementData_TypeDefinitionIndex = 51175;

	class CakeRaceGameSettlementData : public ::System::Object
	{
	public:
		::Class_1_F3CA30716D4FAF92_5* _GameEnd_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameSettlementTitleData*>* _SettlementTitleDataList; // 0x18

		::System::Void _ctor(::Class_1_F3CA30716D4FAF92_5* gameEnd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__CTOR_OFFSET))(this, gameEnd);
		}

		::Class_1_F3CA30716D4FAF92_5* get_GameEnd()
		{
			return ((::Class_1_F3CA30716D4FAF92_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET))(this);
		}

		::System::Void set_GameEnd(::Class_1_F3CA30716D4FAF92_5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET))(this, value);
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

		static ::RPG::Client::CakeRaceGameSettlementData* Create(::Class_1_F3CA30716D4FAF92_5* gameEndData)
		{
			return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET))(gameEndData);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET))(this);
		}
	};
}
