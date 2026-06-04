#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET UNITYSDK_OFFSET(0x383F010)
#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET UNITYSDK_OFFSET(0x383EF50)
#define COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x383EF00)
#define COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x383EEB0)
#define COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x18883780)
#define COLLECTIONS_POOLED_BITHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x383EE60)

namespace Collections::Pooled
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 5061;

	struct alignas(8) BitHelper
	{
		// static const ::System::Int32 s_intSize = 0x20; // 0x0
		::System::Span_1<::System::Int32> _span; // 0x10

		::System::Void _ctor(::System::Span_1<::System::Int32> a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MarkBit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET))(this, a1);
		}

		::System::Boolean IsMarked(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET))(this, a1);
		}

		::System::Int32 FindFirstUnmarked(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET))(this, a1);
		}

		::System::Int32 FindFirstMarked(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET))(this, a1);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET))(a1);
		}
	};
}
