#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"

namespace MessagePack { template <typename T> class MessagePackSecurity_CollisionResistantHasherUnmanaged_1; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_CollisionResistantHasherUnmanaged_1_TypeDefinitionIndex = 7163;

	template <typename T>
	class MessagePackSecurity_CollisionResistantHasherUnmanaged_1 : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<T>
	{
	public:
		static ::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<T>** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<T>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_CollisionResistantHasherUnmanaged_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
