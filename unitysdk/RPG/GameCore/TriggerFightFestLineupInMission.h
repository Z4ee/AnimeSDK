#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_339AA2E9FC9F59D0_OFFSET UNITYSDK_OFFSET(0x178C7B50)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_508170CCB2BA7247_OFFSET UNITYSDK_OFFSET(0x178C7AD0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestLineupInMission_TypeDefinitionIndex = 19887;

	class TriggerFightFestLineupInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaceID; // 0x18
		::System::UInt32 ScoreRaceSpecialInviteEventID; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_508170CCB2BA7247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestLineupInMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestLineupInMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_508170CCB2BA7247_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_339AA2E9FC9F59D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_339AA2E9FC9F59D0_OFFSET))(a1, a2);
		}
	};
}
