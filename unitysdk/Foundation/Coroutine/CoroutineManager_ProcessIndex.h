#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x916FF0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x916F90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x917000)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA0AA70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA0AAC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x917060)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9170C0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager_ProcessIndex_TypeDefinitionIndex = 7847;

	struct alignas(4) CoroutineManager_ProcessIndex
	{
		::Foundation::Coroutine::Segment seg; // 0x10
		::System::Int32 i; // 0x14

		::System::Boolean Equals(::Foundation::Coroutine::CoroutineManager_ProcessIndex other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Foundation::Coroutine::CoroutineManager_ProcessIndex a, ::Foundation::Coroutine::CoroutineManager_ProcessIndex b)
		{
			return ((::System::Boolean(*)(::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Foundation::Coroutine::CoroutineManager_ProcessIndex a, ::Foundation::Coroutine::CoroutineManager_ProcessIndex b)
		{
			return ((::System::Boolean(*)(::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PROCESSINDEX___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
