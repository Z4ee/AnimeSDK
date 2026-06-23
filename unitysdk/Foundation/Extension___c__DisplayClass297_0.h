#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define FOUNDATION_EXTENSION___C__DISPLAYCLASS297_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8640)
#define FOUNDATION_EXTENSION___C__DISPLAYCLASS297_0__SETBLENDOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1E7C8650)

namespace Foundation
{
	inline static constexpr unsigned int Extension___c__DisplayClass297_0_TypeDefinitionIndex = 8787;

	class Extension___c__DisplayClass297_0 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Double duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___C__DISPLAYCLASS297_0__CTOR_OFFSET))(this);
		}

		::System::Single _SetBlendOut_b__0(::System::Double time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___C__DISPLAYCLASS297_0__SETBLENDOUT_B__0_OFFSET))(this, time);
		}
	};
}
