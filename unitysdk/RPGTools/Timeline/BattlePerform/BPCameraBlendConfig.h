#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABLENDCONFIG_METHOD_1_33F136CE7E515FA3_OFFSET UNITYSDK_OFFSET(0xAB25560)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAB25650)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCameraBlendConfig_TypeDefinitionIndex = 39566;

	class BPCameraBlendConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::Single BlendTime; // 0x14
		::System::Boolean UseDefaultBlendCurve; // 0x18
		::System::String* CustomCurveName; // 0x20
		::System::Single FOVSmoothDampTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::VCameraBlend* Method_1_33F136CE7E515FA3()
		{
			return ((::RPG::GameCore::VCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABLENDCONFIG_METHOD_1_33F136CE7E515FA3_OFFSET))(this);
		}
	};
}
