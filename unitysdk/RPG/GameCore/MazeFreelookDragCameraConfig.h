#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_METHOD_2_CB2D905488FF5CFD_OFFSET UNITYSDK_OFFSET(0x1AF48E80)
#define RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4B500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFreelookDragCameraConfig_TypeDefinitionIndex = 16915;

	class MazeFreelookDragCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CameraXAxisDeadZone; // 0x10
		::System::Single CameraXAxisSoftZone; // 0x14
		::System::Single CameraYAxisDeadZone; // 0x18
		::System::Single CameraYAxisSoftZone; // 0x1C
		::System::Single CameraDragFactorX; // 0x20
		::System::Single CameraDragFactorY; // 0x24
		::System::Single RecoverDampTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB2D905488FF5CFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeFreelookDragCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFreelookDragCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_METHOD_2_CB2D905488FF5CFD_OFFSET))(a1, a2);
		}
	};
}
