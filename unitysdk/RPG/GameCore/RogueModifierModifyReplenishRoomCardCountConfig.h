#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_0387289EA814C5C6_OFFSET UNITYSDK_OFFSET(0x176356E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_9AEE597403E5A26F_OFFSET UNITYSDK_OFFSET(0x17635610)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17635690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReplenishRoomCardCountConfig_TypeDefinitionIndex = 16384;

	class RogueModifierModifyReplenishRoomCardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AEE597403E5A26F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_9AEE597403E5A26F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0387289EA814C5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_METHOD_3_0387289EA814C5C6_OFFSET))(a1, a2);
		}
	};
}
