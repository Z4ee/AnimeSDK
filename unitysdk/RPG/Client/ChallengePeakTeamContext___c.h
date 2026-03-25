#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTeam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92F3B90)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET UNITYSDK_OFFSET(0x92F3C00)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET UNITYSDK_OFFSET(0x92F3BE0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x92F3C20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92F3BD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET UNITYSDK_OFFSET(0x92F3C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c_TypeDefinitionIndex = 51284;

	class ChallengePeakTeamContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x45510);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x45518);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x45520);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x45528);
		}
		static ::RPG::Client::ChallengePeakTeamContext___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakTeamContext___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x45530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckAnyNormalTeamIsEmpty_b__29_0(::RPG::Client::ChallengePeakTeam* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET))(this, team);
		}

		::System::Boolean _CheckAnyNormalTeamHasChanged_b__30_0(::RPG::Client::ChallengePeakTeam* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET))(this, team);
		}

		::System::Boolean _CheckAnyNormalTeamNeedForceSave_b__31_0(::RPG::Client::ChallengePeakTeam* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET))(this, team);
		}

		::System::UInt32 __CheckHaveEquipmentConflict_b__42_0(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET))(this, id);
		}
	};
}
