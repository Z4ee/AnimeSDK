#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA589F0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA58AD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA585D0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_ColorEqualityComparer_TypeDefinitionIndex = 43094;

	class UnityEqualityComparer_ColorEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Color a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOREQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
