#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_7DF6FC33655D377C_OFFSET UNITYSDK_OFFSET(0x194E5790)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_B2A9A63FEC310748_OFFSET UNITYSDK_OFFSET(0x194E58A0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x194E5870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomHit_TypeDefinitionIndex = 20587;

	class BoomRobotGameplayBoomHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DF6FC33655D377C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_7DF6FC33655D377C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2A9A63FEC310748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayBoomHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_METHOD_3_B2A9A63FEC310748_OFFSET))(a1, a2);
		}
	};
}
