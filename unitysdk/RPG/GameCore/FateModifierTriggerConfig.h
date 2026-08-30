#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_METHOD_3_B761A0F9209725E4_OFFSET UNITYSDK_OFFSET(0x1E0CE390)
#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_METHOD_3_F073AD01B83E10A8_OFFSET UNITYSDK_OFFSET(0x1E0CE340)
#define RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierTriggerConfig_TypeDefinitionIndex = 19028;

	class FateModifierTriggerConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F073AD01B83E10A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_METHOD_3_F073AD01B83E10A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B761A0F9209725E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierTriggerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRIGGERCONFIG_METHOD_3_B761A0F9209725E4_OFFSET))(a1, a2);
		}
	};
}
