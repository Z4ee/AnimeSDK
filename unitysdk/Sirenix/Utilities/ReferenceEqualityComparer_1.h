#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Utilities { template <typename T> class ReferenceEqualityComparer_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int ReferenceEqualityComparer_1_TypeDefinitionIndex = 6506;

	template <typename T>
	class ReferenceEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::Sirenix::Utilities::ReferenceEqualityComparer_1<T>** StaticGet_Default()
		{
			return (::Sirenix::Utilities::ReferenceEqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ReferenceEqualityComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
