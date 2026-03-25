#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameVoteData; }

#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x92505F0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x9250A70)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0x9250A90)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET UNITYSDK_OFFSET(0x9250AB0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x9250A80)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTINDEX_OFFSET UNITYSDK_OFFSET(0x9250AA0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET UNITYSDK_OFFSET(0x9250AC0)
#define RPG_CLIENT_CAKERACEVOTERESULTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9250A60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceVoteResultMessage_TypeDefinitionIndex = 51181;

	class CakeRaceVoteResultMessage : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceEffectDataItem* _ResultEffectData_k__BackingField; // 0x10
		::System::UInt32 _ResultEffectIndex_k__BackingField; // 0x18
		::System::UInt32 _SelectedIndexInVotesOfResultEffect_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::CakeRaceEffectDataItem* resultEffectData, ::System::UInt32 effectIndex, ::System::UInt32 selectedIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectDataItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE__CTOR_OFFSET))(this, resultEffectData, effectIndex, selectedIndex);
		}

		static ::RPG::Client::CakeRaceVoteResultMessage* Create(::RPG::Client::CakeRaceGameVoteData* voteData, ::RPG::Client::CakeRaceEffectDataItem* resultEffectData, ::System::UInt32 selectedUid)
		{
			return ((::RPG::Client::CakeRaceVoteResultMessage*(*)(::RPG::Client::CakeRaceGameVoteData*, ::RPG::Client::CakeRaceEffectDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_CREATE_OFFSET))(voteData, resultEffectData, selectedUid);
		}

		::RPG::Client::CakeRaceEffectDataItem* get_ResultEffectData()
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTDATA_OFFSET))(this);
		}

		::System::Void set_ResultEffectData(::RPG::Client::CakeRaceEffectDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_ResultEffectIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_RESULTEFFECTINDEX_OFFSET))(this);
		}

		::System::Void set_ResultEffectIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_RESULTEFFECTINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedIndexInVotesOfResultEffect()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_GET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET))(this);
		}

		::System::Void set_SelectedIndexInVotesOfResultEffect(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEVOTERESULTMESSAGE_SET_SELECTEDINDEXINVOTESOFRESULTEFFECT_OFFSET))(this, value);
		}
	};
}
