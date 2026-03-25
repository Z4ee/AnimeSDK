#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPlayerRankingListInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96ED680)
#define RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__FETCHPLAYERSRANKINGINFO_B__0_OFFSET UNITYSDK_OFFSET(0x96F6040)
#define RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__FETCHPLAYERSRANKINGINFO_B__1_OFFSET UNITYSDK_OFFSET(0x96F60B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule___c__DisplayClass3_0_TypeDefinitionIndex = 52128;

	class FiveDimModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo* rankingInfo; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*>* promise; // 0x18
		::System::Boolean isFriendRefreshPromiseResResolved; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _FetchPlayersRankingInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__FETCHPLAYERSRANKINGINFO_B__0_OFFSET))(this);
		}

		::System::Void _FetchPlayersRankingInfo_b__1(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo* rankingListInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__DISPLAYCLASS3_0__FETCHPLAYERSRANKINGINFO_B__1_OFFSET))(this, rankingListInfo);
		}
	};
}
