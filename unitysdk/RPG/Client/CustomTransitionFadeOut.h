#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_CUSTOMTRANSITIONFADEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EFC70)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomTransitionFadeOut_TypeDefinitionIndex = 67090;

	class CustomTransitionFadeOut : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationClip* Clip; // 0x18
		::RPG::Client::UITransitionAnimType AnimType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMTRANSITIONFADEOUT__CTOR_OFFSET))(this);
		}
	};
}
