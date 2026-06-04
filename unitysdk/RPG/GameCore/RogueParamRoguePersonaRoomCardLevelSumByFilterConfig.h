#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_METHOD_6_7353F91307180F3C_OFFSET UNITYSDK_OFFSET(0x19BB1330)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_METHOD_6_B6B8AF77A05A5492_OFFSET UNITYSDK_OFFSET(0x19BB1080)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardLevelSumByFilterConfig_TypeDefinitionIndex = 18802;

	class RogueParamRoguePersonaRoomCardLevelSumByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B6B8AF77A05A5492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_METHOD_6_B6B8AF77A05A5492_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7353F91307180F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_METHOD_6_7353F91307180F3C_OFFSET))(a1, a2);
		}
	};
}
