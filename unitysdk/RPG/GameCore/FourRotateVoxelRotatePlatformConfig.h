#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_METHOD_3_68F595C9E33584AB_OFFSET UNITYSDK_OFFSET(0x1976B6D0)
#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_METHOD_3_8B2A09255960573A_OFFSET UNITYSDK_OFFSET(0x1976B740)
#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976B720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRotatePlatformConfig_TypeDefinitionIndex = 15929;

	class FourRotateVoxelRotatePlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRotatePlatform; // 0x10
		::System::Boolean IsClockwise; // 0x11
		::RPG::MVector2 RotateRandomInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68F595C9E33584AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_METHOD_3_68F595C9E33584AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B2A09255960573A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_METHOD_3_8B2A09255960573A_OFFSET))(a1, a2);
		}
	};
}
