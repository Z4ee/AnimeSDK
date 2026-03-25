#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACEPARTICIPANTDATA___C__DISPLAYCLASS3_0__CREATEPVPDATA_B__0_OFFSET UNITYSDK_OFFSET(0x924D760)
#define RPG_CLIENT_CAKERACEPARTICIPANTDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x924C5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceParticipantData___c__DisplayClass3_0_TypeDefinitionIndex = 51171;

	class CakeRaceParticipantData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreatePvpData_b__0(::RPG::Client::CakeRaceParticipantData* participant)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEPARTICIPANTDATA___C__DISPLAYCLASS3_0__CREATEPVPDATA_B__0_OFFSET))(this, participant);
		}
	};
}
