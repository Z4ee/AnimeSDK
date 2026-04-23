#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_2_0FC02A23C567CABD_OFFSET UNITYSDK_OFFSET(0x18D45F80)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D45FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRogueMagicUnitRandomListConfig_TypeDefinitionIndex = 16821;

	class RogueModifierRogueMagicUnitRandomListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0FC02A23C567CABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRogueMagicUnitRandomListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRogueMagicUnitRandomListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_2_0FC02A23C567CABD_OFFSET))(a1, a2);
		}
	};
}
