#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_FROMSTAR_OFFSET UNITYSDK_OFFSET(0xCEF7850)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSORDEREDBYSTARDESCENDING_OFFSET UNITYSDK_OFFSET(0xCEFEC20)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSTATENAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0xCEFF040)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSTATENAMEBYRANK_OFFSET UNITYSDK_OFFSET(0xCEFC4D0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETSTARBYRANK_OFFSET UNITYSDK_OFFSET(0xCEFE930)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEFF0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRankHelper_TypeDefinitionIndex = 63909;

	class ExpeditionBattleRankHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__RankStateNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRankHelper_TypeDefinitionIndex)->GetStaticField(0x66660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ExpeditionBattleRank FromStar(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRank(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_FROMSTAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetStarByRank(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETSTARBYRANK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GetRanksOrderedByStarDescending()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSORDEREDBYSTARDESCENDING_OFFSET))();
		}

		static ::System::String* GetRankStateNameByIndex(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSTATENAMEBYINDEX_OFFSET))(a1);
		}

		static ::System::String* GetRankStateNameByRank(::RPG::Client::ExpeditionBattleRank a1)
		{
			return ((::System::String*(*)(::RPG::Client::ExpeditionBattleRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER_GETRANKSTATENAMEBYRANK_OFFSET))(a1);
		}
	};
}
