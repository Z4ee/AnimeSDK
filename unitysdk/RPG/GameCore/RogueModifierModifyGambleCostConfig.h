#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_4AD7A8A680DC5164_OFFSET UNITYSDK_OFFSET(0x18D40F00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_650D314BAE0E81DD_OFFSET UNITYSDK_OFFSET(0x18D40FD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyGambleCostConfig_TypeDefinitionIndex = 16851;

	class RogueModifierModifyGambleCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AD7A8A680DC5164(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_4AD7A8A680DC5164_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_650D314BAE0E81DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_650D314BAE0E81DD_OFFSET))(a1, a2);
		}
	};
}
