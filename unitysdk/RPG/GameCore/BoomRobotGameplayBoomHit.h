#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_B2A9A63FEC310748_OFFSET UNITYSDK_OFFSET(0x1A4063A0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_FEB9488518FA59C5_OFFSET UNITYSDK_OFFSET(0x1A4062D0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A406390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomHit_TypeDefinitionIndex = 21002;

	class BoomRobotGameplayBoomHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FEB9488518FA59C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_FEB9488518FA59C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2A9A63FEC310748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_B2A9A63FEC310748_OFFSET))(a1, a2);
		}
	};
}
