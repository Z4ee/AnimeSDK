#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TransformAnimationType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define ANIM_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x12112B20)
#define ANIM_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x12112B70)
#define ANIM_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12112AD0)
#define ANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12112BC0)

inline static constexpr unsigned int Anim_TypeDefinitionIndex = 43941;

class Anim : public ::System::Object
{
public:
	::TransformAnimationType AnimationType; // 0x10
	::System::Single Delay; // 0x14
	::System::Single Duration; // 0x18
	::System::Boolean CanOverrideAxis; // 0x1C
	::UnityEngine::Vector3 IsRandomAxis; // 0x20
	::UnityEngine::Vector3 Axis; // 0x2C
	::System::Single AnimMotionScale; // 0x38
	::UnityEngine::AnimationCurve* Curve; // 0x40
	::System::Single TriggerWaveRadius; // 0x48
	::System::String* EffectPath; // 0x50
	::UnityEngine::Vector3 EffectOffset; // 0x58
	::System::Single EffectScale; // 0x64
	::System::String* AttachPoint; // 0x68
	::System::Boolean IsAttach; // 0x70
	::System::String* AudioEventNanme; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}
};
