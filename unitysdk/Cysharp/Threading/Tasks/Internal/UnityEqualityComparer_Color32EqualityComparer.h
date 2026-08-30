#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA58980)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA589C0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA585E0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Color32EqualityComparer_TypeDefinitionIndex = 43098;

	class UnityEqualityComparer_Color32EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Color32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_COLOR32EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
