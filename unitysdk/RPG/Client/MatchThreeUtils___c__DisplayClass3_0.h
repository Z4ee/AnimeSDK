#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B52290)
#define RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS3_0__JOINANDOPENLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x9B53C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeUtils___c__DisplayClass3_0_TypeDefinitionIndex = 53603;

	class MatchThreeUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt64 roomID; // 0x10
		::System::UInt32 birdID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _JoinAndOpenLobby_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__DISPLAYCLASS3_0__JOINANDOPENLOBBY_B__0_OFFSET))(this);
		}
	};
}
