#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaskType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x39E62E0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionParameter_TypeDefinitionIndex = 46784;

	struct alignas(8) LensDistortionParameter
	{
		::System::Boolean LensDistortionOverrideState; // 0x10
		::System::Single Intensity; // 0x14
		::System::Single XMultiplier; // 0x18
		::System::Single YMultiplier; // 0x1C
		::System::Single Scale; // 0x20
		::UnityEngine::Vector2 Center; // 0x24
		::UnityEngine::Texture* DistorionTexture; // 0x30
		::UnityEngine::Vector4 LensDisTexTilingOffset; // 0x38
		::System::Single DistortionTextureStrength; // 0x48
		::System::Boolean MaskTypeParamOverrideState; // 0x4C
		::RPG::CustomRP::MaskType MaskTypeParam; // 0x50
		::System::Single StartRadius; // 0x54
		::System::Single BlendRadius; // 0x58
		::System::Single Angle; // 0x5C
		::UnityEngine::Vector2 CircleCenterOffset; // 0x60
		::System::Boolean MirrorFlip; // 0x68

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
