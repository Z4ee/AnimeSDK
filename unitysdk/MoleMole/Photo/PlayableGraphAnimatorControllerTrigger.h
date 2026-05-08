#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/Struct_2_3220F690C6BCA251.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13869910)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x138699E0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerTrigger_TypeDefinitionIndex = 42169;

	class PlayableGraphAnimatorControllerTrigger : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER__CTOR_OFFSET))(this);
		}

		::Struct_2_3220F690C6BCA251 Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::Struct_2_3220F690C6BCA251(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
