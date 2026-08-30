#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA58E30)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA58E60)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58650)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_RectIntEqualityComparer_TypeDefinitionIndex = 43102;

	class UnityEqualityComparer_RectIntEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::RectInt a1, ::UnityEngine::RectInt a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectInt, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::RectInt a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTINTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
