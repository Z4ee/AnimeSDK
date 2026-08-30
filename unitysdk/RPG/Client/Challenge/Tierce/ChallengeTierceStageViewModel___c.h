#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BFEC90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFECD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET UNITYSDK_OFFSET(0x18BFECE0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageViewModel___c_TypeDefinitionIndex = 80251;

	class ChallengeTierceStageViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1E580);
		}
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1E588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_VoracityInvasionLevel_b__22_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET))(this, a1);
		}
	};
}
