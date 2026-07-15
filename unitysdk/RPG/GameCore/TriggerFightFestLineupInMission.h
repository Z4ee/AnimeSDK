#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_5FDD1F6FF2B51C3F_OFFSET UNITYSDK_OFFSET(0x1B0565B0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_6BA54C838F32ED4A_OFFSET UNITYSDK_OFFSET(0x1B0565F0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0565E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestLineupInMission_TypeDefinitionIndex = 20918;

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

		static ::System::Void Method_3_5FDD1F6FF2B51C3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestLineupInMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestLineupInMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_5FDD1F6FF2B51C3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BA54C838F32ED4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTLINEUPINMISSION_METHOD_3_6BA54C838F32ED4A_OFFSET))(a1, a2);
		}
	};
}
