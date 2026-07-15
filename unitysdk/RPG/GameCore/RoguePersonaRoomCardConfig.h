#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDCONFIG_METHOD_2_6083BBBDCD60BAB1_OFFSET UNITYSDK_OFFSET(0x1BB67950)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB67990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardConfig_TypeDefinitionIndex = 19018;

	class RoguePersonaRoomCardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6083BBBDCD60BAB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDCONFIG_METHOD_2_6083BBBDCD60BAB1_OFFSET))(a1, a2);
		}
	};
}
