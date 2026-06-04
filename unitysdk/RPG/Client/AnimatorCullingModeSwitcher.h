#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB314920)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB3147E0)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB3148E0)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_START_OFFSET UNITYSDK_OFFSET(0xB314690)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB314860)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3149C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorCullingModeSwitcher_TypeDefinitionIndex = 66467;

	class AnimatorCullingModeSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _TargetAnimator; // 0x18
		::UnityEngine::AnimatorCullingMode _OriginMode; // 0x20
		::UnityEngine::AnimatorCullingMode _TargetMode; // 0x24
		::System::Int32 _DelayTickCount; // 0x28
		::System::Int32 Field_5_4; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_DESPAWNED_OFFSET))(this);
		}
	};
}
