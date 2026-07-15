#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Builder; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableList_1_TypeDefinitionIndex = 7018;

	template <typename T>
	class ImmutableList_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableList_1<T>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableList_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Immutable::ImmutableList_1_Node<T>* _root; // 0x0
	};
}
