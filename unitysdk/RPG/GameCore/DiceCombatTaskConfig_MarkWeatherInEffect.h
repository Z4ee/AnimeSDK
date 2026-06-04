#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_METHOD_3_3160114ED26194EF_OFFSET UNITYSDK_OFFSET(0x196B9860)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_METHOD_3_4733E81D04D726A9_OFFSET UNITYSDK_OFFSET(0x196B4310)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196B42C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkWeatherInEffect_TypeDefinitionIndex = 15385;

	class DiceCombatTaskConfig_MarkWeatherInEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Boolean InEffect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3160114ED26194EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_METHOD_3_3160114ED26194EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4733E81D04D726A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_METHOD_3_4733E81D04D726A9_OFFSET))(a1, a2);
		}
	};
}
