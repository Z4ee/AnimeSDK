#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_650D314BAE0E81DD_OFFSET UNITYSDK_OFFSET(0x1D3FA010)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_FE39354CB45D9219_OFFSET UNITYSDK_OFFSET(0x1D3F9FC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyGambleCostConfig_TypeDefinitionIndex = 17531;

	class RogueModifierModifyGambleCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE39354CB45D9219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_FE39354CB45D9219_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_650D314BAE0E81DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_METHOD_3_650D314BAE0E81DD_OFFSET))(a1, a2);
		}
	};
}
