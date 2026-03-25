#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_0FA0D782729DB17A_OFFSET UNITYSDK_OFFSET(0x17639560)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_F9CF0E213CB76133_OFFSET UNITYSDK_OFFSET(0x1762CF50)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByFinishGambleConfig_TypeDefinitionIndex = 16274;

	class RogueModifierSetCountByFinishGambleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0FA0D782729DB17A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_0FA0D782729DB17A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9CF0E213CB76133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_METHOD_3_F9CF0E213CB76133_OFFSET))(a1, a2);
		}
	};
}
