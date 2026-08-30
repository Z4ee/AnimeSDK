#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_80D345C9562CE687_OFFSET UNITYSDK_OFFSET(0x1D491CC0)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_CB1009E516408A2B_OFFSET UNITYSDK_OFFSET(0x1D491D10)
#define RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D491D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTurntableGrantReward_TypeDefinitionIndex = 20579;

	class RogueTurntableGrantReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80D345C9562CE687(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTurntableGrantReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTurntableGrantReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_80D345C9562CE687_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB1009E516408A2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTurntableGrantReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTurntableGrantReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETURNTABLEGRANTREWARD_METHOD_3_CB1009E516408A2B_OFFSET))(a1, a2);
		}
	};
}
