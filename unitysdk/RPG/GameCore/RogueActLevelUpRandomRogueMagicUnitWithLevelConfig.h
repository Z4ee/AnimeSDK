#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_6_C90D852BB6B66606_OFFSET UNITYSDK_OFFSET(0x175B8E10)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_6_ED2F810F0D940093_OFFSET UNITYSDK_OFFSET(0x175B9030)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B8F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicUnitWithLevelConfig_TypeDefinitionIndex = 18039;

	class RogueActLevelUpRandomRogueMagicUnitWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C90D852BB6B66606(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_6_C90D852BB6B66606_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_ED2F810F0D940093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_METHOD_6_ED2F810F0D940093_OFFSET))(a1, a2);
		}
	};
}
