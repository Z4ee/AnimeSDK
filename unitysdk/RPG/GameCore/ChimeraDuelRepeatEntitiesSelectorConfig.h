#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG_METHOD_3_120EE5ECA9880F36_OFFSET UNITYSDK_OFFSET(0x170A49D0)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG_METHOD_3_79DCB55798A4DFA7_OFFSET UNITYSDK_OFFSET(0x170A4930)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170A49C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRepeatEntitiesSelectorConfig_TypeDefinitionIndex = 14627;

	class ChimeraDuelRepeatEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79DCB55798A4DFA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG_METHOD_3_79DCB55798A4DFA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_120EE5ECA9880F36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITIESSELECTORCONFIG_METHOD_3_120EE5ECA9880F36_OFFSET))(a1, a2);
		}
	};
}
