#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_METHOD_3_CF392BA7A16835D3_OFFSET UNITYSDK_OFFSET(0x18D65710)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_METHOD_3_D8026FA21552B60F_OFFSET UNITYSDK_OFFSET(0x18D658C0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D65700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAnyConfig_TypeDefinitionIndex = 18863;

	class RoguePersonaRoomCardFilterByAnyConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8026FA21552B60F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_METHOD_3_D8026FA21552B60F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF392BA7A16835D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_METHOD_3_CF392BA7A16835D3_OFFSET))(a1, a2);
		}
	};
}
