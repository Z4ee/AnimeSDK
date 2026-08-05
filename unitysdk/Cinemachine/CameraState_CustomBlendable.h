#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define CINEMACHINE_CAMERASTATE_CUSTOMBLENDABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x424FB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_CustomBlendable_TypeDefinitionIndex = 34729;

	struct alignas(8) CameraState_CustomBlendable
	{
		::UnityEngine::Object* m_Custom; // 0x10
		::System::Single m_Weight; // 0x18

		::System::Void _ctor(::UnityEngine::Object* custom, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_CUSTOMBLENDABLE__CTOR_OFFSET))(this, custom, weight);
		}
	};
}
