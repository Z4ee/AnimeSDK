#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_ANIMSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0x17738030)
#define RPG_CLIENT_EFFECT_ANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x17738200)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AnimSpeed_TypeDefinitionIndex = 67272;

	class Effect_AnimSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Target; // 0x18
		::System::Single PlaySpeed; // 0x20
		::UnityEngine::Animator* TargetAnimator; // 0x28
		::System::Boolean IsFollowAnimatorSpeed; // 0x30
		::UnityEngine::MaterialPropertyBlock* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ANIMSPEED__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ANIMSPEED_UPDATE_OFFSET))(this);
		}
	};
}
