#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERAMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDA760)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFirstPersonCameraMotionConfig_TypeDefinitionIndex = 86967;

	class ScopedFirstPersonCameraMotionConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 moveSpeed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERAMOTIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
