#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputInterfaceMesh_HEU_InputColliderType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATACOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A582B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_HEU_InputDataCollider_TypeDefinitionIndex = 39351;

	class HEU_InputInterfaceMesh_HEU_InputDataCollider : public ::System::Object
	{
	public:
		::UnityEngine::Collider* _collider; // 0x10
		::HoudiniEngineUnity::HEU_InputInterfaceMesh_HEU_InputColliderType _colliderType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESH_HEU_INPUTDATACOLLIDER__CTOR_OFFSET))(this);
		}
	};
}
