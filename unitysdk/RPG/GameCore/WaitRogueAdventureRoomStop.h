#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_1032F56253E91DDF_OFFSET UNITYSDK_OFFSET(0x1DEBFCF0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_35749F8A3455FDE3_OFFSET UNITYSDK_OFFSET(0x1DEBFD40)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBFD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueAdventureRoomStop_TypeDefinitionIndex = 20574;

	class WaitRogueAdventureRoomStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1032F56253E91DDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_1032F56253E91DDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35749F8A3455FDE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueAdventureRoomStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_METHOD_3_35749F8A3455FDE3_OFFSET))(a1, a2);
		}
	};
}
