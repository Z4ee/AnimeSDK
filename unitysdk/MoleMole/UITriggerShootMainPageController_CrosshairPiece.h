#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_CROSSHAIRPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x713E40)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootMainPageController_CrosshairPiece_TypeDefinitionIndex = 57992;

	struct alignas(8) UITriggerShootMainPageController_CrosshairPiece
	{
		::UnityEngine::Transform* PieceTransform; // 0x10
		::UnityEngine::Vector3 DefaultOffset; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* pieceTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_CROSSHAIRPIECE__CTOR_OFFSET))(this, pieceTransform);
		}
	};
}
