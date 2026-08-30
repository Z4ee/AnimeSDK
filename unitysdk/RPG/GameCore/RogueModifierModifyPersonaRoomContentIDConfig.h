#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_METHOD_3_A3FC35CA99AD92C9_OFFSET UNITYSDK_OFFSET(0x1EEFB110)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_METHOD_3_F3FE0BED7E6DCECD_OFFSET UNITYSDK_OFFSET(0x1EEFB160)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomContentIDConfig_TypeDefinitionIndex = 17585;

	class RogueModifierModifyPersonaRoomContentIDConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3FC35CA99AD92C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_METHOD_3_A3FC35CA99AD92C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3FE0BED7E6DCECD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_METHOD_3_F3FE0BED7E6DCECD_OFFSET))(a1, a2);
		}
	};
}
