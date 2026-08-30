#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENELIGHTMANAGERCONFIGDATA_STAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE909400)

inline static constexpr unsigned int SceneLightManagerConfigData_StageData_TypeDefinitionIndex = 47848;

class SceneLightManagerConfigData_StageData : public ::System::Object
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
	::System::Boolean enableDynamicLightBlock; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTMANAGERCONFIGDATA_STAGEDATA__CTOR_OFFSET))(this);
	}
};
