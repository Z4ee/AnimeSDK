#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableQueue_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableQueue_1_TypeDefinitionIndex = 7023;

	template <typename T>
	class ImmutableQueue_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableQueue_1<T>** StaticGet_s_EmptyField()
		{
			return (::System::Collections::Immutable::ImmutableQueue_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableQueue_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Immutable::ImmutableStack_1<T>* _backwards; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _forwards; // 0x0
		::System::Collections::Immutable::ImmutableStack_1<T>* _backwardsReversed; // 0x0
	};
}
