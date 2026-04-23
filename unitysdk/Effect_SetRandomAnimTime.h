#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_BA43F695DC73304E;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define EFFECT_SETRANDOMANIMTIME_AWAKE_OFFSET UNITYSDK_OFFSET(0xF2F6A50)
#define EFFECT_SETRANDOMANIMTIME_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xF2F6B00)
#define EFFECT_SETRANDOMANIMTIME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF2F6AA0)
#define EFFECT_SETRANDOMANIMTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xF2F6C70)

inline static constexpr unsigned int Effect_SetRandomAnimTime_TypeDefinitionIndex = 44204;

class Effect_SetRandomAnimTime : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Animator* TargetAnimator; // 0x18
	::System::String* AnimStateName; // 0x20
	::Class_2_BA43F695DC73304E* Field_5_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_ONENABLE_OFFSET))(this);
	}

	::System::Int32 get_RandomSeed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_GET_RANDOMSEED_OFFSET))(this);
	}
};
