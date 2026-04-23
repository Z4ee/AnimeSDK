#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_METHOD_3_AA0ABA221FEFB60C_OFFSET UNITYSDK_OFFSET(0x18D2A7E0)
#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_METHOD_3_F5D36A5A7EC16D55_OFFSET UNITYSDK_OFFSET(0x18D2A710)
#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2A790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig_TypeDefinitionIndex = 16939;

	class RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5D36A5A7EC16D55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_METHOD_3_F5D36A5A7EC16D55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA0ABA221FEFB60C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_METHOD_3_AA0ABA221FEFB60C_OFFSET))(a1, a2);
		}
	};
}
