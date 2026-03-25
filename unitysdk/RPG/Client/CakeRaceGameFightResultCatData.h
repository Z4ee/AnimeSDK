#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_19;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9238620)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATCONFIGID_OFFSET UNITYSDK_OFFSET(0x9238500)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x92384E0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_FIGHTRESULTPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x9238550)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_ODDS_OFFSET UNITYSDK_OFFSET(0x9238560)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9238600)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_SPECIALODDS_OFFSET UNITYSDK_OFFSET(0x92385B0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x92388A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x92384F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9238610)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9238700)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INITPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x92388F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9238760)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultCatData_TypeDefinitionIndex = 51136;

	class CakeRaceGameFightResultCatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* _ParticipantMap; // 0x10
		::Class_1_99BD961747420BEB_19* _FightResultCatData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* _FightResultParticipantDataList; // 0x20
		::RPG::Client::CakeRaceCatDataItem* _CatDataItem_k__BackingField; // 0x28
		::System::UInt32 _Rank_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_99BD961747420BEB_19* fightResultCatData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__CTOR_OFFSET))(this, fightResultCatData);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDataItem()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATDATAITEM_OFFSET))(this);
		}

		::System::Void set_CatDataItem(::RPG::Client::CakeRaceCatDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_CATDATAITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_CatConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATCONFIGID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* get_FightResultParticipantDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_FIGHTRESULTPARTICIPANTDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_Odds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_ODDS_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOdds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_SPECIALODDS_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_RANK_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRaceGameFightResultCatData* Create(::Class_1_99BD961747420BEB_19* fightResultCatData, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* participantMap)
		{
			return ((::RPG::Client::CakeRaceGameFightResultCatData*(*)(::Class_1_99BD961747420BEB_19*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CREATE_OFFSET))(fightResultCatData, participantMap);
		}

		::System::Void SetRank(::System::UInt32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SETRANK_OFFSET))(this, rank);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitParticipantDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INITPARTICIPANTDATALIST_OFFSET))(this);
		}
	};
}
