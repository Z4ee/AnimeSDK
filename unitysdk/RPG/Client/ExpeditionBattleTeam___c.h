#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleTeamMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE4B2A0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4B2E0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C__GETMEMBERCOUNT_B__15_0_OFFSET UNITYSDK_OFFSET(0xCE4B2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeam___c_TypeDefinitionIndex = 63856;

	class ExpeditionBattleTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ExpeditionBattleTeamMember*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::ExpeditionBattleTeamMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleTeam___c_TypeDefinitionIndex)->GetStaticField(0x47980);
		}
		static ::RPG::Client::ExpeditionBattleTeam___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionBattleTeam___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleTeam___c_TypeDefinitionIndex)->GetStaticField(0x47988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberCount_b__15_0(::RPG::Client::ExpeditionBattleTeamMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C__GETMEMBERCOUNT_B__15_0_OFFSET))(this, a1);
		}
	};
}
