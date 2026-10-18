#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_IMMUTABLECOLLECTION_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1BB61A30)

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 7371;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(a1);
		}
	};
}
