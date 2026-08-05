#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIAVATARSETTINGDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x192FBC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSettingDefault_TypeDefinitionIndex = 80484;

	class UIAvatarSettingDefault : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 UIAvatarPosOffset; // 0x10
		::UnityEngine::Vector3 AvatarRot; // 0x18
		::UnityEngine::Vector3 AvatarPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTINGDEFAULT__CTOR_OFFSET))(this);
		}
	};
}
