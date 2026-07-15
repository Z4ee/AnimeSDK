#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ChunkedStructList_1_TypeDefinitionIndex = 33770;

	template <typename T>
	class ChunkedStructList_1 : public ::System::Object
	{
	public:
		::System::Int32 _count; // 0x0
		::System::Int32 _chunkSize; // 0x0
		::System::Collections::Generic::List_1<::System::IntPtr>* _chunks; // 0x0
	};
}
