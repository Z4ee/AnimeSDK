#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2A9800)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A9840)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__GETCACHESORTEDALLMEMBERDATAS_B__9_0_OFFSET UNITYSDK_OFFSET(0xE2A9850)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTeamData___c_TypeDefinitionIndex = 68191;

	class TreasureDungeonTeamData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TreasureDungeonTeamData___c** StaticGet___9()
		{
			return (::RPG::Client::TreasureDungeonTeamData___c**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonTeamData___c_TypeDefinitionIndex)->GetStaticField(0x5E960);
		}
		static ::System::Comparison_1<::RPG::Client::MemberData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::MemberData*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeonTeamData___c_TypeDefinitionIndex)->GetStaticField(0x5E968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCacheSortedAllMemberDatas_b__9_0(::RPG::Client::MemberData* a1, ::RPG::Client::MemberData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MemberData*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__GETCACHESORTEDALLMEMBERDATAS_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
