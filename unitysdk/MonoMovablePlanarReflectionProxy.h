#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MONOMOVABLEPLANARREFLECTIONPROXY_CHECKTRIGGERINPROXY_OFFSET UNITYSDK_OFFSET(0x1C3FF260)
#define MONOMOVABLEPLANARREFLECTIONPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C3FF7B0)
#define MONOMOVABLEPLANARREFLECTIONPROXY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1C3FF860)
#define MONOMOVABLEPLANARREFLECTIONPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3FF6D0)
#define MONOMOVABLEPLANARREFLECTIONPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FFA00)
#define MONOMOVABLEPLANARREFLECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FF9B0)

inline static constexpr unsigned int MonoMovablePlanarReflectionProxy_TypeDefinitionIndex = 27947;

class MonoMovablePlanarReflectionProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::HashSet_1<::MonoMovablePlanarReflectionProxy*>** StaticGet_s_ProxyList()
	{
		return (::System::Collections::Generic::HashSet_1<::MonoMovablePlanarReflectionProxy*>**)Il2CppClass::FromTypeDefinitionIndex(MonoMovablePlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x23B50);
	}
	::UnityEngine::Bounds m_BoundsOS; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY__CCTOR_OFFSET))();
	}

	static ::System::Boolean CheckTriggerInProxy(::UnityEngine::Vector3 triggerPositionWS)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY_CHECKTRIGGERINPROXY_OFFSET))(triggerPositionWS);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMOVABLEPLANARREFLECTIONPROXY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
