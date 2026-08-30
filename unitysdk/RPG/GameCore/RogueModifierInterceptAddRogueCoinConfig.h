#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_METHOD_3_8AD1CC935F50AF38_OFFSET UNITYSDK_OFFSET(0x1EEF9E20)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_METHOD_3_8CA475D48EE7D6FC_OFFSET UNITYSDK_OFFSET(0x1EEF9DD0)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierInterceptAddRogueCoinConfig_TypeDefinitionIndex = 17753;

	class RogueModifierInterceptAddRogueCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8CA475D48EE7D6FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_METHOD_3_8CA475D48EE7D6FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AD1CC935F50AF38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_METHOD_3_8AD1CC935F50AF38_OFFSET))(a1, a2);
		}
	};
}
