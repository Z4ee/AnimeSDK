#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ReferenceEqualityComparer_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ReferenceEqualityComparer_1_TypeDefinitionIndex = 33893;

	template <typename T>
	class ReferenceEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::ReferenceEqualityComparer_1<T>** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::ReferenceEqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ReferenceEqualityComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
