#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENELIGHTSTAGEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3EA20)

inline static constexpr unsigned int SceneLightStageDataItem_TypeDefinitionIndex = 47849;

class SceneLightStageDataItem : public ::System::Object
{
public:
	::System::String* StageNameConfig; // 0x10
	::System::Single intensityFadeInSpeed; // 0x18
	::System::Single intensityFadeOutSpeed; // 0x1C
	::System::Single lodFadeInSpeed; // 0x20
	::System::Single lodFadeOutSpeed; // 0x24
	::System::Single deadLockDectectTime; // 0x28
	::System::Int32 singleFrameInitLightCount; // 0x2C
	::System::Int32 singleFrameUnloadLightCount; // 0x30
	::System::Int32 flushCount; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTSTAGEDATAITEM__CTOR_OFFSET))(this);
	}
};
