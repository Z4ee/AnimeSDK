#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_METHOD_2_E628521DD0260EED_OFFSET UNITYSDK_OFFSET(0x1C161AA0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C161AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierListConfig_TypeDefinitionIndex = 17366;

	class TrainPartyModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E628521DD0260EED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_METHOD_2_E628521DD0260EED_OFFSET))(a1, a2);
		}
	};
}
