#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MONODETECTCOLLIDER_LOOKAROUND_OFFSET UNITYSDK_OFFSET(0x1E7A7610)
#define MONODETECTCOLLIDER_LOOK_OFFSET UNITYSDK_OFFSET(0x1E7A7570)
#define MONODETECTCOLLIDER_START_OFFSET UNITYSDK_OFFSET(0x1E7A7030)
#define MONODETECTCOLLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E7A7040)
#define MONODETECTCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A7C50)

inline static constexpr unsigned int MonoDetectCollider_TypeDefinitionIndex = 91058;

class MonoDetectCollider : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single Epsilon; // 0x0
	::UnityEngine::Transform* target; // 0x18
	::UnityEngine::Transform* original; // 0x20
	::System::Single PrecisionSlush; // 0x28
	::System::Single minDistanceFromTarget; // 0x2C
	::UnityEngine::LayerMask againstLayerMask; // 0x30
	::UnityEngine::Vector3 rayDir; // 0x34
	::UnityEngine::Vector3 lookAtPos; // 0x40
	::System::Single yOffset; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODETECTCOLLIDER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODETECTCOLLIDER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODETECTCOLLIDER_UPDATE_OFFSET))(this);
	}

	::System::Boolean Look()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODETECTCOLLIDER_LOOK_OFFSET))(this);
	}

	::System::Boolean LookAround(::UnityEngine::Vector3 originalPos, ::UnityEngine::Vector3 forward, ::System::Single lookRange, ::UnityEngine::Quaternion eulerAnger, ::UnityEngine::Color DebugColor, ::UnityEngine::Color DetectColor)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MONODETECTCOLLIDER_LOOKAROUND_OFFSET))(this, originalPos, forward, lookRange, eulerAnger, DebugColor, DetectColor);
	}
};
