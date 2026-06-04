#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_METHOD_3_3911587F189157EA_OFFSET UNITYSDK_OFFSET(0x19B9CC40)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_METHOD_3_3A37ECE63C07BFA3_OFFSET UNITYSDK_OFFSET(0x19B9CD10)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9CCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffLevelConfig_TypeDefinitionIndex = 17080;

	class RogueModifierSetSelectBuffLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3911587F189157EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_METHOD_3_3911587F189157EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A37ECE63C07BFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_METHOD_3_3A37ECE63C07BFA3_OFFSET))(a1, a2);
		}
	};
}
