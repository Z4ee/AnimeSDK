#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROPMOVETOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC665490)

namespace RPG::Client
{
	inline static constexpr unsigned int PropMoveToConfig_TypeDefinitionIndex = 64223;

	class PropMoveToConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* MoveToCurveData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPMOVETOCONFIG__CTOR_OFFSET))(this);
		}
	};
}
