#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERABLEND_METHOD_2_8D33CA9A5010063B_OFFSET UNITYSDK_OFFSET(0x178E8C10)
#define RPG_GAMECORE_VCAMERABLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x178E90B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlend_TypeDefinitionIndex = 15028;

	class VCameraBlend : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::VCameraBlendType BlendType; // 0x14
		::System::Boolean UseDefaultBlendCurve; // 0x18
		::System::String* CustomCurveName; // 0x20
		::RPG::GameCore::FloatCurve* CustomCurveData; // 0x28
		::System::Single BlendTime; // 0x30
		::System::Single FOVSmoothDampTime; // 0x34
		::System::Boolean FrameBlendSwitch; // 0x38
		::System::Single FrameBlendDelay; // 0x3C
		::System::Single FrameBlendWeightStart; // 0x40
		::System::Single FrameBlendDuration; // 0x44
		::System::Boolean RadialAimAndLinearDistance; // 0x48
		::System::Boolean DisableCinemachineFoVBlendAdjust; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D33CA9A5010063B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_METHOD_2_8D33CA9A5010063B_OFFSET))(a1, a2);
		}
	};
}
