#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define FOUNDATION_EXTENSION___C__DISPLAYCLASS296_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1471F0)
#define FOUNDATION_EXTENSION___C__DISPLAYCLASS296_0__SETBLENDIN_B__0_OFFSET UNITYSDK_OFFSET(0x1E147200)

namespace Foundation
{
	inline static constexpr unsigned int Extension___c__DisplayClass296_0_TypeDefinitionIndex = 8795;

	class Extension___c__DisplayClass296_0 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Double duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___C__DISPLAYCLASS296_0__CTOR_OFFSET))(this);
		}

		::System::Single _SetBlendIn_b__0(::System::Double time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___C__DISPLAYCLASS296_0__SETBLENDIN_B__0_OFFSET))(this, time);
		}
	};
}
