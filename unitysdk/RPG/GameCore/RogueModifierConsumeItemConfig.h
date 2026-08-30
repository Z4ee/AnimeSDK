#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_METHOD_3_8DF8911DF129C881_OFFSET UNITYSDK_OFFSET(0x1EEF7E40)
#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_METHOD_3_AD99E6081E42045D_OFFSET UNITYSDK_OFFSET(0x1EEF7DF0)
#define RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConsumeItemConfig_TypeDefinitionIndex = 17767;

	class RogueModifierConsumeItemConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD99E6081E42045D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConsumeItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConsumeItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_METHOD_3_AD99E6081E42045D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DF8911DF129C881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConsumeItemConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConsumeItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONSUMEITEMCONFIG_METHOD_3_8DF8911DF129C881_OFFSET))(a1, a2);
		}
	};
}
