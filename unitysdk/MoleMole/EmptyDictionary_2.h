#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace MoleMole { template <typename T1, typename T2> class EmptyDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

namespace MoleMole
{
	inline static constexpr unsigned int EmptyDictionary_2_TypeDefinitionIndex = 53338;

	template <typename TKey, typename TValue>
	class EmptyDictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey, TValue>
	{
	public:
		static ::MoleMole::EmptyDictionary_2<TKey, TValue>** StaticGet__emptyInstance()
		{
			return (::MoleMole::EmptyDictionary_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(EmptyDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
