#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBoneColliderBase_Bound.h"
#include "unitysdk/DynamicBoneColliderBase_Direction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DYNAMICBONECOLLIDERBASE_COLLIDE_OFFSET UNITYSDK_OFFSET(0x1E1B03D0)
#define DYNAMICBONECOLLIDERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B0350)

inline static constexpr unsigned int DynamicBoneColliderBase_TypeDefinitionIndex = 34625;

class DynamicBoneColliderBase : public ::UnityEngine::MonoBehaviour
{
public:
	::DynamicBoneColliderBase_Direction m_Direction; // 0x18
	::UnityEngine::Vector3 m_Center; // 0x1C
	::DynamicBoneColliderBase_Bound m_Bound; // 0x28
	::System::Boolean drawGizmos; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDERBASE__CTOR_OFFSET))(this);
	}

	::System::Boolean Collide(::UnityEngine::Vector3& particlePosition, ::System::Single particleRadius)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDERBASE_COLLIDE_OFFSET))(this, particlePosition, particleRadius);
	}
};
