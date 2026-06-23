#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3_GETVALUE_OFFSET UNITYSDK_OFFSET(0x158C2360)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x158C24C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector3_TypeDefinitionIndex = 50284;

	class ScreenEffectVector3 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* YCurve; // 0x10
		::UnityEngine::AnimationCurve* XCurve; // 0x18
		::UnityEngine::AnimationCurve* ZCurve; // 0x20
		::System::Single ZValue; // 0x28
		::System::Single XValue; // 0x2C
		::UnityEngine::Vector3 OverrideDefaultValue; // 0x30
		::System::Boolean EnableFade; // 0x3C
		::System::Boolean XUseCurve; // 0x3D
		::System::Boolean EnableOverrideDefaultValue; // 0x3E
		::System::Boolean YUseCurve; // 0x3F
		::System::Boolean ZUseCurve; // 0x40
		::System::Single YValue; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
