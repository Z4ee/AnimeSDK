#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16067D00)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlMotionConfig_TypeDefinitionIndex = 50055;

	class ScopedFrontCameraControlMotionConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 moveSpeed; // 0x10
		::System::Single yawSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLMOTIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
