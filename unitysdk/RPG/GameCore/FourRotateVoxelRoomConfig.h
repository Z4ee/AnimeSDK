#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_METHOD_3_648F56D4DA1E7192_OFFSET UNITYSDK_OFFSET(0x1D117A80)
#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_METHOD_3_C2E34DFC4D70CEE9_OFFSET UNITYSDK_OFFSET(0x1D117AD0)
#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D117AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRoomConfig_TypeDefinitionIndex = 16580;

	class FourRotateVoxelRoomConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRoom; // 0x10
		::System::UInt32 RoomID; // 0x14
		::RPG::GameCore::FourRotateVoxelEnvType EnvType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_648F56D4DA1E7192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_METHOD_3_648F56D4DA1E7192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2E34DFC4D70CEE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_METHOD_3_C2E34DFC4D70CEE9_OFFSET))(a1, a2);
		}
	};
}
