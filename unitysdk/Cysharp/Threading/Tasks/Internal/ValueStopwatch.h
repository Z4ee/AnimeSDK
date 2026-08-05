#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0xAC65A0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x3CCD40)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1FAA4EA0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA5050)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ValueStopwatch_TypeDefinitionIndex = 32108;

	struct alignas(8) ValueStopwatch
	{
		static ::System::Double* StaticGet_TimestampToTicks()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(ValueStopwatch_TypeDefinitionIndex)->GetStaticField(0x7C00);
		}
		::System::Int64 startTimestamp; // 0x10

		::System::Void _ctor(::System::Int64 startTimestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH__CTOR_OFFSET))(this, startTimestamp);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH__CCTOR_OFFSET))();
		}

		static ::Cysharp::Threading::Tasks::Internal::ValueStopwatch StartNew()
		{
			return ((::Cysharp::Threading::Tasks::Internal::ValueStopwatch(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET))();
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET))(this);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET))(this);
		}
	};
}
