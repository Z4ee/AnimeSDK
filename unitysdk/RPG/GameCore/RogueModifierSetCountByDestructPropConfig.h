#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_METHOD_3_B7A7293E9EBC1A83_OFFSET UNITYSDK_OFFSET(0x18D46420)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_METHOD_3_C259A398F0231ECA_OFFSET UNITYSDK_OFFSET(0x18D46350)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D463D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByDestructPropConfig_TypeDefinitionIndex = 16824;

	class RogueModifierSetCountByDestructPropConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C259A398F0231ECA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_METHOD_3_C259A398F0231ECA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7A7293E9EBC1A83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_METHOD_3_B7A7293E9EBC1A83_OFFSET))(a1, a2);
		}
	};
}
