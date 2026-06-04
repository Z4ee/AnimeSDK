#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/CustomAnimation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR_GETCUSTOMANICURVE_1_OFFSET UNITYSDK_OFFSET(0xCB03130)
#define RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR_GETCUSTOMANICURVE_OFFSET UNITYSDK_OFFSET(0xCB02F90)
#define RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCB031D0)

namespace RPG::Client::Tween
{
	inline static constexpr unsigned int MonoTweenBehaviour_TypeDefinitionIndex = 68577;

	class MonoTweenBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Tween::CustomAnimation>* anis; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetCustomAniCurve(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR_GETCUSTOMANICURVE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* GetCustomAniCurve_1(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TWEEN_MONOTWEENBEHAVIOUR_GETCUSTOMANICURVE_1_OFFSET))(this, a1);
		}
	};
}
