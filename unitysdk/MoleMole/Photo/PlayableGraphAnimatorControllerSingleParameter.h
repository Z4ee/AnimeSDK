#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/FPlayableGraphAnimatorControllerParam.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERSINGLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x173FAE70)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerSingleParameter_TypeDefinitionIndex = 44377;

	class PlayableGraphAnimatorControllerSingleParameter : public ::System::Object
	{
	public:
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam parameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERSINGLEPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
