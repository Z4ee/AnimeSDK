#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_7847EC16FC62ECB8_OFFSET UNITYSDK_OFFSET(0x19B0BF10)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_EE21DE1223E8B42C_OFFSET UNITYSDK_OFFSET(0x19B0BE00)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGameProcess_TypeDefinitionIndex = 21057;

	class RogueAdvRoomCandyCrashGameProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE21DE1223E8B42C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_EE21DE1223E8B42C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7847EC16FC62ECB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGAMEPROCESS_METHOD_3_7847EC16FC62ECB8_OFFSET))(a1, a2);
		}
	};
}
