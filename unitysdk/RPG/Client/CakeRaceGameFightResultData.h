#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0C8375E94F25B0D;
class Class_1_FFE5B8A52EC38E9C_4;
namespace RPG::Client { class CakeRaceGameFightResultCatData; }
namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9C44B0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GETRANKENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC9C46D0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xC9C43F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_FIGHTRESULTCATDATALIST_OFFSET UNITYSDK_OFFSET(0xC9B4FB0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_LASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xC9C4490)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xC9C4440)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SORTEDPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0xC9B2D90)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SETLASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xC9B2D40)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_SET_LASTSELFGAMERANKINDEX_OFFSET UNITYSDK_OFFSET(0xC9C44A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_TRYREFRESHOFFLINEPARTICIPANT_OFFSET UNITYSDK_OFFSET(0xC9C8F50)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C4580)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITCATDATALIST_OFFSET UNITYSDK_OFFSET(0xC9C7880)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITPARTICIPANTDATAMAP_OFFSET UNITYSDK_OFFSET(0xC9C4920)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INITSORTEDPARTICIPANTLIST_OFFSET UNITYSDK_OFFSET(0xC9C8070)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC9C4670)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__SETOFFLINEPARTICIPANT_OFFSET UNITYSDK_OFFSET(0xC9C8FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultData_TypeDefinitionIndex = 63089;

	class CakeRaceGameFightResultData : public ::System::Object
	{
	public:
		::Class_1_F0C8375E94F25B0D* _SectionViewData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* _SortedParticipantDataList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* _ParticipantMap; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultCatData*>* _FightResultCatDataList; // 0x28
		::System::Int32 _LastSelfGameRankIndex_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_F0C8375E94F25B0D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0C8375E94F25B0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_FFE5B8A52EC38E9C_4* get_CurrentSection()
		{
			return ((::Class_1_FFE5B8A52EC38E9C_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_4*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA_GET_SECTIONS_OFFSET))(this);
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
