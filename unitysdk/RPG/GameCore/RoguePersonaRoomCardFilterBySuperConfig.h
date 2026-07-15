#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_METHOD_3_1B5F6E4F93CD6AF2_OFFSET UNITYSDK_OFFSET(0x1BB67E50)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_METHOD_3_35E1F7A603BCF516_OFFSET UNITYSDK_OFFSET(0x1BB68120)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB67E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterBySuperConfig_TypeDefinitionIndex = 19112;

	class RoguePersonaRoomCardFilterBySuperConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35E1F7A603BCF516(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_METHOD_3_35E1F7A603BCF516_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B5F6E4F93CD6AF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_METHOD_3_1B5F6E4F93CD6AF2_OFFSET))(a1, a2);
		}
	};
}
