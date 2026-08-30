#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundsInt.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D750A90)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D750BC0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D750960)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_BoundsIntEqualityComparer_TypeDefinitionIndex = 43103;

	class UnityEqualityComparer_BoundsIntEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::BoundsInt a1, ::UnityEngine::BoundsInt a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoundsInt, ::UnityEngine::BoundsInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::BoundsInt a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::BoundsInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSINTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
