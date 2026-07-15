#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_METHOD_2_090B6B8A25740C79_OFFSET UNITYSDK_OFFSET(0x1C1484A0)
#define RPG_GAMECORE_TEAMTOWERSROBOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C149640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersRobotConfig_TypeDefinitionIndex = 18196;

	class TeamTowersRobotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 PlayerOffset; // 0x10
		::System::Single BaseMoveDuration; // 0x1C
		::System::Single MinMoveSpeed; // 0x20
		::System::Single RotateTurnInRatio; // 0x24
		::System::Single RotateTurnOutRatio; // 0x28
		::System::Single MaxRotationDeltaX; // 0x2C
		::System::Single ThrowBrickHeightOffset; // 0x30
		::System::Single ThrowBrickMaxFallDistance; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSROBOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_090B6B8A25740C79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersRobotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersRobotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_METHOD_2_090B6B8A25740C79_OFFSET))(a1, a2);
		}
	};
}
