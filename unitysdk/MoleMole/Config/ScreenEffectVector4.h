#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18ADDD60)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADDF00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector4_TypeDefinitionIndex = 60101;

	class ScreenEffectVector4 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* WCurve; // 0x10
		::UnityEngine::AnimationCurve* YCurve; // 0x18
		::UnityEngine::AnimationCurve* ZCurve; // 0x20
		::UnityEngine::AnimationCurve* XCurve; // 0x28
		::System::Single ZValue; // 0x30
		::System::Single YValue; // 0x34
		::UnityEngine::Vector4 OverrideDefaultValue; // 0x38
		::System::Boolean YUseCurve; // 0x48
		::System::Boolean WUseCurve; // 0x49
		::System::Single XValue; // 0x4C
		::System::Single WValue; // 0x50
		::System::Boolean EnableOverrideDefaultValue; // 0x54
		::System::Boolean XUseCurve; // 0x55
		::System::Boolean ZUseCurve; // 0x56
		::System::Boolean EnableFade; // 0x57

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
