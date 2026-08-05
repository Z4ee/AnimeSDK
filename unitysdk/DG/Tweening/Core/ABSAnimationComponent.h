#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine::Events { class UnityEvent; }

#define DG_TWEENING_CORE_ABSANIMATIONCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB89A50)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int ABSAnimationComponent_TypeDefinitionIndex = 35140;

	class ABSAnimationComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DG::Tweening::UpdateType updateType; // 0x18
		::System::Boolean isSpeedBased; // 0x1C
		::System::Boolean hasOnStart; // 0x1D
		::System::Boolean hasOnPlay; // 0x1E
		::System::Boolean hasOnUpdate; // 0x1F
		::System::Boolean hasOnStepComplete; // 0x20
		::System::Boolean hasOnComplete; // 0x21
		::System::Boolean hasOnTweenCreated; // 0x22
		::UnityEngine::Events::UnityEvent* onStart; // 0x28
		::UnityEngine::Events::UnityEvent* onPlay; // 0x30
		::UnityEngine::Events::UnityEvent* onUpdate; // 0x38
		::UnityEngine::Events::UnityEvent* onStepComplete; // 0x40
		::UnityEngine::Events::UnityEvent* onComplete; // 0x48
		::UnityEngine::Events::UnityEvent* onTweenCreated; // 0x50
		::DG::Tweening::Tween* tween; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_ABSANIMATIONCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
