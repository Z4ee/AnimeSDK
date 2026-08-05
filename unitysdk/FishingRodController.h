#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define FISHINGRODCONTROLLER_BLENDTO_OFFSET UNITYSDK_OFFSET(0x14D73FD0)
#define FISHINGRODCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14D72B30)
#define FISHINGRODCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14D730F0)
#define FISHINGRODCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x14D730A0)
#define FISHINGRODCONTROLLER_TRYINITIALIZE_OFFSET UNITYSDK_OFFSET(0x14D72C80)
#define FISHINGRODCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14D74040)

inline static constexpr unsigned int FishingRodController_TypeDefinitionIndex = 57003;

class FishingRodController : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single ALMOST_ZERO; // 0x0
	::UnityEngine::Transform* RodStart; // 0x18
	::UnityEngine::Transform* RodMiddle; // 0x20
	::UnityEngine::Transform* RodEnd; // 0x28
	::UnityEngine::Transform* LineStart; // 0x30
	::UnityEngine::Transform* LineEnd; // 0x38
	::System::Single FactorLimit; // 0x40
	::System::Single Force; // 0x44
	::System::Single ForceThreshold; // 0x48
	::System::Single AngleThreashold; // 0x4C
	::System::Boolean initialized; // 0x50
	::UnityEngine::Vector3 rodBindVec; // 0x54
	::UnityEngine::Quaternion rodStartBindRot; // 0x60
	::UnityEngine::Quaternion rodMiddleBindRot; // 0x70
	::System::Boolean enableIk; // 0x80
	::System::Single realBlendRate; // 0x84
	::System::Single blendToSeconds; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean TryInitialize()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER_TRYINITIALIZE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER_START_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void BlendTo(::System::Single blendToSeconds, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FISHINGRODCONTROLLER_BLENDTO_OFFSET))(this, blendToSeconds, enable);
	}
};
