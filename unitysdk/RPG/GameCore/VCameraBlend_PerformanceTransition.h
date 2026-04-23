#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_METHOD_2_A75B70F26391EBB1_OFFSET UNITYSDK_OFFSET(0x190E7A70)
#define RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x190E7E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlend_PerformanceTransition_TypeDefinitionIndex = 15537;

	class VCameraBlend_PerformanceTransition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::VCameraBlendType BlendType; // 0x14
		::System::Boolean UseDefaultBlendCurve; // 0x18
		::System::String* CustomCurveName; // 0x20
		::System::Single BlendTime; // 0x28
		::System::Single FOVSmoothDampTime; // 0x2C
		::System::Boolean FrameBlendSwitch; // 0x30
		::System::Single FrameBlendDelay; // 0x34
		::System::Single FrameBlendWeightStart; // 0x38
		::System::Single FrameBlendDuration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A75B70F26391EBB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlend_PerformanceTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlend_PerformanceTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_METHOD_2_A75B70F26391EBB1_OFFSET))(a1, a2);
		}
	};
}
