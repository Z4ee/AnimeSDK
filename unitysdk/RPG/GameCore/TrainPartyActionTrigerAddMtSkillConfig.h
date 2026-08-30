#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_5_8BD0BE0E1677DF8D_OFFSET UNITYSDK_OFFSET(0x1D5DA380)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_5_EA33756B6252EC71_OFFSET UNITYSDK_OFFSET(0x1D5DA210)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddMtSkillConfig_TypeDefinitionIndex = 17869;

	class TrainPartyActionTrigerAddMtSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8BD0BE0E1677DF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_5_8BD0BE0E1677DF8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EA33756B6252EC71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_5_EA33756B6252EC71_OFFSET))(a1, a2);
		}
	};
}
