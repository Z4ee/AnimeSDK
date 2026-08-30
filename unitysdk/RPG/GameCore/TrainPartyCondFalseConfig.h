#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_59AE9D5565DE6026_OFFSET UNITYSDK_OFFSET(0x1D534410)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_808C200923294942_OFFSET UNITYSDK_OFFSET(0x1D534460)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D534450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondFalseConfig_TypeDefinitionIndex = 17875;

	class TrainPartyCondFalseConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_59AE9D5565DE6026(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_59AE9D5565DE6026_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_808C200923294942(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_5_808C200923294942_OFFSET))(a1, a2);
		}
	};
}
