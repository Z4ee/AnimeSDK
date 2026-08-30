#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTeam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD6A4A0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET UNITYSDK_OFFSET(0x1AD6A510)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET UNITYSDK_OFFSET(0x1AD6A4F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1AD6A530)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6A4E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET UNITYSDK_OFFSET(0x1AD6A5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c_TypeDefinitionIndex = 63261;

	class ChallengePeakTeamContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x28410);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x28418);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x28420);
		}
		static ::RPG::Client::ChallengePeakTeamContext___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakTeamContext___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x28428);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakTeamContext___c_TypeDefinitionIndex)->GetStaticField(0x28430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckAnyNormalTeamIsEmpty_b__29_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAnyNormalTeamHasChanged_b__30_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAnyNormalTeamNeedForceSave_b__31_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET))(this, a1);
		}

		::System::UInt32 __CheckHaveEquipmentConflict_b__42_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET))(this, a1);
		}
	};
}
