#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_METHOD_2_BF5D8A35B0952A41_OFFSET UNITYSDK_OFFSET(0x1CE37520)
#define RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE37630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarColliderCameraConfig_TypeDefinitionIndex = 16259;

	class AvatarColliderCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FollowPoleAngleSepcify; // 0x10
		::RPG::MVector3 AimOffset; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BF5D8A35B0952A41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarColliderCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarColliderCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_METHOD_2_BF5D8A35B0952A41_OFFSET))(a1, a2);
		}
	};
}
