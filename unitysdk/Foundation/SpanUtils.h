#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpanUtils_ReadOnlySpanIterator_1.h"
#include "unitysdk/Foundation/SpanUtils_SpanIterator_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { template <typename T> class Predicate_1; }

#define FOUNDATION_SPANUTILS_BEGININDEX_OFFSET UNITYSDK_OFFSET(0x1F562710)
#define FOUNDATION_SPANUTILS_ENDINDEX_OFFSET UNITYSDK_OFFSET(0x1F562700)
#define FOUNDATION_SPANUTILS_ENSUREINDEX_OFFSET UNITYSDK_OFFSET(0x1F562720)

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_TypeDefinitionIndex = 8711;

	class SpanUtils : public ::System::Object
	{
	public:
		static ::System::Int32 EndIndex(::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_ENDINDEX_OFFSET))(spanLength, step);
		}

		static ::System::Int32 BeginIndex(::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_BEGININDEX_OFFSET))(spanLength, step);
		}

		static ::System::Int32 EnsureIndex(::System::Int32 index, ::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_ENSUREINDEX_OFFSET))(index, spanLength, step);
		}
	};
}
