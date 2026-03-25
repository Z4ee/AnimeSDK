#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOTIEMUQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3B0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTieMuQTE_TypeDefinitionIndex = 59223;

	class MonoTieMuQTE : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Total; // 0x18
		::System::Single IncreasePerClick; // 0x1C
		::UnityEngine::AnimationCurve* IncreaseCurve; // 0x20
		::UnityEngine::AnimationCurve* DecreaseCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIEMUQTE__CTOR_OFFSET))(this);
		}
	};
}
