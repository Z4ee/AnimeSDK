#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_E2A4FE2CDC15C1F4_OFFSET UNITYSDK_OFFSET(0x1D3F72A0)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_EDE8C04648D74BF0_OFFSET UNITYSDK_OFFSET(0x1D3F72F0)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F72E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierCopyBattleSelectMagicUnitConfig_TypeDefinitionIndex = 17518;

	class RogueModifierCopyBattleSelectMagicUnitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2A4FE2CDC15C1F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_E2A4FE2CDC15C1F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDE8C04648D74BF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_METHOD_3_EDE8C04648D74BF0_OFFSET))(a1, a2);
		}
	};
}
