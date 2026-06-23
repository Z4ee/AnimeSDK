#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOBPLEVELANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191500F0)
#define MOLEMOLE_MONOBPLEVELANIMATION_PLAYANIMATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x19150240)
#define MOLEMOLE_MONOBPLEVELANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x191505C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPLevelAnimation_TypeDefinitionIndex = 69083;

	class MonoBPLevelAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* firstMoveCurve; // 0x18
		::UnityEngine::AnimationCurve* secondMoveCurve; // 0x20
		::UnityEngine::AnimationCurve* easeInOut; // 0x28
		::Foundation::Coroutine::CoroutineHandle Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x34
		::System::Single Field_5_5; // 0x38
		::System::Single Field_5_6; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::Void PlayAnimationProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::System::Single>* a3, ::System::Action_1<::System::Single>* a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::Single>*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_PLAYANIMATIONPROGRESS_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
