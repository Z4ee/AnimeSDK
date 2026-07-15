#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_PrimitiveChecker_1_TypeDefinitionIndex = 7175;

	template <typename T>
	class MessagePackSerializer_PrimitiveChecker_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsMessagePackFixedSizePrimitive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_PrimitiveChecker_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
