#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYENGINENORMALLIGHTWRAPCOMPONENTLINKSLOT_CLASS_1_DCAB5FE245EF35DE__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECA0E0)

inline static constexpr unsigned int StageHarmonyEngineNormalLightWrapComponentLinkSlot_Class_1_DCAB5FE245EF35DE_TypeDefinitionIndex = 45579;

class StageHarmonyEngineNormalLightWrapComponentLinkSlot_Class_1_DCAB5FE245EF35DE : public ::System::Object
{
public:
	::RPG::CustomRP::CustomAdditionalLightData* Field_1_0; // 0x10
	::UnityEngine::Light* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENGINENORMALLIGHTWRAPCOMPONENTLINKSLOT_CLASS_1_DCAB5FE245EF35DE__CTOR_OFFSET))(this);
	}
};
