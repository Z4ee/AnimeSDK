#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_7847EC16FC62ECB8_OFFSET UNITYSDK_OFFSET(0x1C49F7D0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_EE6D9FC20FAB7BF5_OFFSET UNITYSDK_OFFSET(0x1C49F700)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49F7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGameProcess_TypeDefinitionIndex = 21472;

	class RogueAdvRoomCandyCrashGameProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE6D9FC20FAB7BF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_EE6D9FC20FAB7BF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7847EC16FC62ECB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_7847EC16FC62ECB8_OFFSET))(a1, a2);
		}
	};
}
