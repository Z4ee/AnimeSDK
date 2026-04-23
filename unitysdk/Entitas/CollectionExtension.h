#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define ENTITAS_COLLECTIONEXTENSION_SINGLEENTITY_OFFSET UNITYSDK_OFFSET(0x12C50210)

namespace Entitas
{
	inline static constexpr unsigned int CollectionExtension_TypeDefinitionIndex = 9845;

	class CollectionExtension : public ::System::Object
	{
	public:
		static ::Entitas::IEntity* SingleEntity(::System::Collections::Generic::ICollection_1<::Entitas::IEntity*>* collection)
		{
			return ((::Entitas::IEntity*(*)(::System::Collections::Generic::ICollection_1<::Entitas::IEntity*>*))((::PBYTE)hIl2Cpp + ENTITAS_COLLECTIONEXTENSION_SINGLEENTITY_OFFSET))(collection);
		}
	};
}
