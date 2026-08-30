#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C632460)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS134_0___GETCAKERACEGAMEFIGHTRESULTSELFVOTECATDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C633050)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameplayContext___c__DisplayClass134_0_TypeDefinitionIndex = 75958;

	class CakeRaceGameplayContext___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* __9__0; // 0x10
		::System::UInt32 selfUid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCakeRaceGameFightResultSelfVoteCatData_b__0(::RPG::Client::CakeRaceGameFightResultParticipantData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEPLAYCONTEXT___C__DISPLAYCLASS134_0___GETCAKERACEGAMEFIGHTRESULTSELFVOTECATDATA_B__0_OFFSET))(this, a1);
		}
	};
}
