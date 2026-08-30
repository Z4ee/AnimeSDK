#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAA1220)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA1260)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__68_0_OFFSET UNITYSDK_OFFSET(0xCAA12A0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__GET_VORACITYINVASIONLEVEL_B__33_0_OFFSET UNITYSDK_OFFSET(0xCAA1270)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss___c_TypeDefinitionIndex = 63226;

	class ChallengePeakBoss___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__68_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakBoss___c_TypeDefinitionIndex)->GetStaticField(0x256F0);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakBoss___c_TypeDefinitionIndex)->GetStaticField(0x256F8);
		}
		static ::RPG::Client::ChallengePeakBoss___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakBoss___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakBoss___c_TypeDefinitionIndex)->GetStaticField(0x25700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_VoracityInvasionLevel_b__33_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__GET_VORACITYINVASIONLEVEL_B__33_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCountOfPassedTargetsInEasyMode_b__68_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__68_0_OFFSET))(this, a1);
		}
	};
}
