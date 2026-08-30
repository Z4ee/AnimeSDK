#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_METHOD_3_6E772DF284D71F33_OFFSET UNITYSDK_OFFSET(0x1DCB8FD0)
#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_METHOD_3_FCFDBD0B332A4CC2_OFFSET UNITYSDK_OFFSET(0x1DCB9010)
#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRoomDoorConfig_TypeDefinitionIndex = 16579;

	class FourRotateVoxelRoomDoorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRoomDoor; // 0x10
		::System::UInt32 TargetDoorConfigID; // 0x14
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18
		::System::Boolean CreateTrigger; // 0x20
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E772DF284D71F33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_METHOD_3_6E772DF284D71F33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCFDBD0B332A4CC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_METHOD_3_FCFDBD0B332A4CC2_OFFSET))(a1, a2);
		}
	};
}
