#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { template <typename T> class MessagePackSecurity_CollisionResistantHasher_1; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_CollisionResistantHasher_1_TypeDefinitionIndex = 29829;

	template <typename T>
	class MessagePackSecurity_CollisionResistantHasher_1 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<T>** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<T>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_CollisionResistantHasher_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
