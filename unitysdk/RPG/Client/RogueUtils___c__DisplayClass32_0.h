#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ROGUEUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EDD60)
#define RPG_CLIENT_ROGUEUTILS___C__DISPLAYCLASS32_0__TELEPORTTOENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0xA3EDF10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueUtils___c__DisplayClass32_0_TypeDefinitionIndex = 54992;

	class RogueUtils___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action* preTeleportCallback; // 0x10
		::System::UInt32 entranceID; // 0x18
		::System::UInt32 mappingInfoID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _TeleportToEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS___C__DISPLAYCLASS32_0__TELEPORTTOENTRANCE_B__0_OFFSET))(this);
		}
	};
}
