#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define ENVIROMENTSYSTEMV2SPACE_ANIMATIONCURVE4__CTOR_OFFSET UNITYSDK_OFFSET(0x135CEE70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int AnimationCurve4_TypeDefinitionIndex = 46555;

	class AnimationCurve4 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve0; // 0x10
		::UnityEngine::AnimationCurve* curve1; // 0x18
		::UnityEngine::AnimationCurve* curve2; // 0x20
		::UnityEngine::AnimationCurve* curve3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ANIMATIONCURVE4__CTOR_OFFSET))(this);
		}
	};
}
