#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_FINDSETBITINDEX_OFFSET UNITYSDK_OFFSET(0x1E5EAC30)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6DC00)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA6DC70)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DBE0)

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArraySetIndexEnumerator_TypeDefinitionIndex = 8436;

	struct alignas(8) NativeBitArraySetIndexEnumerator
	{
		::System::UInt32* _begin; // 0x10
		::System::UInt32* _end; // 0x18
		::System::Int64 _index; // 0x20

		::System::Void _ctor(::System::UInt32* begin, ::System::Int64 wordCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32*, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR__CTOR_OFFSET))(this, begin, wordCount);
		}

		::System::Int64 get_Current()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		static ::System::Int64 FindSetBitIndex(::System::Int64 index, ::System::UInt32* begin, ::System::UInt32* end)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::UInt32*, ::System::UInt32*))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_FINDSETBITINDEX_OFFSET))(index, begin, end);
		}
	};
}
