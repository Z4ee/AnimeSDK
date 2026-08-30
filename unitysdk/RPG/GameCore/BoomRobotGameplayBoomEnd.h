#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_METHOD_3_21CF7917C1386CD5_OFFSET UNITYSDK_OFFSET(0x1C2E4A70)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_METHOD_3_6C26EC058C697698_OFFSET UNITYSDK_OFFSET(0x1C2E4B40)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E4B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomEnd_TypeDefinitionIndex = 19993;

	class BoomRobotGameplayBoomEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21CF7917C1386CD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_METHOD_3_21CF7917C1386CD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C26EC058C697698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_METHOD_3_6C26EC058C697698_OFFSET))(a1, a2);
		}
	};
}
