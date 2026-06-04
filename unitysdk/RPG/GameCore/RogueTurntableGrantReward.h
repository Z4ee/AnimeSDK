#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_BD1A89A7DC8C20DB_OFFSET UNITYSDK_OFFSET(0x19BD29A0)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_CB1009E516408A2B_OFFSET UNITYSDK_OFFSET(0x19BD2A30)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD2A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTurntableGrantReward_TypeDefinitionIndex = 19673;

	class RogueTurntableGrantReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD1A89A7DC8C20DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTurntableGrantReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTurntableGrantReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_BD1A89A7DC8C20DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB1009E516408A2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTurntableGrantReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTurntableGrantReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_CB1009E516408A2B_OFFSET))(a1, a2);
		}
	};
}
