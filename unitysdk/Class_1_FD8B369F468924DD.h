#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }

#define CLASS_1_FD8B369F468924DD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDF4570)
#define CLASS_1_FD8B369F468924DD_METHOD_1_6D8F87EA6158F503_OFFSET UNITYSDK_OFFSET(0x1CDF44D0)
#define CLASS_1_FD8B369F468924DD_METHOD_1_DBF9C2D2D859D90D_OFFSET UNITYSDK_OFFSET(0x1CDF4480)
#define CLASS_1_FD8B369F468924DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF45C0)

inline static constexpr unsigned int Class_1_FD8B369F468924DD_TypeDefinitionIndex = 41611;

class Class_1_FD8B369F468924DD : public ::System::Object
{
public:
	::UnityEngine::Collider* CEEGJCAJAHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8B369F468924DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DBF9C2D2D859D90D(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_FD8B369F468924DD_METHOD_1_DBF9C2D2D859D90D_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_6D8F87EA6158F503()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8B369F468924DD_METHOD_1_6D8F87EA6158F503_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8B369F468924DD_CLEAR_OFFSET))(this);
	}
};
