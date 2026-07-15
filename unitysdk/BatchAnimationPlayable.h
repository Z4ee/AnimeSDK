#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/SynthesizerType.h"

#define BATCHANIMATIONPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x177F39D0)

inline static constexpr unsigned int BatchAnimationPlayable_TypeDefinitionIndex = 35921;

class BatchAnimationPlayable : public ::System::Object
{
public:
	::System::Int32 clipIndex; // 0x10
	::UnityEngine::Rendering::SynthesizerType synthesizerType; // 0x14
	::System::Single speed; // 0x18
	::System::Boolean cache; // 0x1C
	::System::Int32 fadeInFrame; // 0x20
	::System::Boolean alwaysCalcMPose; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONPLAYABLE__CTOR_OFFSET))(this);
	}
};
