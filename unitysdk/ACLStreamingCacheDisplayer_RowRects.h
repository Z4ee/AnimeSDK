#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

inline static constexpr unsigned int ACLStreamingCacheDisplayer_RowRects_TypeDefinitionIndex = 95365;

struct alignas(4) ACLStreamingCacheDisplayer_RowRects
{
	::UnityEngine::Rect Row; // 0x10
	::UnityEngine::Rect Name; // 0x20
	::UnityEngine::Rect Size; // 0x30
	::UnityEngine::Rect EpochBarBg; // 0x40
	::UnityEngine::Rect EpochNum; // 0x50
};
