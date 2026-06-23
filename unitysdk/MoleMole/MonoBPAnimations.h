#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIMEND_OFFSET UNITYSDK_OFFSET(0x10D62C60)
#define MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIM_OFFSET UNITYSDK_OFFSET(0x10D62BD0)
#define MOLEMOLE_MONOBPANIMATIONS_CALCULATEBPPOS_OFFSET UNITYSDK_OFFSET(0x10D628A0)
#define MOLEMOLE_MONOBPANIMATIONS_INITREWARDENTERANIM_OFFSET UNITYSDK_OFFSET(0x10D626A0)
#define MOLEMOLE_MONOBPANIMATIONS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D62490)
#define MOLEMOLE_MONOBPANIMATIONS_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D62AC0)
#define MOLEMOLE_MONOBPANIMATIONS_STARTREWARDENTERANIM_OFFSET UNITYSDK_OFFSET(0x10D624D0)
#define MOLEMOLE_MONOBPANIMATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x10D62CC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPAnimations_TypeDefinitionIndex = 74528;

	class MonoBPAnimations : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* moveCurve; // 0x18
		::UnityEngine::RectTransform* bpScrollView; // 0x20
		::System::Single rewardDelayTime; // 0x28
		::System::Single rewardGapTime; // 0x2C
		::System::Double Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x3C
		::UnityEngine::Vector2 Field_5_7; // 0x40
		::System::Single Field_5_8; // 0x48
		::System::Single Field_5_9; // 0x4C
		::System::Single Field_5_10; // 0x50
		::System::Action* Field_5_11; // 0x58
		::Foundation::Coroutine::CoroutineHandle Field_5_12; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_ONDESTROY_OFFSET))(this);
		}

		::System::Void StartRewardEnterAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_STARTREWARDENTERANIM_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRewardEnterAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_INITREWARDENTERANIM_OFFSET))(this);
		}

		::System::Void BPMotionAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIM_OFFSET))(this);
		}

		::System::Void BPMotionAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIMEND_OFFSET))(this);
		}

		::System::Void CalculateBPPos(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_CALCULATEBPPOS_OFFSET))(this, a1);
		}
	};
}
