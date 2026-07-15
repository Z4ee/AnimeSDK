#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_01E9971A6E85F63B_OFFSET UNITYSDK_OFFSET(0x1D165AA0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_66C3D7B84060EFBF_OFFSET UNITYSDK_OFFSET(0x1D165AF0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicUnitRandomListConfig_TypeDefinitionIndex = 16999;

	class RogueModifierReplaceContentRogueMagicUnitRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01E9971A6E85F63B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_01E9971A6E85F63B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66C3D7B84060EFBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_METHOD_3_66C3D7B84060EFBF_OFFSET))(a1, a2);
		}
	};
}
