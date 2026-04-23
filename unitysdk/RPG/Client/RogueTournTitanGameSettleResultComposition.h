#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameDivisionSettleResult; }
namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_DIVISION_OFFSET UNITYSDK_OFFSET(0xB112A30)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB1129D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB112A10)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TITANTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB112A50)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xB1129F0)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET UNITYSDK_OFFSET(0xB112A70)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET UNITYSDK_OFFSET(0xB112B00)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_DIVISION_OFFSET UNITYSDK_OFFSET(0xB112A40)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB1129E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB112A20)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TITANTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB112A60)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0xB112A00)
#define RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xB1129C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanGameSettleResultComposition_TypeDefinitionIndex = 62543;

	class RogueTournTitanGameSettleResultComposition : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournGameDivisionSettleResult* _Division_k__BackingField; // 0x10
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoin_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGameScoreSettleResult* _TournExp_k__BackingField; // 0x20
		::RPG::Client::IRogueTournGameScoreSettleResult* _TitanTalentCoin_k__BackingField; // 0x28
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScore_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScore()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET))(this);
		}

		::System::Void set_RogueScore(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TournExp()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET))(this);
		}

		::System::Void set_TournExp(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameDivisionSettleResult* get_Division()
		{
			return ((::RPG::Client::IRogueTournGameDivisionSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_DIVISION_OFFSET))(this);
		}

		::System::Void set_Division(::RPG::Client::IRogueTournGameDivisionSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameDivisionSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_DIVISION_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TitanTalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_GET_TITANTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TitanTalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_SET_TITANTALENTCOIN_OFFSET))(this, value);
		}

		::System::Boolean IsAllScoresEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET))(this);
		}

		::System::Boolean IsAllTalentCoinsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET))(this);
		}
	};
}
