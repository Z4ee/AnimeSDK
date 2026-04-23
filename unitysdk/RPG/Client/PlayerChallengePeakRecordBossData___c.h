#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_12;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD5A1B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5A1F0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET UNITYSDK_OFFSET(0xAD5A200)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex = 59132;

	class PlayerChallengePeakRecordBossData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlayerChallengePeakRecordBossData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengePeakRecordBossData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex)->GetStaticField(0x67300);
		}
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordBossData___c_TypeDefinitionIndex)->GetStaticField(0x67308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__49_0(::Class_1_1CBA230307F9C289_12* x, ::Class_1_1CBA230307F9C289_12* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289_12*, ::Class_1_1CBA230307F9C289_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA___C___SYNCLINEUP_B__49_0_OFFSET))(this, x, y);
		}
	};
}
