#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_BC5BF1014FB69499_OFFSET UNITYSDK_OFFSET(0x1762E0E0)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_EDE8C04648D74BF0_OFFSET UNITYSDK_OFFSET(0x1762E1B0)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762E160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierCopyBattleSelectMagicUnitConfig_TypeDefinitionIndex = 16284;

	class RogueModifierCopyBattleSelectMagicUnitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC5BF1014FB69499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_BC5BF1014FB69499_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDE8C04648D74BF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_EDE8C04648D74BF0_OFFSET))(a1, a2);
		}
	};
}
