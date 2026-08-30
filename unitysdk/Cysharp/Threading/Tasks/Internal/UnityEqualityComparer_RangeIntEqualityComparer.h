#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA58CB0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA58CC0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58640)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_RangeIntEqualityComparer_TypeDefinitionIndex = 43101;

	class UnityEqualityComparer_RangeIntEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::RangeInt a1, ::UnityEngine::RangeInt a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RangeInt, ::UnityEngine::RangeInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::RangeInt a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RangeInt))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RANGEINTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
