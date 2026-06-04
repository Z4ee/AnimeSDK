#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RENDERTESTCAMERACONFIG_METHOD_2_3E00AFC07B0A1281_OFFSET UNITYSDK_OFFSET(0x19ACB1F0)
#define RPG_GAMECORE_RENDERTESTCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACB6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestCameraConfig_TypeDefinitionIndex = 23069;

	class RenderTestCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ElevationRestrict; // 0x10
		::System::Single DepressionRestrict; // 0x14
		::System::Single CameraMoveRatio; // 0x18
		::System::Single MaxDistance; // 0x1C
		::System::Single MinDistance; // 0x20
		::System::Single LerpStartChest; // 0x24
		::System::Single LerpLengthChest; // 0x28
		::System::Single LerpStartFace; // 0x2C
		::System::Single LerpLengthFace; // 0x30
		::System::Single BodyHeight; // 0x34
		::System::Single ChestHeight; // 0x38
		::System::Single FaceHeight; // 0x3C
		::System::Single BodyFOV; // 0x40
		::System::Single ChestFOV; // 0x44
		::System::Single FaceFOV; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E00AFC07B0A1281(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RenderTestCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RenderTestCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTCAMERACONFIG_METHOD_2_3E00AFC07B0A1281_OFFSET))(a1, a2);
		}
	};
}
