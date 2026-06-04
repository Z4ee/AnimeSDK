#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC498A50)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC498A90)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET UNITYSDK_OFFSET(0xC498AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex = 60063;

	class PlayerChallengePeakRecordBossData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex)->GetStaticField(0xDA30);
		}
		static ::RPG::Client::PlayerChallengePeakRecordBossData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengePeakRecordBossData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex)->GetStaticField(0xDA38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__49_0(::Class_1_1CBA230307F9C289* a1, ::Class_1_1CBA230307F9C289* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289*, ::Class_1_1CBA230307F9C289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET))(this, a1, a2);
		}
	};
}
