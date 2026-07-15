#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeBuffViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A382370)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3823B0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A3823C0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A3825F0)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinBattlePauseChallengeViewModel___c_TypeDefinitionIndex = 76070;

	class FateRinBattlePauseChallengeViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattlePauseChallengeViewModel___c_TypeDefinitionIndex)->GetStaticField(0xA920);
		}
		static ::System::Comparison_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattlePauseChallengeViewModel___c_TypeDefinitionIndex)->GetStaticField(0xA928);
		}
		static ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattlePauseChallengeViewModel___c_TypeDefinitionIndex)->GetStaticField(0xA930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildInfo_b__1_0(::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a1, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildInfo_b__1_1(::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_1_OFFSET))(this, a1);
		}
	};
}
