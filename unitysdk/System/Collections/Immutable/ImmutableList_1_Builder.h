#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableList_1_Builder_TypeDefinitionIndex = 7019;

	template <typename T>
	class ImmutableList_1_Builder : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableList_1_Node<T>* _root; // 0x0
		::System::Collections::Immutable::ImmutableList_1<T>* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
