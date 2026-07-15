#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A88E790)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS23_0__DOSWITCHPIECE_B__0_OFFSET UNITYSDK_OFFSET(0x1A896EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass23_0_TypeDefinitionIndex = 62967;

	class MatchThreeBoard___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoSwitchPiece_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS23_0__DOSWITCHPIECE_B__0_OFFSET))(this);
		}
	};
}
