#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D751180)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D751200)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7508A0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Vector2EqualityComparer_TypeDefinitionIndex = 43091;

	class UnityEqualityComparer_Vector2EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR2EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
