#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBoneColliderBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DYNAMICBONEPLANECOLLIDER_COLLIDE_OFFSET UNITYSDK_OFFSET(0x1F5EAA80)
#define DYNAMICBONEPLANECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F5EAA70)
#define DYNAMICBONEPLANECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EAE60)

inline static constexpr unsigned int DynamicBonePlaneCollider_TypeDefinitionIndex = 35289;

class DynamicBonePlaneCollider : public ::DynamicBoneColliderBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER__CTOR_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER_ONVALIDATE_OFFSET))(this);
	}

	::System::Boolean Collide(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONEPLANECOLLIDER_COLLIDE_OFFSET))(this, particlePosition, particleRadius);
	}
};
