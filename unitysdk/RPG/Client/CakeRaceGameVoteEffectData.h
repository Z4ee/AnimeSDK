#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_30;
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F04210)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x9F042E0)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_PARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x9F04330)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_VOTEPLAYERIDLIST_OFFSET UNITYSDK_OFFSET(0x9F04290)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F04340)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameVoteEffectData_TypeDefinitionIndex = 58101;

	class CakeRaceGameVoteEffectData : public ::System::Object
	{
	public:
		::Class_1_45BB92167AED63A0_30* _VoteData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _ParticipantDataList; // 0x18

		::System::Void _ctor(::Class_1_45BB92167AED63A0_30* voteData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA__CTOR_OFFSET))(this, voteData);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_VotePlayerIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_VOTEPLAYERIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_EFFECTID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceParticipantData*>* get_ParticipantDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_PARTICIPANTDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameVoteEffectData* Create(::Class_1_45BB92167AED63A0_30* voteData)
		{
			return ((::RPG::Client::CakeRaceGameVoteEffectData*(*)(::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET))(voteData);
		}
	};
}
