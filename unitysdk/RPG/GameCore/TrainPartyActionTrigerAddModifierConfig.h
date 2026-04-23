#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_5_14B467EBC7510812_OFFSET UNITYSDK_OFFSET(0x190A6580)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_5_1F010051E036599B_OFFSET UNITYSDK_OFFSET(0x190A6850)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190A6530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddModifierConfig_TypeDefinitionIndex = 17181;

	class TrainPartyActionTrigerAddModifierConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1F010051E036599B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_5_1F010051E036599B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_14B467EBC7510812(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_5_14B467EBC7510812_OFFSET))(a1, a2);
		}
	};
}
