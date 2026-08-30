#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_5_12FC527702259D13_OFFSET UNITYSDK_OFFSET(0x1D5321E0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_5_7705E55C84CBC44F_OFFSET UNITYSDK_OFFSET(0x1D532370)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5321D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerSelectPassengerSkillConfig_TypeDefinitionIndex = 17867;

	class TrainPartyActionTrigerSelectPassengerSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7705E55C84CBC44F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_5_7705E55C84CBC44F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_12FC527702259D13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_5_12FC527702259D13_OFFSET))(a1, a2);
		}
	};
}
