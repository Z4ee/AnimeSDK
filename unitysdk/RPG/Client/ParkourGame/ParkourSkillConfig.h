#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDA30B30)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_TypeDefinitionIndex = 74025;

	class ParkourSkillConfig : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Int32 MaxSkillEnergy; // 0x14
		::System::Int32 SkillCostPoint; // 0x18
		::System::Single SkillCoolDown; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
