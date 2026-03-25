#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92DE740)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92DE780)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__66_0_OFFSET UNITYSDK_OFFSET(0x92DE790)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss___c_TypeDefinitionIndex = 51249;

	class ChallengePeakBoss___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengePeakBoss___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakBoss___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakBoss___c_TypeDefinitionIndex)->GetStaticField(0x45120);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakBoss___c_TypeDefinitionIndex)->GetStaticField(0x45128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCountOfPassedTargetsInEasyMode_b__66_0(::RPG::Client::ChallengePeakTarget* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__66_0_OFFSET))(this, target);
		}
	};
}
