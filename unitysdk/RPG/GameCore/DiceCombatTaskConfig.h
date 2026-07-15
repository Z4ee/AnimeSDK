#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_A5257641A02F4D53_OFFSET UNITYSDK_OFFSET(0x1C117590)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_E7F36E34A0038EEA_OFFSET UNITYSDK_OFFSET(0x1C117530)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10DE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TypeDefinitionIndex = 15423;

	class DiceCombatTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E7F36E34A0038EEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_E7F36E34A0038EEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A5257641A02F4D53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_A5257641A02F4D53_OFFSET))(a1, a2);
		}
	};
}
