#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_METHOD_3_439DFC3C9161F03E_OFFSET UNITYSDK_OFFSET(0x1DCB7F60)
#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_METHOD_3_7DE513859F562647_OFFSET UNITYSDK_OFFSET(0x1DCB7F00)
#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB7F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMoveablePlatformConfig_TypeDefinitionIndex = 16583;

	class FourRotateVoxelMoveablePlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMoveablePlatform; // 0x10
		::Il2CppArray<::RPG::MVector3>* MovePoints; // 0x18
		::Il2CppArray<::System::Single>* MoveDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DE513859F562647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_METHOD_3_7DE513859F562647_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_439DFC3C9161F03E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_METHOD_3_439DFC3C9161F03E_OFFSET))(a1, a2);
		}
	};
}
