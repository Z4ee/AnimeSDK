#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine { class Transform; }

#define ANIMESHTICK_ANIMESHTICKMANAGER_TWEENDISTANCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15D231A0)

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_TweenDistanceEntry_TypeDefinitionIndex = 86576;

	class AniMeshTickManager_TweenDistanceEntry : public ::System::Object
	{
	public:
		::DG::Tweening::Tween* Tween; // 0x10
		::UnityEngine::Transform* Transform; // 0x18
		::System::Boolean WasPlayingBeforePause; // 0x20
		::System::Boolean IsPausedByDistance; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_TWEENDISTANCEENTRY__CTOR_OFFSET))(this);
		}
	};
}
