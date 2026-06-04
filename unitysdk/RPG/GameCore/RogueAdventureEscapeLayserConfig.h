#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_METHOD_3_6CE1927FA819F5BC_OFFSET UNITYSDK_OFFSET(0x19B0CB20)
#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_METHOD_3_B40029D695B915C0_OFFSET UNITYSDK_OFFSET(0x19B0CBB0)
#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0CB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureEscapeLayserConfig_TypeDefinitionIndex = 17005;

	class RogueAdventureEscapeLayserConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B40029D695B915C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureEscapeLayserConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureEscapeLayserConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_METHOD_3_B40029D695B915C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CE1927FA819F5BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureEscapeLayserConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureEscapeLayserConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_METHOD_3_6CE1927FA819F5BC_OFFSET))(a1, a2);
		}
	};
}
