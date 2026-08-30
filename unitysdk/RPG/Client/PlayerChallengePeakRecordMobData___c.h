#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2E2E30)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E2E70)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C___SYNCLINEUP_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C2E2E80)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex = 64327;

	class PlayerChallengePeakRecordMobData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlayerChallengePeakRecordMobData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengePeakRecordMobData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex)->GetStaticField(0x5C3C0);
		}
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex)->GetStaticField(0x5C3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__2_0(::Class_1_1CBA230307F9C289* a1, ::Class_1_1CBA230307F9C289* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289*, ::Class_1_1CBA230307F9C289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C___SYNCLINEUP_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
