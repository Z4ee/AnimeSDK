#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AUDIOLINEEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1766B890)
#define AUDIOLINEEFFECT_GETCURRENTCURVE_OFFSET UNITYSDK_OFFSET(0x1766C0A0)
#define AUDIOLINEEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1766BD20)
#define AUDIOLINEEFFECT_REFRESHAUDIOEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1766C220)
#define AUDIOLINEEFFECT_REFRESHAUDIOEFFECT_OFFSET UNITYSDK_OFFSET(0x1766BE40)
#define AUDIOLINEEFFECT_SETDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1766C170)
#define AUDIOLINEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1766C380)

inline static constexpr unsigned int AudioLineEffect_TypeDefinitionIndex = 80362;

class AudioLineEffect : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* line; // 0x18
	::System::Int32 maxCount; // 0x20
	::System::Int32 maxHeight; // 0x24
	::Il2CppArray<::UnityEngine::RectTransform*>* lineArr; // 0x28
	::UnityEngine::Vector2 size; // 0x30
	::System::Single randomRate; // 0x38
	::UnityEngine::AnimationCurve* cuve1; // 0x40
	::UnityEngine::AnimationCurve* cuve2; // 0x48
	::UnityEngine::AnimationCurve* cuve3; // 0x50
	::UnityEngine::AnimationCurve* cuve4; // 0x58
	::UnityEngine::AnimationCurve* cuve5; // 0x60
	::System::Single RefreshDuration; // 0x68
	::System::Single defaultHeight; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_ONENABLE_OFFSET))(this);
	}

	::System::Void RefreshAudioEffect(::System::Single rate)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_REFRESHAUDIOEFFECT_OFFSET))(this, rate);
	}

	::System::Void SetDefaultState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_SETDEFAULTSTATE_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* GetCurrentCurve(::System::Single rate)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_GETCURRENTCURVE_OFFSET))(this, rate);
	}

	::System::Void RefreshAudioEffect_1(::Il2CppArray<::System::Single>* rateArr)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AUDIOLINEEFFECT_REFRESHAUDIOEFFECT_1_OFFSET))(this, rateArr);
	}
};
