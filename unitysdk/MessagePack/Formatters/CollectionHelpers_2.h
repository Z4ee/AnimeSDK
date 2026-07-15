#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CollectionHelpers_2_TypeDefinitionIndex = 7374;

	template <typename TCollection, typename TEqualityComparer>
	class CollectionHelpers_2 : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Int32, TEqualityComparer, TCollection>** StaticGet_collectionCreator()
		{
			return (::System::Func_3<::System::Int32, TEqualityComparer, TCollection>**)Il2CppClass::FromTypeDefinitionIndex(CollectionHelpers_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
