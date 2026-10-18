#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ANIMATOREXTENSIONS_REBINDWITHPRESTATUS_OFFSET UNITYSDK_OFFSET(0xC683D60)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorExtensions_TypeDefinitionIndex = 60082;

	class AnimatorExtensions : public ::System::Object
	{
	public:
		static ::System::Void RebindWithPreStatus(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOREXTENSIONS_REBINDWITHPRESTATUS_OFFSET))(a1);
		}
	};
}
