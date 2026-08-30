#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6A1CF0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A1D30)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xD6A1D40)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex = 63327;

	class MessageContentChallengePeakTeamBlock___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex)->GetStaticField(0x66AD0);
		}
		static ::RPG::Client::MessageContentChallengePeakTeamBlock___c** StaticGet___9()
		{
			return (::RPG::Client::MessageContentChallengePeakTeamBlock___c**)Il2CppClass::FromTypeDefinitionIndex(MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex)->GetStaticField(0x66AD8);
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
