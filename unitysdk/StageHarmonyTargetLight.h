#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STAGEHARMONYTARGETLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xD09A0F0)

inline static constexpr unsigned int StageHarmonyTargetLight_TypeDefinitionIndex = 44833;

class StageHarmonyTargetLight : public ::System::Object
{
public:
	::System::Int32 targetLightIndex; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTARGETLIGHT__CTOR_OFFSET))(this);
	}
};
