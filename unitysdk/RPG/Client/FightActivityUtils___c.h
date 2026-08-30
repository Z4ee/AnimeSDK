#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD04D460)
#define RPG_CLIENT_FIGHTACTIVITYUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD04D490)
#define RPG_CLIENT_FIGHTACTIVITYUTILS___C__GETINSCHEDULEFIGHTGROUPS_B__0_0_OFFSET UNITYSDK_OFFSET(0xD04D4A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS___C__GETMONSTERIDSBYSTAGEID_B__2_0_OFFSET UNITYSDK_OFFSET(0xD04D570)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils___c_TypeDefinitionIndex = 64234;

	class FightActivityUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::MonsterRank>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::MonsterRank>**)Il2CppClass::FromTypeDefinitionIndex(FightActivityUtils___c_TypeDefinitionIndex)->GetStaticField(0xE3E0);
		}
		static ::System::Comparison_1<::RPG::Client::FightActivityGroupInfo>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::FightActivityGroupInfo>**)Il2CppClass::FromTypeDefinitionIndex(FightActivityUtils___c_TypeDefinitionIndex)->GetStaticField(0xE3E8);
		}
		static ::RPG::Client::FightActivityUtils___c** StaticGet___9()
		{
			return (::RPG::Client::FightActivityUtils___c**)Il2CppClass::FromTypeDefinitionIndex(FightActivityUtils___c_TypeDefinitionIndex)->GetStaticField(0xE3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetInScheduleFightGroups_b__0_0(::RPG::Client::FightActivityGroupInfo a1, ::RPG::Client::FightActivityGroupInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS___C__GETINSCHEDULEFIGHTGROUPS_B__0_0_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MonsterRank _GetMonsterIDsByStageID_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS___C__GETMONSTERIDSBYSTAGEID_B__2_0_OFFSET))(this, a1);
		}
	};
}
