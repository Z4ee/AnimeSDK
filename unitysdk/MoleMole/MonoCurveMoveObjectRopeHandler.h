#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCURVEMOVEOBJECTROPEHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x149FB890)
#define MOLEMOLE_MONOCURVEMOVEOBJECTROPEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149FBD20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCurveMoveObjectRopeHandler_TypeDefinitionIndex = 62253;

	class MonoCurveMoveObjectRopeHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* fixedPoint; // 0x18
		::UnityEngine::GameObject* nonFixedPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJECTROPEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJECTROPEHANDLER_LATEUPDATE_OFFSET))(this);
		}
	};
}
