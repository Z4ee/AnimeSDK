#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_METHOD_2_50061DB4955E4DE6_OFFSET UNITYSDK_OFFSET(0x18ACDCF0)
#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACDEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCharacterTeleportConfig_TypeDefinitionIndex = 16736;

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

		static ::System::Void Method_2_50061DB4955E4DE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeCharacterTeleportConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeCharacterTeleportConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_METHOD_2_50061DB4955E4DE6_OFFSET))(a1, a2);
		}
	};
}
