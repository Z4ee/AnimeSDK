#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHESSROGUEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F7FE0)
#define RPG_CLIENT_CHESSROGUEUTILS___C__DISPLAYCLASS23_0__TELEPORTTOENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1A4F8770)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueUtils___c__DisplayClass23_0_TypeDefinitionIndex = 63944;

	class ChessRogueUtils___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* preTeleportCallback; // 0x10
		::System::UInt32 mappingInfoID; // 0x18
		::System::UInt32 entranceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TeleportToEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS___C__DISPLAYCLASS23_0__TELEPORTTOENTRANCE_B__0_OFFSET))(this);
		}
	};
}
