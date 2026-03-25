#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimPlayState.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class BatchAnimationPlayable;
namespace UnityEngine::Rendering { class BatchAnimation; }

#define BATCHANIMATIONPLAYABLEGROUP_SETUPANIMGROUP_OFFSET UNITYSDK_OFFSET(0x16A58010)
#define BATCHANIMATIONPLAYABLEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A580A0)

inline static constexpr unsigned int BatchAnimationPlayableGroup_TypeDefinitionIndex = 29117;

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

	static ::System::Void SetupAnimGroup(::UnityEngine::Rendering::BatchAnimation* batchAnimation, ::BatchAnimationClipGroup* bakeData, ::BatchAnimationPlayable* playable, ::System::Int32 index)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::BatchAnimationClipGroup*, ::BatchAnimationPlayable*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONPLAYABLEGROUP_SETUPANIMGROUP_OFFSET))(batchAnimation, bakeData, playable, index);
	}
};
