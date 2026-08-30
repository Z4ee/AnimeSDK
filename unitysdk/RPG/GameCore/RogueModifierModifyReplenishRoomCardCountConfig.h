#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_0387289EA814C5C6_OFFSET UNITYSDK_OFFSET(0x1D3FA7F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_F6CEEB7312756B6A_OFFSET UNITYSDK_OFFSET(0x1D3FA7A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReplenishRoomCardCountConfig_TypeDefinitionIndex = 17629;

	class RogueModifierModifyReplenishRoomCardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6CEEB7312756B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_F6CEEB7312756B6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0387289EA814C5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_0387289EA814C5C6_OFFSET))(a1, a2);
		}
	};
}
