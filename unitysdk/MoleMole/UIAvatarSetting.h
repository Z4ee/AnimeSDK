#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIAVATARSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19776350)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSetting_TypeDefinitionIndex = 84148;

	class UIAvatarSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 UIAvatarPosOffset; // 0x10
		::System::Boolean IsOverrideOffset; // 0x18
		::UnityEngine::Vector3 AvatarPos; // 0x1C
		::UnityEngine::Vector3 AvatarRot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING__CTOR_OFFSET))(this);
		}
	};
}
