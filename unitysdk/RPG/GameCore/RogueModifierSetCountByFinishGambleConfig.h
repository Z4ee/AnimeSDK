#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_B030E8DB7CBDFA6F_OFFSET UNITYSDK_OFFSET(0x1D3FC6B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_F9CF0E213CB76133_OFFSET UNITYSDK_OFFSET(0x1D3FC700)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByFinishGambleConfig_TypeDefinitionIndex = 17508;

	class RogueModifierSetCountByFinishGambleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B030E8DB7CBDFA6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_B030E8DB7CBDFA6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9CF0E213CB76133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_F9CF0E213CB76133_OFFSET))(a1, a2);
		}
	};
}
