#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_METHOD_3_00F8ADDBB7D2D60C_OFFSET UNITYSDK_OFFSET(0x1A406460)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_METHOD_3_95B7E39B63788349_OFFSET UNITYSDK_OFFSET(0x1A406530)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1A406520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomStart_TypeDefinitionIndex = 19449;

	class BoomRobotGameplayBoomStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00F8ADDBB7D2D60C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_METHOD_3_00F8ADDBB7D2D60C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95B7E39B63788349(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_METHOD_3_95B7E39B63788349_OFFSET))(a1, a2);
		}
	};
}
