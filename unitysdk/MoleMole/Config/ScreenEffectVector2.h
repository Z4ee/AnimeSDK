#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17D30620)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x17D30730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector2_TypeDefinitionIndex = 77096;

	class ScreenEffectVector2 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* YCurve; // 0x10
		::UnityEngine::AnimationCurve* XCurve; // 0x18
		::System::Single YValue; // 0x20
		::System::Boolean YUseCurve; // 0x24
		::System::Boolean XUseCurve; // 0x25
		::System::Boolean EnableOverrideDefaultValue; // 0x26
		::System::Boolean EnableFade; // 0x27
		::System::Single XValue; // 0x28
		::UnityEngine::Vector2 OverrideDefaultValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
