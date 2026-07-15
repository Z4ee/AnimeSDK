#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleMonsterTeamDetailSkillData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174BE280)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174BE2C0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__GETALLPHASESKILLS_B__3_0_OFFSET UNITYSDK_OFFSET(0x174BE2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailData___c_TypeDefinitionIndex = 68771;

	class BattleMonsterTeamDetailData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailData___c_TypeDefinitionIndex)->GetStaticField(0x5A100);
		}
		static ::RPG::Client::BattleMonsterTeamDetailData___c** StaticGet___9()
		{
			return (::RPG::Client::BattleMonsterTeamDetailData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailData___c_TypeDefinitionIndex)->GetStaticField(0x5A108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPhaseSkills_b__3_0(::RPG::Client::BattleMonsterTeamDetailSkillData* a1, ::RPG::Client::BattleMonsterTeamDetailSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BattleMonsterTeamDetailSkillData*, ::RPG::Client::BattleMonsterTeamDetailSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__GETALLPHASESKILLS_B__3_0_OFFSET))(this, a1, a2);
		}
	};
}
