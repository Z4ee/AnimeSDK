#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEDRAGCAMERACONFIG_METHOD_2_BE472612B613C70B_OFFSET UNITYSDK_OFFSET(0x198FED20)
#define RPG_GAMECORE_MAZEDRAGCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198FF180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeDragCameraConfig_TypeDefinitionIndex = 16752;

	class MazeDragCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CameraMoveRange; // 0x10
		::System::Single CameraRotateMaxAngle; // 0x14
		::System::Single CameraDragFactor; // 0x18
		::System::Single RecoverDampTime; // 0x1C
		::System::Single CameraSpringArmDefaultLength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEDRAGCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BE472612B613C70B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeDragCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeDragCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEDRAGCAMERACONFIG_METHOD_2_BE472612B613C70B_OFFSET))(a1, a2);
		}
	};
}
