#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_METHOD_3_0CE6A0E1BC8282B2_OFFSET UNITYSDK_OFFSET(0x194E6040)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_METHOD_3_B024B62639C9D71B_OFFSET UNITYSDK_OFFSET(0x194E60C0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM__CTOR_OFFSET UNITYSDK_OFFSET(0x194E6090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayEnterBoomCam_TypeDefinitionIndex = 20020;

	class BoomRobotGameplayEnterBoomCam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CE6A0E1BC8282B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_METHOD_3_0CE6A0E1BC8282B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B024B62639C9D71B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_METHOD_3_B024B62639C9D71B_OFFSET))(a1, a2);
		}
	};
}
