#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorParameter.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_METHOD_3_34E39C421955B303_OFFSET UNITYSDK_OFFSET(0x18A3B310)
#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_METHOD_3_F0F9D3BA42D0D392_OFFSET UNITYSDK_OFFSET(0x18A3B2D0)
#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3B300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorCameraParameter_TypeDefinitionIndex = 16363;

	class LevelAnchorCameraParameter : public ::RPG::GameCore::LevelAnchorParameter
	{
	public:
		::System::Single fov; // 0x10
		::System::Boolean AimIsComposer; // 0x14
		::RPG::MVector3 AimTrackedObjectOffset; // 0x18
		::System::Single AimHorizontalDamping; // 0x24
		::System::Single AimVerticalDamping; // 0x28
		::System::Single AimScreenX; // 0x2C
		::System::Single AimScreenY; // 0x30
		::System::Single AimDeadZoneWidth; // 0x34
		::System::Single AimDeadZoneHeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0F9D3BA42D0D392(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorCameraParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorCameraParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_METHOD_3_F0F9D3BA42D0D392_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34E39C421955B303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorCameraParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorCameraParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_METHOD_3_34E39C421955B303_OFFSET))(a1, a2);
		}
	};
}
