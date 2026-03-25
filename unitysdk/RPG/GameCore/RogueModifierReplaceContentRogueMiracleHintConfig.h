#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_METHOD_3_2814F9756B4E284E_OFFSET UNITYSDK_OFFSET(0x17638C50)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_METHOD_3_B67C0DB013475AC7_OFFSET UNITYSDK_OFFSET(0x17638D20)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17638CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMiracleHintConfig_TypeDefinitionIndex = 16259;

	class RogueModifierReplaceContentRogueMiracleHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2814F9756B4E284E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_METHOD_3_2814F9756B4E284E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B67C0DB013475AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_METHOD_3_B67C0DB013475AC7_OFFSET))(a1, a2);
		}
	};
}
