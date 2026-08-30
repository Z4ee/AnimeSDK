#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOABOVESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E28870)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAboveSwitch_TypeDefinitionIndex = 73012;

	class MonoAboveSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x18
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOABOVESWITCH__CTOR_OFFSET))(this);
		}
	};
}
