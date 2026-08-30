#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_37;
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C64A4D0)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1C64A5A0)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_PARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x1C64A5F0)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_VOTEPLAYERIDLIST_OFFSET UNITYSDK_OFFSET(0x1C64A550)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64A630)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameVoteEffectData_TypeDefinitionIndex = 63136;

	class CakeRaceGameVoteEffectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _ParticipantDataList; // 0x10
		::Class_1_45BB92167AED63A0_37* _VoteData; // 0x18

		::System::Void _ctor(::Class_1_45BB92167AED63A0_37* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA__CTOR_OFFSET))(this, a1);
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

		static ::RPG::Client::CakeRaceGameVoteEffectData* Create(::Class_1_45BB92167AED63A0_37* a1)
		{
			return ((::RPG::Client::CakeRaceGameVoteEffectData*(*)(::Class_1_45BB92167AED63A0_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET))(a1);
		}
	};
}
