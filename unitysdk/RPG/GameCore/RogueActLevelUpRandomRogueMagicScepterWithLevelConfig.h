#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_6_41E0999B689F24A9_OFFSET UNITYSDK_OFFSET(0x19AE8F30)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_6_78CC1DE846039374_OFFSET UNITYSDK_OFFSET(0x19AE8D10)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicScepterWithLevelConfig_TypeDefinitionIndex = 18656;

	class RogueActLevelUpRandomRogueMagicScepterWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_78CC1DE846039374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_6_78CC1DE846039374_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_41E0999B689F24A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_6_41E0999B689F24A9_OFFSET))(a1, a2);
		}
	};
}
