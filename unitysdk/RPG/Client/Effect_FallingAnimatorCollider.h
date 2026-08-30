#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_EFFECT_FALLINGANIMATORCOLLIDER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x15E5B290)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B850)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimatorCollider_TypeDefinitionIndex = 70434;

	class Effect_FallingAnimatorCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 NDMBBKBOCOB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORCOLLIDER_CONTAINS_OFFSET))(this, a1);
		}
	};
}
