#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIAVATARSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x181CEB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSetting_TypeDefinitionIndex = 47284;

	class UIAvatarSetting : public ::System::Object
	{
	public:
		::System::Boolean IsOverrideOffset; // 0x10
		::UnityEngine::Vector3 AvatarRot; // 0x14
		::UnityEngine::Vector2 UIAvatarPosOffset; // 0x20
		::UnityEngine::Vector3 AvatarPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING__CTOR_OFFSET))(this);
		}
	};
}
