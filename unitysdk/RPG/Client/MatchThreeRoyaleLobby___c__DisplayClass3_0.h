#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeOpponentData; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA847690)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__DISPLAYCLASS3_0__GETOPPONENTDATABYUID_B__0_OFFSET UNITYSDK_OFFSET(0xA8482D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby___c__DisplayClass3_0_TypeDefinitionIndex = 60833;

	class MatchThreeRoyaleLobby___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOpponentDataByUID_b__0(::RPG::Client::MatchThreeOpponentData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__DISPLAYCLASS3_0__GETOPPONENTDATABYUID_B__0_OFFSET))(this, x);
		}
	};
}
