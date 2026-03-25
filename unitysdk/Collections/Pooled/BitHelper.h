#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET UNITYSDK_OFFSET(0x20DC460)
#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET UNITYSDK_OFFSET(0x20DC3A0)
#define COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x20DC350)
#define COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x20DC300)
#define COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x164AA240)
#define COLLECTIONS_POOLED_BITHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x20DC2B0)

namespace Collections::Pooled
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 5299;

	struct alignas(8) BitHelper
	{
		// static const ::System::Int32 s_intSize = 0x20; // 0x0
		::System::Span_1<::System::Int32> _span; // 0x10

		::System::Void _ctor(::System::Span_1<::System::Int32> span, ::System::Boolean clear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER__CTOR_OFFSET))(this, span, clear);
		}

		::System::Void MarkBit(::System::Int32 bitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET))(this, bitPosition);
		}

		::System::Boolean IsMarked(::System::Int32 bitPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET))(this, bitPosition);
		}

		::System::Int32 FindFirstUnmarked(::System::Int32 startPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET))(this, startPosition);
		}

		::System::Int32 FindFirstMarked(::System::Int32 startPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET))(this, startPosition);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET))(n);
		}
	};
}
