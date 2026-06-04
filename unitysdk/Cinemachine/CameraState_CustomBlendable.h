#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define CINEMACHINE_CAMERASTATE_CUSTOMBLENDABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB80)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_CustomBlendable_TypeDefinitionIndex = 36863;

	struct alignas(8) CameraState_CustomBlendable
	{
		::UnityEngine::Object* m_Custom; // 0x10
		::System::Single m_Weight; // 0x18

		::System::Void _ctor(::UnityEngine::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_CUSTOMBLENDABLE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
