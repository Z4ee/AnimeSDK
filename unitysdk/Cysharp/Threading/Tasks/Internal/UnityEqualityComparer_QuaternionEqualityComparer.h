#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA58B50)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA58C30)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58610)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_QuaternionEqualityComparer_TypeDefinitionIndex = 43097;

	class UnityEqualityComparer_QuaternionEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Quaternion a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_QUATERNIONEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
