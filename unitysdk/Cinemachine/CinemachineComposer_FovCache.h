#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CINEMACHINE_CINEMACHINECOMPOSER_FOVCACHE_SCREENTOFOV_OFFSET UNITYSDK_OFFSET(0xA647F0)
#define CINEMACHINE_CINEMACHINECOMPOSER_FOVCACHE_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0xA64780)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineComposer_FovCache_TypeDefinitionIndex = 34063;

	struct alignas(4) CinemachineComposer_FovCache
	{
		::UnityEngine::Rect mFovSoftGuideRect; // 0x10
		::UnityEngine::Rect mFovHardGuideRect; // 0x20
		::System::Single mFovH; // 0x30
		::System::Single mFov; // 0x34
		::System::Single mOrthoSizeOverDistance; // 0x38
		::System::Single mAspect; // 0x3C
		::UnityEngine::Rect mSoftGuideRect; // 0x40
		::UnityEngine::Rect mHardGuideRect; // 0x50

		/*
		::System::Void UpdateCache(::Cinemachine::LensSettings lens, ::UnityEngine::Rect softGuide, ::UnityEngine::Rect hardGuide, ::System::Single targetDistance)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings, ::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_FOVCACHE_UPDATECACHE_OFFSET))(this, lens, softGuide, hardGuide, targetDistance);
		}
		*/

		::UnityEngine::Rect ScreenToFOV(::UnityEngine::Rect rScreen, ::System::Single fov, ::System::Single fovH, ::System::Single aspect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_FOVCACHE_SCREENTOFOV_OFFSET))(this, rScreen, fov, fovH, aspect);
		}
	};
}
