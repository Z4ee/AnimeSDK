#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA588A0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA58960)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA59060)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58630)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Vector3IntEqualityComparer_TypeDefinitionIndex = 43100;

	class UnityEqualityComparer_Vector3IntEqualityComparer : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer** StaticGet_Default()
		{
			return (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_Vector3IntEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
