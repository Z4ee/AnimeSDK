#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_6D1C34F5290A42E2_OFFSET UNITYSDK_OFFSET(0x16FEF960)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_8CB9D8DEF93BF8B6_OFFSET UNITYSDK_OFFSET(0x16FEF850)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEF930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayTriggerStart_TypeDefinitionIndex = 19487;

	class BoomRobotGameplayTriggerStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8CB9D8DEF93BF8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_8CB9D8DEF93BF8B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D1C34F5290A42E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_METHOD_3_6D1C34F5290A42E2_OFFSET))(a1, a2);
		}
	};
}
