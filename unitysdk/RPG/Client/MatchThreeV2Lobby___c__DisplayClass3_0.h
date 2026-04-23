#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeOpponentData; }

#define RPG_CLIENT_MATCHTHREEV2LOBBY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8553F0)
#define RPG_CLIENT_MATCHTHREEV2LOBBY___C__DISPLAYCLASS3_0__GETOPPONENTDATABYUID_B__0_OFFSET UNITYSDK_OFFSET(0xA8561F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Lobby___c__DisplayClass3_0_TypeDefinitionIndex = 60805;

	class MatchThreeV2Lobby___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOpponentDataByUID_b__0(::RPG::Client::MatchThreeOpponentData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LOBBY___C__DISPLAYCLASS3_0__GETOPPONENTDATABYUID_B__0_OFFSET))(this, x);
		}
	};
}
