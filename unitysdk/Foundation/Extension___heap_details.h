#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define FOUNDATION_EXTENSION___HEAP_DETAILS___GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B3804B0)
#define FOUNDATION_EXTENSION___HEAP_DETAILS___GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1B3804A0)

namespace Foundation
{
	inline static constexpr unsigned int Extension___heap_details_TypeDefinitionIndex = 9119;

	class Extension___heap_details : public ::System::Object
	{
	public:
		static ::System::Int32 __get_parent(::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___HEAP_DETAILS___GET_PARENT_OFFSET))(index);
		}

		static ::System::ReadOnlySpan_1<::System::Int32> __get_children(::System::Int32 index, ::System::Int32 count, ::System::Span_1<::System::Int32> buffer)
		{
			return ((::System::ReadOnlySpan_1<::System::Int32>(*)(::System::Int32, ::System::Int32, ::System::Span_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___HEAP_DETAILS___GET_CHILDREN_OFFSET))(index, count, buffer);
		}
	};
}
