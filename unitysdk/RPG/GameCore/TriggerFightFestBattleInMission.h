#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_743CFF82AA3A825F_OFFSET UNITYSDK_OFFSET(0x1B056420)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_C6710AA0C49F25A2_OFFSET UNITYSDK_OFFSET(0x1B0564F0)
#define RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0564E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFightFestBattleInMission_TypeDefinitionIndex = 20919;

	class TriggerFightFestBattleInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743CFF82AA3A825F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestBattleInMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestBattleInMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_743CFF82AA3A825F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6710AA0C49F25A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFIGHTFESTBATTLEINMISSION_METHOD_3_C6710AA0C49F25A2_OFFSET))(a1, a2);
		}
	};
}
