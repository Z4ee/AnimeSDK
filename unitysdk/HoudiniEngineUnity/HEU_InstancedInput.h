#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INSTANCEDINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C91CC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InstancedInput_TypeDefinitionIndex = 43516;

	class HEU_InstancedInput : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _instancedGameObject; // 0x10
		::UnityEngine::Vector3 _rotationOffset; // 0x18
		::UnityEngine::Vector3 _scaleOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEDINPUT__CTOR_OFFSET))(this);
		}
	};
}
