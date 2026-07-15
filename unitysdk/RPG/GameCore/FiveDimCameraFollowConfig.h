#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DisableYFollowMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimCameraLookAheadConfig; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMCAMERAFOLLOWCONFIG_METHOD_2_8890243C95DA78A5_OFFSET UNITYSDK_OFFSET(0x1BA8A660)
#define RPG_GAMECORE_FIVEDIMCAMERAFOLLOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraFollowConfig_TypeDefinitionIndex = 17890;

	class FiveDimCameraFollowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ViewHeight; // 0x10
		::System::Single ScreenX; // 0x14
		::System::Single ScreenY; // 0x18
		::System::Single ScreenYAtMaxFallSpeed; // 0x1C
		::System::Single ScreenYBlendTime; // 0x20
		::System::Single SoftZoneWidth; // 0x24
		::System::Single SoftZoneHeight; // 0x28
		::System::Single DampingX; // 0x2C
		::System::Single DampingZ; // 0x30
		::System::Boolean UseDampingYCurve; // 0x34
		::System::Single DampingY; // 0x38
		::RPG::GameCore::FloatCurve* DampingYCurve; // 0x40
		::System::Single BiasX; // 0x48
		::System::Single BiasY; // 0x4C
		::System::Single DeadZoneWidth; // 0x50
		::System::Single DeadZoneHeight; // 0x54
		::System::Single DeadZoneDepth; // 0x58
		::RPG::MVector2 FollowClampMargin; // 0x5C
		::RPG::GameCore::FiveDimCameraLookAheadConfig* LookAheadConfig; // 0x68
		::System::Single RotateDampingTime; // 0x70
		::RPG::GameCore::DisableYFollowMode DisableYFollowMode; // 0x74
		::System::Single VCameraPitch; // 0x78
		::System::Boolean FollowPlayerGravity; // 0x7C
		::System::Boolean FollowSurfaceMove; // 0x7D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAFOLLOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8890243C95DA78A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraFollowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraFollowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAFOLLOWCONFIG_METHOD_2_8890243C95DA78A5_OFFSET))(a1, a2);
		}
	};
}
