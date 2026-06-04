#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_01F7BE26D6BB8D12_OFFSET UNITYSDK_OFFSET(0x19B9A0C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_A3EADA44CD9DBF6B_OFFSET UNITYSDK_OFFSET(0x19B9A190)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9A140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardAnyTypeConfig_TypeDefinitionIndex = 16938;

	class RogueModifierPersonaRoomCardAnyTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01F7BE26D6BB8D12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_01F7BE26D6BB8D12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3EADA44CD9DBF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_METHOD_3_A3EADA44CD9DBF6B_OFFSET))(a1, a2);
		}
	};
}
