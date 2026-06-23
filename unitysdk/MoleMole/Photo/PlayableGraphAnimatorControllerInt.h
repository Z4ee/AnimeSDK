#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/Struct_2_82892336BD7BD369.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERINT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x17383B00)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17383BA0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerInt_TypeDefinitionIndex = 69184;

	class PlayableGraphAnimatorControllerInt : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERINT__CTOR_OFFSET))(this);
		}

		::Struct_2_82892336BD7BD369 Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::Struct_2_82892336BD7BD369(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERINT_INSTANTIATE_OFFSET))(this, playable);
		}
	};
}
