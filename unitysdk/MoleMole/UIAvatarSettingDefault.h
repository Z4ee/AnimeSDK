#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIAVATARSETTINGDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3B030)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSettingDefault_TypeDefinitionIndex = 42589;

	class UIAvatarSettingDefault : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AvatarPos; // 0x10
		::UnityEngine::Vector2 UIAvatarPosOffset; // 0x1C
		::UnityEngine::Vector3 AvatarRot; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTINGDEFAULT__CTOR_OFFSET))(this);
		}
	};
}
