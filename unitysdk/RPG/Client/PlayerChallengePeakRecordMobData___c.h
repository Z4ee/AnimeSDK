#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_9;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FE16B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE16F0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C___SYNCLINEUP_B__2_0_OFFSET UNITYSDK_OFFSET(0x9FE1700)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex = 52178;

	class PlayerChallengePeakRecordMobData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex)->GetStaticField(0x471A0);
		}
		static ::RPG::Client::PlayerChallengePeakRecordMobData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengePeakRecordMobData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengePeakRecordMobData___c_TypeDefinitionIndex)->GetStaticField(0x471A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__2_0(::Class_1_352A8B3482C80E7D_9* x, ::Class_1_352A8B3482C80E7D_9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_9*, ::Class_1_352A8B3482C80E7D_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA___C___SYNCLINEUP_B__2_0_OFFSET))(this, x, y);
		}
	};
}
