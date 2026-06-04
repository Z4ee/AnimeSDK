#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC80B490)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC80B4D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xC80B4B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET UNITYSDK_OFFSET(0xC80B4F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET UNITYSDK_OFFSET(0xC80B700)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC80B4A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC80B4E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xC80B4C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xC80B750)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameSettleResultComposition_TypeDefinitionIndex = 63465;

	class RogueTournClassicGameSettleResultComposition : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournGameScoreSettleResult* _TournExp_k__BackingField; // 0x10
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoin_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScore_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScore()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET))(this);
		}

		::System::Void set_RogueScore(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TournExp()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET))(this);
		}

		::System::Void set_TournExp(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET))(this, a1);
		}

		::System::Boolean IsAllScoresEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET))(this);
		}

		::System::Boolean IsAllTalentCoinsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET))(this);
		}
	};
}
