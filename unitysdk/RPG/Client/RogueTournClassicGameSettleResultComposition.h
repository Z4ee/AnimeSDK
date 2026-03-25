#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA3849B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xA3849F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xA3849D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET UNITYSDK_OFFSET(0xA384A10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET UNITYSDK_OFFSET(0xA384C00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA3849C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xA384A00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xA3849E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xA384C50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameSettleResultComposition_TypeDefinitionIndex = 55341;

	class RogueTournClassicGameSettleResultComposition : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournGameScoreSettleResult* _TournExp_k__BackingField; // 0x10
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScore_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoin_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScore()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET))(this);
		}

		::System::Void set_RogueScore(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TournExp()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET))(this);
		}

		::System::Void set_TournExp(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET))(this, value);
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
