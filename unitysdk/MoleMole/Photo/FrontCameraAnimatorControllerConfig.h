#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerConfig.h"

namespace MoleMole::Photo { class PlayableGraphAnimatorControllerBool; }

#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATORCONTROLLERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x160E6230)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraAnimatorControllerConfig_TypeDefinitionIndex = 86917;

	class FrontCameraAnimatorControllerConfig : public ::MoleMole::Photo::PlayableGraphAnimatorControllerConfig
	{
	public:
		::MoleMole::Photo::PlayableGraphAnimatorControllerBool* isMoving; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATORCONTROLLERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
