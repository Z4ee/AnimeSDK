#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x16E16F40)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x16E16F90)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16E17180)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x16E17300)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTARTEDTICKING_OFFSET UNITYSDK_OFFSET(0x16E175A0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTOPPEDTICKING_OFFSET UNITYSDK_OFFSET(0x16E175E0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_TICK_OFFSET UNITYSDK_OFFSET(0x16E17400)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION_UNINIT_OFFSET UNITYSDK_OFFSET(0x16E171D0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16E17620)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelAnimation_TypeDefinitionIndex = 74339;

	class ChimeraDuelAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x18
		::UnityEngine::AnimationState* _AnimationState; // 0x20
		::System::Single _CurrentClipTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_UNINIT_OFFSET))(this);
		}

		::System::Void Play(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_PLAY_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_TICK_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_Prop_IChimeraDuelTickable_OnStartedTicking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTARTEDTICKING_OFFSET))(this);
		}

		::System::Void RPG_Client_Prop_IChimeraDuelTickable_OnStoppedTicking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATION_RPG_CLIENT_PROP_ICHIMERADUELTICKABLE_ONSTOPPEDTICKING_OFFSET))(this);
		}
	};
}
