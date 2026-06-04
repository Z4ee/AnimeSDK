#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameVoteData; }

#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0xB4B02E0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTDATA_OFFSET UNITYSDK_OFFSET(0xB4B0770)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0xB4B0790)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET UNITYSDK_OFFSET(0xB4B07B0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTDATA_OFFSET UNITYSDK_OFFSET(0xB4B0780)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0xB4B07A0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET UNITYSDK_OFFSET(0xB4B07C0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B0760)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceVoteResultMessage_TypeDefinitionIndex = 59018;

	class CakeRaceVoteResultMessage : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceEffectDataItem* _ResultEffectData_k__BackingField; // 0x10
		::System::UInt32 _SelectedIndexInVotesOfResultEffect_k__BackingField; // 0x18
		::System::UInt32 _ResultEffectIndex_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::CakeRaceEffectDataItem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectDataItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::CakeRaceVoteResultMessage* Create(::RPG::Client::CakeRaceGameVoteData* a1, ::RPG::Client::CakeRaceEffectDataItem* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::CakeRaceVoteResultMessage*(*)(::RPG::Client::CakeRaceGameVoteData*, ::RPG::Client::CakeRaceEffectDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::CakeRaceEffectDataItem* get_ResultEffectData()
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTDATA_OFFSET))(this);
		}

		::System::Void set_ResultEffectData(::RPG::Client::CakeRaceEffectDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ResultEffectIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTINDEX_OFFSET))(this);
		}

		::System::Void set_ResultEffectIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedIndexInVotesOfResultEffect()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET))(this);
		}

		::System::Void set_SelectedIndexInVotesOfResultEffect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET))(this, a1);
		}
	};
}
