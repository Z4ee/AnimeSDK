#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class UnrepeatableRandomAccessStrategy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int UnrepeatableRandomAccessStrategy_1_TypeDefinitionIndex = 57301;

	template <typename T>
	class UnrepeatableRandomAccessStrategy_1 : public ::System::Object
	{
	public:
		::System::Int32 _ElementCount; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _Indexes; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _UsedIndexes; // 0x0
	};
}
