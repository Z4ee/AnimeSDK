#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_METHOD_3_A8A7F5142DA3AA03_OFFSET UNITYSDK_OFFSET(0x17657D20)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_METHOD_3_E8F18D589E1380FF_OFFSET UNITYSDK_OFFSET(0x17657F90)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17657D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelMinConfig_TypeDefinitionIndex = 18211;

	class RoguePersonaRoomCardFilterByLevelMinConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8F18D589E1380FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_METHOD_3_E8F18D589E1380FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8A7F5142DA3AA03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_METHOD_3_A8A7F5142DA3AA03_OFFSET))(a1, a2);
		}
	};
}
