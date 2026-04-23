#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_METHOD_3_30A7BA89A297BB1B_OFFSET UNITYSDK_OFFSET(0x191066A0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_METHOD_3_D7D1CDAC3F6A846B_OFFSET UNITYSDK_OFFSET(0x19106730)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19106700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueAdventureRoomStart_TypeDefinitionIndex = 19791;

	class WaitRogueAdventureRoomStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_30A7BA89A297BB1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_METHOD_3_30A7BA89A297BB1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7D1CDAC3F6A846B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_METHOD_3_D7D1CDAC3F6A846B_OFFSET))(a1, a2);
		}
	};
}
