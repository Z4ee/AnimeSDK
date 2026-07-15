#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoardEnv; }

#define RPG_CLIENT_MATCHTHREEBOARDENV___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8977F0)
#define RPG_CLIENT_MATCHTHREEBOARDENV___C__DISPLAYCLASS7_0__SETGRIDTAG_B__0_OFFSET UNITYSDK_OFFSET(0x1A897B60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoardEnv___c__DisplayClass7_0_TypeDefinitionIndex = 62989;

	class MatchThreeBoardEnv___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoardEnv* __4__this; // 0x10
		::RPG::Client::MatchThreeBoardEnvTag envTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGridTag_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV___C__DISPLAYCLASS7_0__SETGRIDTAG_B__0_OFFSET))(this);
		}
	};
}
