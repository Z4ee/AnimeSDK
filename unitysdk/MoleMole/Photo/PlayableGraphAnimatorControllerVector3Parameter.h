#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/FPlayableGraphAnimatorControllerParam.h"
#include "unitysdk/Struct_2_52EB650C9EAB482C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER_METHOD_1_8D4F7BB650D15465_OFFSET UNITYSDK_OFFSET(0x18094970)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18094960)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerVector3Parameter_TypeDefinitionIndex = 88957;

	class PlayableGraphAnimatorControllerVector3Parameter : public ::System::Object
	{
	public:
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam x; // 0x10
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam y; // 0x20
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam z; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER__CTOR_OFFSET))(this);
		}

		::Struct_2_52EB650C9EAB482C Method_1_8D4F7BB650D15465(::UnityEngine::Animations::AnimatorControllerPlayable a1)
		{
			return ((::Struct_2_52EB650C9EAB482C(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER_METHOD_1_8D4F7BB650D15465_OFFSET))(this, a1);
		}
	};
}
