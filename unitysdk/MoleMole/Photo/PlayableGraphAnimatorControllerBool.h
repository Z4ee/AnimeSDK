#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/Struct_2_793645F2F9C6AFE4.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x17383A10)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17383AF0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerBool_TypeDefinitionIndex = 87401;

	class PlayableGraphAnimatorControllerBool : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL__CTOR_OFFSET))(this);
		}

		::Struct_2_793645F2F9C6AFE4 Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::Struct_2_793645F2F9C6AFE4(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
