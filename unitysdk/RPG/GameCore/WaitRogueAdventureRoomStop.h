#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_32186C84FEDFAF33_OFFSET UNITYSDK_OFFSET(0x19106740)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_35749F8A3455FDE3_OFFSET UNITYSDK_OFFSET(0x191067D0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x191067A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueAdventureRoomStop_TypeDefinitionIndex = 19792;

	class WaitRogueAdventureRoomStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32186C84FEDFAF33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_32186C84FEDFAF33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35749F8A3455FDE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_35749F8A3455FDE3_OFFSET))(a1, a2);
		}
	};
}
