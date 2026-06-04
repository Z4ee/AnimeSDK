#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_3;
class Class_1_F0C8375E94F25B0D;
namespace RPG::Client { class CakeRaceGameFightResultCatData; }
namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB498900)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GETRANKENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB498B20)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xB498850)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_FIGHTRESULTCATDATALIST_OFFSET UNITYSDK_OFFSET(0xB4988C0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_LASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xB4988E0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB4988A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SORTEDPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0xB4988D0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SETLASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xB4892A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SET_LASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xB4988F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_TRYREFRESHOFFLINEPARTICIPANT_OFFSET UNITYSDK_OFFSET(0xB49C400)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4989D0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITCATDATALIST_OFFSET UNITYSDK_OFFSET(0xB49AEC0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITPARTICIPANTDATAMAP_OFFSET UNITYSDK_OFFSET(0xB498D70)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITSORTEDPARTICIPANTLIST_OFFSET UNITYSDK_OFFSET(0xB49B570)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INIT_OFFSET UNITYSDK_OFFSET(0xB498AC0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__SETOFFLINEPARTICIPANT_OFFSET UNITYSDK_OFFSET(0xB49C450)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultData_TypeDefinitionIndex = 58970;

	class CakeRaceGameFightResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultCatData*>* _FightResultCatDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* _ParticipantMap; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* _SortedParticipantDataList; // 0x20
		::Class_1_F0C8375E94F25B0D* _SectionViewData; // 0x28
		::System::Int32 _LastSelfGameRankIndex_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_F0C8375E94F25B0D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_1DC52A0BEDF50632_3* get_CurrentSection()
		{
			return ((::Class_1_1DC52A0BEDF50632_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultCatData*>* get_FightResultCatDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_FIGHTRESULTCATDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* get_SortedParticipantDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SORTEDPARTICIPANTDATALIST_OFFSET))(this);
		}

		::System::Int32 get_LastSelfGameRankIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_LASTSELFGAMERANKINDEX_OFFSET))(this);
		}

		::System::Void set_LastSelfGameRankIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SET_LASTSELFGAMERANKINDEX_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceGameFightResultData* Create(::Class_1_F0C8375E94F25B0D* a1)
		{
			return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt64 GetRankEndTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GETRANKENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void SetLastSelfGameRankIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SETLASTSELFGAMERANKINDEX_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitParticipantDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITPARTICIPANTDATAMAP_OFFSET))(this);
		}

		::System::Void _InitCatDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITCATDATALIST_OFFSET))(this);
		}

		::System::Void _InitSortedParticipantList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITSORTEDPARTICIPANTLIST_OFFSET))(this);
		}

		::System::Void TryRefreshOfflineParticipant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_TRYREFRESHOFFLINEPARTICIPANT_OFFSET))(this);
		}

		::System::Void _SetOfflineParticipant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__SETOFFLINEPARTICIPANT_OFFSET))(this);
		}
	};
}
