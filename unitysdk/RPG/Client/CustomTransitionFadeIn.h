#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_CUSTOMTRANSITIONFADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EFC60)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomTransitionFadeIn_TypeDefinitionIndex = 67089;

	class CustomTransitionFadeIn : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationClip* Clip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMTRANSITIONFADEIN__CTOR_OFFSET))(this);
		}
	};
}
