#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_6D1C34F5290A42E2_OFFSET UNITYSDK_OFFSET(0x1A406D10)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_E768C3FEF955699F_OFFSET UNITYSDK_OFFSET(0x1A406C40)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1A406D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayTriggerStart_TypeDefinitionIndex = 20391;

	class BoomRobotGameplayTriggerStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E768C3FEF955699F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_E768C3FEF955699F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D1C34F5290A42E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_6D1C34F5290A42E2_OFFSET))(a1, a2);
		}
	};
}
