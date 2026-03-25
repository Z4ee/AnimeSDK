#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkEnvironment;
namespace UnityEngine { class BoxCollider; }

#define AKENVIRONMENTPORTAL_GETAUXSENDVALUEFORPOSITION_OFFSET UNITYSDK_OFFSET(0x18BAA990)
#define AKENVIRONMENTPORTAL_GET_BOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x18BAA6B0)
#define AKENVIRONMENTPORTAL_GET_ENVIRONMENTSSHAREAUXBUS_OFFSET UNITYSDK_OFFSET(0x18BAA770)
#define AKENVIRONMENTPORTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAAEB0)

inline static constexpr unsigned int AkEnvironmentPortal_TypeDefinitionIndex = 34656;

class AkEnvironmentPortal : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 MAX_ENVIRONMENTS_PER_PORTAL = 0x2; // 0x0
	::UnityEngine::Vector3 axis; // 0x18
	::Il2CppArray<::AkEnvironment*>* environments; // 0x28
	::UnityEngine::BoxCollider* m_BoxCollider; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL__CTOR_OFFSET))(this);
	}

	::UnityEngine::BoxCollider* get_BoxCollider()
	{
		return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_GET_BOXCOLLIDER_OFFSET))(this);
	}

	::System::Boolean get_EnvironmentsShareAuxBus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_GET_ENVIRONMENTSSHAREAUXBUS_OFFSET))(this);
	}

	::System::Single GetAuxSendValueForPosition(::UnityEngine::Vector3 in_position, ::System::Int32 index)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_GETAUXSENDVALUEFORPOSITION_OFFSET))(this, in_position, index);
	}
};
