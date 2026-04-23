#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG_METHOD_3_998E9B1FB95D8E0A_OFFSET UNITYSDK_OFFSET(0x18D65810)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG_METHOD_3_B3148174849D1BCE_OFFSET UNITYSDK_OFFSET(0x18D65AC0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D65800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByRoomTypeConfig_TypeDefinitionIndex = 18854;

	class RoguePersonaRoomCardFilterByRoomTypeConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3148174849D1BCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG_METHOD_3_B3148174849D1BCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_998E9B1FB95D8E0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYROOMTYPECONFIG_METHOD_3_998E9B1FB95D8E0A_OFFSET))(a1, a2);
		}
	};
}
