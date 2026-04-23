#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_30;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameVoteEffectData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F03800)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETSELFSELECTEDEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0x9F03B80)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETVOTEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9F03A30)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0x9F037E0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_VOTEEFFECTDATALIST_OFFSET UNITYSDK_OFFSET(0x9F037F0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F038E0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__INITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x9F03FC0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F039E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameVoteData_TypeDefinitionIndex = 58100;

	class CakeRaceGameVoteData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>* _EffectList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameVoteEffectData*>* _VoteEffectDataList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_30*>* _VoteItemInfos; // 0x20
		::System::UInt64 _VoteStartTimeStamp; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_30*>* voteItemInfos, ::System::UInt64 voteStartTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_30*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA__CTOR_OFFSET))(this, voteItemInfos, voteStartTimeStamp);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceEffectDataItem*>* get_EffectList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_EFFECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameVoteEffectData*>* get_VoteEffectDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameVoteEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_VOTEEFFECTDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameVoteData* Create(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_30*>* voteEffectInfos, ::System::UInt64 voteStartTimeStamp)
		{
			return ((::RPG::Client::CakeRaceGameVoteData*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_30*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_CREATE_OFFSET))(voteEffectInfos, voteStartTimeStamp);
		}

		::System::UInt64 GetVoteEndTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETVOTEENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 GetSelfSelectedEffectIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETSELFSELECTEDEFFECTINDEX_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA__INITEFFECTLIST_OFFSET))(this);
		}
	};
}
