#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { template <typename T1, typename T2> class MessagePackSecurity_CollisionResistantEnumHasher_2; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_CollisionResistantEnumHasher_2_TypeDefinitionIndex = 7171;

	template <typename TEnum, typename TUnderlying>
	class MessagePackSecurity_CollisionResistantEnumHasher_2 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSecurity_CollisionResistantEnumHasher_2<TEnum, TUnderlying>** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_CollisionResistantEnumHasher_2<TEnum, TUnderlying>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_CollisionResistantEnumHasher_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
