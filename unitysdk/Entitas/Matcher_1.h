#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace Entitas { template <typename T> class INoneOfMatcher_1; }
namespace Entitas { template <typename T> class Matcher_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

namespace Entitas
{
	inline static constexpr unsigned int Matcher_1_TypeDefinitionIndex = 9706;

	template <typename TEntity>
	class Matcher_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _componentNames_k__BackingField; // 0x0
		::Il2CppArray<::System::Int32>* _indices; // 0x0
		::Il2CppArray<::System::Int32>* _allOfIndices; // 0x0
		::Il2CppArray<::System::Int32>* _anyOfIndices; // 0x0
		::Il2CppArray<::System::Int32>* _noneOfIndices; // 0x0
		::System::Int32 _hash; // 0x0
		::System::Boolean _isHashCached; // 0x0
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__indexBuffer()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Matcher_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__indexSetBuffer()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Matcher_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* _toStringCache; // 0x0
		::System::Text::StringBuilder* _toStringBuilder; // 0x0
	};
}
