#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_PROJECTILEDROP_METHOD_2_D64F9C963EFC7439_OFFSET UNITYSDK_OFFSET(0x86CF40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_ProjectileDrop_TypeDefinitionIndex = 77237;

	struct alignas(8) ConfigViewObjectMisc_ProjectileDrop
	{
		::System::String* curveKey; // 0x10
		::System::Boolean isDebug; // 0x18
		::UnityEngine::AnimationCurve* overrideRhythmCurve; // 0x20
		::System::Single totalDuration; // 0x28
		::System::Single launchHeight; // 0x2C

		::UnityEngine::AnimationCurve* Method_2_D64F9C963EFC7439()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_PROJECTILEDROP_METHOD_2_D64F9C963EFC7439_OFFSET))(this);
		}
	};
}
