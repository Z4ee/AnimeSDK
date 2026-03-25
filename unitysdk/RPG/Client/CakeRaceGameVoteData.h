#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_27;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameVoteEffectData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9240210)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETSELFSELECTEDEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0x9240590)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GETVOTEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9240440)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0x92401F0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_VOTEEFFECTDATALIST_OFFSET UNITYSDK_OFFSET(0x9240200)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92402F0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__INITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x92409D0)
#define RPG_CLIENT_CAKERACEGAMEVOTEDATA__INIT_OFFSET UNITYSDK_OFFSET(0x92403F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameVoteData_TypeDefinitionIndex = 51179;

	class CakeRaceGameVoteData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>* _EffectList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_735612C94F558EAE_27*>* _VoteItemInfos; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameVoteEffectData*>* _VoteEffectDataList; // 0x20
		::System::UInt64 _VoteStartTimeStamp; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_27*>* voteItemInfos, ::System::UInt64 voteStartTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_27*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA__CTOR_OFFSET))(this, voteItemInfos, voteStartTimeStamp);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceEffectDataItem*>* get_EffectList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_EFFECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameVoteEffectData*>* get_VoteEffectDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameVoteEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_GET_VOTEEFFECTDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameVoteData* Create(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_27*>* voteEffectInfos, ::System::UInt64 voteStartTimeStamp)
		{
			return ((::RPG::Client::CakeRaceGameVoteData*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_27*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEDATA_CREATE_OFFSET))(voteEffectInfos, voteStartTimeStamp);
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
