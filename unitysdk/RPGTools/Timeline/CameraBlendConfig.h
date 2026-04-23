#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CAMERABLENDCONFIG_METHOD_1_33F136CE7E515FA3_OFFSET UNITYSDK_OFFSET(0xB88F680)
#define RPGTOOLS_TIMELINE_CAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A4F00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraBlendConfig_TypeDefinitionIndex = 44585;

	class CameraBlendConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::Boolean UseDefaultBlendCurve; // 0x14
		::System::String* CustomCurveName; // 0x18
		::System::Single BlendTime; // 0x20
		::System::Single FOVSmoothDampTime; // 0x24
		::System::Boolean FrameBlendSwitch; // 0x28
		::System::Single FrameBlendDelay; // 0x2C
		::System::Single FrameBlendWeightStart; // 0x30
		::System::Single FrameBlendDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::VCameraBlend* Method_1_33F136CE7E515FA3()
		{
			return ((::RPG::GameCore::VCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERABLENDCONFIG_METHOD_1_33F136CE7E515FA3_OFFSET))(this);
		}
	};
}
