#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_808C200923294942_OFFSET UNITYSDK_OFFSET(0x178AA040)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_A4766245E5C523F0_OFFSET UNITYSDK_OFFSET(0x178A9F10)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A9FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondFalseConfig_TypeDefinitionIndex = 16596;

	class TrainPartyCondFalseConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A4766245E5C523F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_A4766245E5C523F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_808C200923294942(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_808C200923294942_OFFSET))(a1, a2);
		}
	};
}
