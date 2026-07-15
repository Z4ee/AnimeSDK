#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_5168D6BF18BB56C7_OFFSET UNITYSDK_OFFSET(0x1D1651A0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_A3EADA44CD9DBF6B_OFFSET UNITYSDK_OFFSET(0x1D1651F0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1651E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardAnyTypeConfig_TypeDefinitionIndex = 17100;

	class RogueModifierPersonaRoomCardAnyTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5168D6BF18BB56C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_5168D6BF18BB56C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3EADA44CD9DBF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_A3EADA44CD9DBF6B_OFFSET))(a1, a2);
		}
	};
}
