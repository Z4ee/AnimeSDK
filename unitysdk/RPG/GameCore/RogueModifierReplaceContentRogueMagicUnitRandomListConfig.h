#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_66C3D7B84060EFBF_OFFSET UNITYSDK_OFFSET(0x19B9B690)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_96AA3665A4F94546_OFFSET UNITYSDK_OFFSET(0x19B9B5C0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9B640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicUnitRandomListConfig_TypeDefinitionIndex = 16837;

	class RogueModifierReplaceContentRogueMagicUnitRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96AA3665A4F94546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_96AA3665A4F94546_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66C3D7B84060EFBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_66C3D7B84060EFBF_OFFSET))(a1, a2);
		}
	};
}
