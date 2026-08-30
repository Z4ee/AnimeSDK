#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_15A1BC508850D2EC_1;

#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_GETTEAMMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0xCC9D3D0)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC9D460)

namespace RPG::Client::Dev
{
	inline static constexpr unsigned int VirtualServerLaunchConfig_TypeDefinitionIndex = 80741;

	class VirtualServerLaunchConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_15A1BC508850D2EC_1*>* Lineup; // 0x10
		::Il2CppArray<::Enum_3_DFCB42601400F441>* MultiPathAvatarTypes; // 0x18
		::System::UInt32 FloorID; // 0x20
		::System::UInt32 PlaneID; // 0x24
		::RPG::GameCore::GenderType GenderType; // 0x28
		::System::UInt32 DimensionID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_15A1BC508850D2EC_1* GetTeamMemberConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_15A1BC508850D2EC_1*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_GETTEAMMEMBERCONFIG_OFFSET))(this, a1, a2);
		}
	};
}
