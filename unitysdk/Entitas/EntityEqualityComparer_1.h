#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Entitas
{
	inline static constexpr unsigned int EntityEqualityComparer_1_TypeDefinitionIndex = 9668;

	template <typename TEntity>
	class EntityEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<TEntity>** StaticGet_comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(EntityEqualityComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
