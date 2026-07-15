#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_METHOD_3_BC51E342ADC8EE23_OFFSET UNITYSDK_OFFSET(0x1D1644D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_METHOD_3_FFA3D03B0A4E301F_OFFSET UNITYSDK_OFFSET(0x1D164480)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1644C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReplenishRoomCardLevelConfig_TypeDefinitionIndex = 17114;

	class RogueModifierModifyReplenishRoomCardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFA3D03B0A4E301F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_METHOD_3_FFA3D03B0A4E301F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC51E342ADC8EE23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_METHOD_3_BC51E342ADC8EE23_OFFSET))(a1, a2);
		}
	};
}
