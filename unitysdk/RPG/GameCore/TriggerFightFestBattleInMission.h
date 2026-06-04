#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_244A3684DBD03876_OFFSET UNITYSDK_OFFSET(0x19E154D0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_C6710AA0C49F25A2_OFFSET UNITYSDK_OFFSET(0x19E155E0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E155B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestBattleInMission_TypeDefinitionIndex = 20504;

	class TriggerFightFestBattleInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_244A3684DBD03876(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestBattleInMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestBattleInMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_244A3684DBD03876_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6710AA0C49F25A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_C6710AA0C49F25A2_OFFSET))(a1, a2);
		}
	};
}
