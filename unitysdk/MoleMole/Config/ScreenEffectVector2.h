#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A076EE0)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector2_TypeDefinitionIndex = 76476;

	class ScreenEffectVector2 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* YCurve; // 0x10
		::UnityEngine::AnimationCurve* XCurve; // 0x18
		::System::Single XValue; // 0x20
		::UnityEngine::Vector2 OverrideDefaultValue; // 0x24
		::System::Boolean XUseCurve; // 0x2C
		::System::Boolean YUseCurve; // 0x2D
		::System::Boolean EnableFade; // 0x2E
		::System::Boolean EnableOverrideDefaultValue; // 0x2F
		::System::Single YValue; // 0x30

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
