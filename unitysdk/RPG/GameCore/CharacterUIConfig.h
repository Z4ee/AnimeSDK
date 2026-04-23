#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERUICONFIG_METHOD_2_278AAEA5821DE4BF_OFFSET UNITYSDK_OFFSET(0x187CFC90)
#define RPG_GAMECORE_CHARACTERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187D9390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterUIConfig_TypeDefinitionIndex = 15667;

	class CharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterHUDType HUDType; // 0x10
		::RPG::GameCore::ActionBarType ActionBarType; // 0x14
		::RPG::GameCore::CrosshairType CrosshairType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_278AAEA5821DE4BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG_METHOD_2_278AAEA5821DE4BF_OFFSET))(a1, a2);
		}
	};
}
