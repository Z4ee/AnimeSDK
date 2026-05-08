#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBoneColliderBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Reflection { class MethodInfo; }

#define DYNAMICBONECOLLIDER_COLLIDE_OFFSET UNITYSDK_OFFSET(0x1BE6EA80)
#define DYNAMICBONECOLLIDER_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0x1BE6F710)
#define DYNAMICBONECOLLIDER_INSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x1BE6F480)
#define DYNAMICBONECOLLIDER_INSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x1BE6F0D0)
#define DYNAMICBONECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BE6EA70)
#define DYNAMICBONECOLLIDER_OUTSIDECAPSULE_OFFSET UNITYSDK_OFFSET(0x1BE6F1B0)
#define DYNAMICBONECOLLIDER_OUTSIDESPHERE_OFFSET UNITYSDK_OFFSET(0x1BE6F000)
#define DYNAMICBONECOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE6FD30)
#define DYNAMICBONECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6FC40)

inline static constexpr unsigned int DynamicBoneCollider_TypeDefinitionIndex = 33066;

class DynamicBoneCollider : public ::DynamicBoneColliderBase
{
public:
	static ::System::Reflection::MethodInfo** StaticGet_cacheDrawFunction()
	{
		return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicBoneCollider_TypeDefinitionIndex)->GetStaticField(0x260E0);
	}
	::System::Single m_Radius; // 0x30
	::System::Single m_Height; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER__CCTOR_OFFSET))();
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_ONVALIDATE_OFFSET))(this);
	}

	::System::Boolean Collide(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_COLLIDE_OFFSET))(this, particlePosition, particleRadius);
	}

	static ::System::Boolean OutsideSphere(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius, ::UnityEngine::Vector3 sphereCenter, ::System::Single sphereRadius)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_OUTSIDESPHERE_OFFSET))(particlePosition, particleRadius, sphereCenter, sphereRadius);
	}

	static ::System::Boolean InsideSphere(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius, ::UnityEngine::Vector3 sphereCenter, ::System::Single sphereRadius)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_INSIDESPHERE_OFFSET))(particlePosition, particleRadius, sphereCenter, sphereRadius);
	}

	static ::System::Boolean OutsideCapsule(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, ::System::Single capsuleRadius)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_OUTSIDECAPSULE_OFFSET))(particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius);
	}

	static ::System::Boolean InsideCapsule(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, ::System::Single capsuleRadius)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_INSIDECAPSULE_OFFSET))(particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius);
	}

	static ::System::Void DrawWireCapsule(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Single height, ::UnityEngine::Color color, ::UnityEngine::Quaternion rotation)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDER_DRAWWIRECAPSULE_OFFSET))(center, radius, height, color, rotation);
	}
};
