#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_METHOD_3_1EE4868694CC1584_OFFSET UNITYSDK_OFFSET(0x1DD617B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_METHOD_3_F949BEF85C0D6959_OFFSET UNITYSDK_OFFSET(0x1DD61850)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD61840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirImmuneConfig_TypeDefinitionIndex = 21099;

	class LittleGameAbilityEffectPixAirImmuneConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1EE4868694CC1584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_METHOD_3_1EE4868694CC1584_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F949BEF85C0D6959(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_METHOD_3_F949BEF85C0D6959_OFFSET))(a1, a2);
		}
	};
}
