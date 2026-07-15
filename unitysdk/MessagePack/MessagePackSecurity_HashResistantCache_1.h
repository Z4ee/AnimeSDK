#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_HashResistantCache_1_TypeDefinitionIndex = 7161;

	template <typename T>
	class MessagePackSecurity_HashResistantCache_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_HashResistantCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
