#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFD54C0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD5500)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xBFD5510)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex = 59203;

	class MessageContentChallengePeakTeamBlock___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MessageContentChallengePeakTeamBlock___c** StaticGet___9()
		{
			return (::RPG::Client::MessageContentChallengePeakTeamBlock___c**)Il2CppClass::FromTypeDefinitionIndex(MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex)->GetStaticField(0x58E50);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex)->GetStaticField(0x58E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C___CTOR_B__2_0_OFFSET))(this, a1);
		}
	};
}
