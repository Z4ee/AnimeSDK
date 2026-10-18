#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F120020)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F120080)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F11FFB0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_BoundsEqualityComparer_TypeDefinitionIndex = 38681;

	class UnityEqualityComparer_BoundsEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Bounds a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_BOUNDSEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
