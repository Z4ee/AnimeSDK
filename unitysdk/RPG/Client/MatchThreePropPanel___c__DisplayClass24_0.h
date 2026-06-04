#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client { class MatchThreePropPanel; }

#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF90520)
#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__DISPLAYCLASS24_0__SETUPVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xBF90750)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePropPanel___c__DisplayClass24_0_TypeDefinitionIndex = 61670;

	class MatchThreePropPanel___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreePropPanel* __4__this; // 0x10
		::RPG::Client::MatchThreeGameProp* propInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__DISPLAYCLASS24_0__SETUPVIEW_B__2_OFFSET))(this);
		}
	};
}
