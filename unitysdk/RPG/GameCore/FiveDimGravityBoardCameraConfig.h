#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_57F56159AE07F6DD_OFFSET UNITYSDK_OFFSET(0x1D6942C0)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_FD55BFB3A13E862D_OFFSET UNITYSDK_OFFSET(0x1D683820)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6837F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityBoardCameraConfig_TypeDefinitionIndex = 18627;

	class FiveDimGravityBoardCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_57F56159AE07F6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_57F56159AE07F6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD55BFB3A13E862D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_FD55BFB3A13E862D_OFFSET))(a1, a2);
		}
	};
}
