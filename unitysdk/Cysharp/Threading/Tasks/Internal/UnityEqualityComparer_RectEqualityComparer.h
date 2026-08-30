#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D750FD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7510B0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7508F0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_RectEqualityComparer_TypeDefinitionIndex = 43095;

	class UnityEqualityComparer_RectEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Rect a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_RECTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
