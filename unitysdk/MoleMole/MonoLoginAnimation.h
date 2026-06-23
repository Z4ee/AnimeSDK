#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOLOGINANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7750)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLoginAnimation_TypeDefinitionIndex = 84674;

	class MonoLoginAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single moveTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINANIMATION__CTOR_OFFSET))(this);
		}
	};
}
