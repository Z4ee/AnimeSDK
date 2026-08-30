#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimPlayState.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class BatchAnimationPlayable;
namespace UnityEngine::Rendering { class BatchAnimation; }

#define BATCHANIMATIONPLAYABLEGROUP_SETUPANIMGROUP_OFFSET UNITYSDK_OFFSET(0x1C661560)
#define BATCHANIMATIONPLAYABLEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C661610)

inline static constexpr unsigned int BatchAnimationPlayableGroup_TypeDefinitionIndex = 36783;

class BatchAnimationPlayableGroup : public ::System::Object
{
public:
	::BatchAnimationPlayable* playable0; // 0x10
	::System::Int32 delayframe; // 0x18
	::BatchAnimPlayState playState; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONPLAYABLEGROUP__CTOR_OFFSET))(this);
	}

	static ::System::Void SetupAnimGroup(::UnityEngine::Rendering::BatchAnimation* a1, ::BatchAnimationClipGroup* a2, ::BatchAnimationPlayable* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::BatchAnimationClipGroup*, ::BatchAnimationPlayable*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONPLAYABLEGROUP_SETUPANIMGROUP_OFFSET))(a1, a2, a3, a4);
	}
};
