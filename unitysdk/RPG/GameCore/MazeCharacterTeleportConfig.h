#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_METHOD_2_F1836C58FBCBBB24_OFFSET UNITYSDK_OFFSET(0x1D276EF0)
#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2770E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCharacterTeleportConfig_TypeDefinitionIndex = 17421;

	class MazeCharacterTeleportConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleport; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportInMapNoSwitchIn; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportInMapNoSwitchInWhite; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportCrossMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F1836C58FBCBBB24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeCharacterTeleportConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeCharacterTeleportConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_METHOD_2_F1836C58FBCBBB24_OFFSET))(a1, a2);
		}
	};
}
